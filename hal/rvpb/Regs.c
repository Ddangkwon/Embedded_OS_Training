/*
* file name : HalUart.h
* description : 해당 하드웨어의 레지스터 구조체와 베이스 주소 연결
* author : yeongkwon.ko
*/


#include "stdint.h"
#include "Uart.h"

volatile PL011_t* Uart = (PL011_t*)UART_BASE_ADDRESS0;