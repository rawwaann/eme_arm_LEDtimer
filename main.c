#include "rgb_app.h"
#include "timer_captureTime.h"
//uint32 first_tick;
int main(void)
{
    //first_tick =0;
    buttonInit(PORTD_ID, 0);
    LedInit();

    wtimer2_Init(TIMER2);
    Clear_Bit(GPIO_PORTF_DATA_R,RED_LED);
    Clear_Bit(GPIO_PORTF_DATA_R,BLUE_LED);
    Clear_Bit(GPIO_PORTF_DATA_R,GREEN_LED);

    while(1)
    {
    }
}
