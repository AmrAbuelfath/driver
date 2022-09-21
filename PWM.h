#ifndef PWM_H_
#define PWM_H_


void SWPWM_init(uint32_t frequency_kh,unit8_t dutyCycle);
void SWPWM_start(void);
void SWPMM_changeDutyCycle(uint8_t newDutyCycle);-
void SWPWM_stop();


#endif


