
#include "main.h"
#include "hw_config.h"

//void Delay(__IO uint32_t nCount);
//void Delay(__IO uint32_t nTime);
int main(void)
{
  LED_ON();
//  TimingDelay_Decrement();
  
  if (SysTick_Config(SystemCoreClock / 1000))
  { 
    /* Capture error */ 
    while (1);
  }
  while (1)
  {
     GPIO_SetBits(GPIOA,GPIO_Pin_5);
     Delay(100);
     GPIO_ResetBits(GPIOA,GPIO_Pin_5);
     Delay(100);
  }
}

#ifdef  USE_FULL_ASSERT


void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

