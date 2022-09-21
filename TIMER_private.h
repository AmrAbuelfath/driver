

#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H
/****************************************** TIMER 0 REGISTERS *************************************/
#define 	TIM6_CR1		 		*((volatile u16 *)(0x40001000))
#define 	TIM6_CR2				*((volatile u16 *)(0x40001004))
#define 	TIM6_DIER				*((volatile u16 *)(0x4000100C))
#define 	TIM6_SR					*((volatile u16 *)(0x40001010))
#define 	TIM6_EGR				*((volatile u16 *)(0x40001014))
#define 	TIM6_CNT				*((volatile u16 *)(0x40001024))
#define 	TIM6_PSC				*((volatile u16 *)(0x40001028))
#define 	TIM6_ARR				*((volatile u16 *)(0x4000102C))

//TIMx_CR1 Bits
#define 	ARPE					7
#define		OPM						3
#define 	URS						2
#define		UDIS					1
#define		CEN						0

//TIMx_DIER Bits
#define 	UIE						0


//TIMx_SR Bits
#define		UIF						0



#define     NULL_POINTER      (void *)0						// NULL_POINTER Definition

#endif
