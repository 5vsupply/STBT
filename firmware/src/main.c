#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "esp_system.h"
#include "esp_log.h"

void hello_task(void *pvParameter)
{
    for(;;) {
        vTaskDelay(1000 / portTICK_RATE_MS);
    }
    //printf("Hello world!\n");
    //for (int i = 10; i >= 0; i--) {
        //printf("Restarting in %d seconds...\n", i);
    //}
    //printf("Restarting now.\n");
    //fflush(stdout);
    //esp_restart();
}

void app_main() {
    xTaskCreate(&hello_task, "hello_task", 2048, NULL, 5, NULL);
}
