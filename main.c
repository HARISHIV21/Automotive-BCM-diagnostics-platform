
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

extern void Boot_Init(void);
extern void Scheduler_Init(void);
extern void CAN_Runtime(int tick);
extern void DTC_Runtime(float voltage);
extern void Safety_Runtime(float voltage);
extern void Runtime_Status(int tick);
extern void CSV_Log(int tick,float voltage);
extern void Analytics_Update(float voltage);
extern void Analytics_Report(void);

float battery_voltage = 12.6;

int main()
{
    srand(time(NULL));

    printf("=============================================================\n");
    printf(" TOP-TIER BCM ECU RUNTIME SIMULATION\n");
    printf("=============================================================\n");

    Boot_Init();
    Scheduler_Init();

    for(int tick=0; tick<30; tick++)
    {
        float fluctuation = ((rand()%8) * 0.03);
        battery_voltage -= fluctuation;

        printf("\n================ ECU CYCLE %02d ================\n",tick);

        CAN_Runtime(tick);
        DTC_Runtime(battery_voltage);
        Safety_Runtime(battery_voltage);
        Runtime_Status(tick);

        CSV_Log(tick,battery_voltage);
        Analytics_Update(battery_voltage);

        sleep(1);
    }

    Analytics_Report();

    return 0;
}
