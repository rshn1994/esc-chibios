#include <ch.h>
#include <hal.h>

#include "spi.h"

static SPIConfig *config;

static uint16_t SPI2_TRANSMIT_BUFFER[1];
static uint16_t SPI2_RECEIVE_BUFFER[1];

void spi2_init(uint16_t cr1, uint16_t cr2) {
  if (!config) {
    config = chHeapAlloc(NULL, sizeof(SPIConfig));
  }

  config->circular = false; // no circular buffer
  config->end_cb = NULL; // no callback
  config->ssport = GPIOB; // chip select port
  config->sspad = 12; // chip select pad
  config->cr1 = cr1;
  config->cr2 = cr2;
  spiStart(&SPID2, config);

  palSetPadMode(GPIOB, 12, PAL_MODE_ALTERNATE(5)); // NSS
  palSetPadMode(GPIOB, 13, PAL_MODE_ALTERNATE(5)); // SCLK
  palSetPadMode(GPIOB, 14, PAL_MODE_ALTERNATE(5)); // MISO
  palSetPadMode(GPIOB, 15, PAL_MODE_ALTERNATE(5)); // MOSI
}

uint16_t spi2_exchange_word(uint16_t tx) {
  SPI2_TRANSMIT_BUFFER[0] = tx;

  spiSelect(&SPID2);
  palClearPad(GPIOB, 12);
  spiExchange(&SPID2, 1, SPI2_TRANSMIT_BUFFER, SPI2_RECEIVE_BUFFER);
  palSetPad(GPIOB, 12);
  spiUnselect(&SPID2);

  return SPI2_RECEIVE_BUFFER[0];
}
