#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "TIMER_interface.h"
#include "PWM.h"

void SWPWM_init(uint32_t frequency_kh,unit8_t dutyCycle)
{

}

void SWPWM_start(void)
{

	 TIMER_start();
}

void SWPMM_changeDutyCycle(uint8_t newDutyCycle)
{

}

void SWPWM_stop()
{
	 TIMER_stop();

}
