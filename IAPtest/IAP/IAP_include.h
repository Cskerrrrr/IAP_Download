#ifndef __IAP_INCLUDE_H__
#define __IAP_INCLUDE_H__
#include "stdio.h"
#include "stdarg.h"
#include "usart.h"
/*
* @author  CSK
* @qq      2930480089
* @device��STM32F4xx
* @version V1.2
* @date    2024.8.5
* @note    IAP,Bootloader������������
******************************************************************************
* ������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;�����д�������ο�����ֹ���ã���ֹ���ã���ֹ���ã���ֹ��������������������ע����������Ȩ���У����õ���ؾ���
* �޸�����:2024/8/5
* �汾��V1.2
* ��Ȩ���У�����ؾ���

* ����ʹ�û��ߴ������ļ�����������ͬ��������������֪�����ڸ�ʲô��رմ���Ŀ�����ļ���ɾ��
*/
extern uint16_t Timer_Bt;
void IAP_Load_App(uint32_t appxaddr);
void IAP_Write_Appbin(uint32_t appxaddr,uint8_t *appbuf,uint32_t applen);
void IAP_Download_Init(UART_HandleTypeDef *huart);
void IAP_Download(UART_HandleTypeDef *huart);
void IAP_USART_RXBUF(UART_HandleTypeDef *huart);
void IAP_Download_ERROR(UART_HandleTypeDef *huart);
void STMFLASH_Write_NoCheck(uint32_t WriteAddr,uint16_t *pBuffer,uint16_t NumToWrite);
int  STMFLASH_Erase(uint32_t WriteAddr,uint32_t NumToWrite);
void STMFLASH_Write(uint32_t WriteAddr,uint32_t *pBuffer,uint32_t NumToWrite);
void STMFLASH_Read(uint32_t ReadAddr,uint32_t *pBuffer,uint32_t NumToRead);
void FlashProgram(uint32_t ui32Address,uint32_t *pui32Data,uint32_t ui32Count);		
#endif


