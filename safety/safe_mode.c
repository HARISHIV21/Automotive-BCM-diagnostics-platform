
#include <stdio.h>

void Safety_Runtime(float voltage)
{
    if(voltage < 10.2)
    {
        printf("[CRITICAL][SAFETY_MANAGER]\n");
        printf("ECU entering degraded operational mode\n");
    }
    else
    {
        printf("[INFO][SAFETY_MANAGER] ECU operating normally\n");
    }
}
