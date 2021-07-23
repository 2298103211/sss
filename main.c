#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "exti.h"

 int main(void)
 {		
 
	delay_init();	    	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 
	uart_init(9600);	 
 	LED_Init();		  	
	KEY_Init();         
	EXTIX_Init();		 					
	while(1)
	{	    
		printf("OK\r\n");	
		delay_ms(1000);	  
	}
 }

