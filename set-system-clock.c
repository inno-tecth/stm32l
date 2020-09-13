void setSystemClock(void)
{
  __IO uint32_t startupCounter =0, HSEStatus = 0;
  RCC->CR |= ((uint32_t)RCC_CR_HSEON);
  do
  {
    HSEStaus = RCC->CR & RCC_CR_HSERDY;
    startupCounter ++;
    
  }
}
