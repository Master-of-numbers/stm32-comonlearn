//
// Created by myroslav on 6/28/22.
//
#include "usart.h"

int _write(int file, char *ptr, int len)
{
	int DataIdx;

	for (DataIdx = 0; DataIdx < len; DataIdx++)
	{
        USART1->DR = ptr[DataIdx];
        while (!(USART1->SR & USART_SR_TC));
	}
	return len;
}