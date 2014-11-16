#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
//ALIENTEKս��STM32������ʵ��8
//��ʱ���ж�ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾ 
	
 int main(void)
 {		
 
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);	 //���ڳ�ʼ��Ϊ9600
 	LED_Init();			     //LED�˿ڳ�ʼ��
	TIM3_Int_Init(4999,7199);//10Khz�ļ���Ƶ�ʣ�������5000Ϊ500ms  
   	while(1)
	{
		LED0=!LED0;
		delay_ms(200);		   
	}	 

 
}	 
 
