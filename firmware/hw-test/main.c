#include "soc-hw.h"

/* Definitions */

#define PWM_D0 2
#define PWM_D1 3
#define PWM_D2 1
#define PWM_D3 2
#define PWM_D4 2
#define PWM_D5 4
#define PWM_D6 2
#define PWM_D7 1
#define PWM0 0x01
#define PWM1 0x02
#define PWM2 0x04
#define PWM3 0x08
#define PWM4 0x10
#define PWM5 0x20
#define PWM6 0x40
#define PWM7 0x80
#define MAX_UT 5

/* Main Function */

int main(){
	uint32_t ut = 0;
	gpio_config_dir(0xFF);
	gpio_write(0xFF);
	while(1){
		nsleep(1);
		ut = ut + 1;
		if(ut <= PWM_D0)
			gpio_write(PWM0 | gpio_read());
		else
			gpio_write(~(PWM0) & gpio_read());
		if(ut <= PWM_D1)
			gpio_write(PWM1 | gpio_read());
		else
			gpio_write(~(PWM1) & gpio_read());
		if(ut <= PWM_D2)
			gpio_write(PWM2 | gpio_read());
		else
			gpio_write(~(PWM2) & gpio_read());
		if(ut <= PWM_D3)
			gpio_write(PWM3 | gpio_read());
		else
			gpio_write(~(PWM3) & gpio_read());
		if(ut <= PWM_D4)
			gpio_write(PWM4 | gpio_read());
		else
			gpio_write(~(PWM4) & gpio_read());
		if(ut <= PWM_D5)
			gpio_write(PWM5 | gpio_read());
		else
			gpio_write(~(PWM5) & gpio_read());
		if(ut <= PWM_D6)
			gpio_write(PWM6 | gpio_read());
		else
			gpio_write(~(PWM6) & gpio_read());
		if(ut <= PWM_D7)
			gpio_write(PWM7 | gpio_read());
		else
			gpio_write(~(PWM7) & gpio_read());
		if(ut == MAX_UT){
			ut = 0;
		}
	}
}