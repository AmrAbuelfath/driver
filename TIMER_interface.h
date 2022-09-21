

#ifndef TIMER_INTERFACE_H
#define TIMER_INTERFACE_H

void TIMER_init(u8 dutyCycle);
void TIMER_set(u16 value);
void TIMER_start();
void TIMER_stop();
void TIMER_getstate();



#define		RISING_EDGE			0
#define		FALLING_EDGE		1


#endif
