
#include <stdio.h>
#include <stdint.h>

#include "sl_i2cspm_instances.h"
#include "sl_udelay.h"
#include "sl_iostream.h"
#include "sl_iostream_init_eusart_instances.h"
#include "veml6030.h"

/* VCOM stream handle */
extern sl_iostream_t *sl_iostream_vcom_handle;

int main(void)
{
    /* Initialize EUSART for UART communication */
    sl_iostream_eusart_init_instances();

    /* Set VCOM as the default output stream */
    sl_iostream_set_default(sl_iostream_vcom_handle);

    printf("\r\nSystem booted...\r\n");
    printf("VEML6030 Light Sensor Starting...\r\n");

    /* Initialize I2C peripheral */
    sl_i2cspm_init_instances();

    /* Initialize VEML6030 sensor */
    VEML6030_init();

    /* Configure VEML6030 sensor */
    VEML6030_config(
        GAIN_1,
        ALS_100,
        ALS_PER_1,
        ALS_INT_DISABLE,
        ALS_POWER_ON
    );

    printf("VEML6030 initialized successfully.\r\n");

    /* Continuously read sensor values */
    while (1)
    {
        uint16_t ambient = Get_ambient();
        uint16_t white = Get_white();

        /* Display sensor readings through UART/VCOM */
        printf("Ambient: %u lux | White: %u\r\n",
               (unsigned int)ambient,
               (unsigned int)white);

        /* Delay for 1 second */
        sl_udelay_wait(1000000);
    }

    return 0;
}
