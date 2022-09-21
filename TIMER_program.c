#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "TIMER_interface.h"
#include "Timer_private.h"
#include "Timer_config.h"


void TIMER_init(u8 dutyCycle)
{

	SET_BIT(TIM6_CR1,ARPE);
	SET_BIT(TIM6_CR1,OPM);
	CLR_BIT(TIM6_CR1,UDIS);

	//we will use polling instead of interrupt in this driver.
	CLR_BIT(TIM6_DIER,UIE);
	CLR_BIT(TIM6_CR1,URS);

	TIM6_PSC = 16; 		 //Prescalar is 16

	//assuming that the frequency is 16MHZ and counting to 1024 to achieve prescalar 1khz

	TIM6_CNT = dutyCycle; 	// to get frequency 1khz
}


void TIMER_set(u16 value)
{

}

void TIMER_start()
{
	//timer starts
	SET_BIT(TIM6_CR1,CEN);
}

void TIMER_stop()
{
	//completely disables the timer
	CLR_BIT(TIM6_CR1,CEN);
}

u8 TIMER_getstate()
{
	//returns the state of the timer if it had overflowed or not yet
	return GET_BIT(TIM6_SR,UIF);
}

