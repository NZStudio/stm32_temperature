#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
//ALIENTEK战舰STM32开发板实验8
//定时器中断实验  
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司 
	
 int main(void)
 {		
 
	delay_init();	    	 //延时函数初始化	  
	NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(9600);	 //串口初始化为9600
 	LED_Init();			     //LED端口初始化
	TIM3_Int_Init(4999,7199);//10Khz的计数频率，计数到5000为500ms  
   	while(1)
	{
		LED0=!LED0;
		delay_ms(200);		   
	}	 

 
}	 
 
