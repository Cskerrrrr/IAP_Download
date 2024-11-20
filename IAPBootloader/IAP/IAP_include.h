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
* ������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;�����д�������ο�����ֹ���ã���ֹ���ã���ֹ���ã���ֹ��������������������ע����������Ȩ���У����õ���ؾ���
* �޸�����:2024/8/13
* �汾��V1.5
* ��Ȩ���У�����ؾ���

* ����ʹ�û��ߴ������ļ�����������ͬ��������������֪�����ڸ�ʲô��رմ���Ŀ�����ļ���ɾ��
*/

#define FLASH_APP1_ADDR							0x8030000  													//��һ��Ӧ�ó�����ʼ��ַ(�����FLASH)

#define FLASH_BOOTDownload_ADDR			0x8010000


extern uint16_t Timer_Bt;
void IAP_Load_App(uint32_t appxaddr);
void IAP_Write_Appbin(uint32_t appxaddr,uint8_t *appbuf,uint32_t applen);
void IAP_Download_Init(UART_HandleTypeDef *huart);
void IAP_Download(UART_HandleTypeDef *huart);
void IAP_USART_RXBUF(UART_HandleTypeDef *huart,uint32_t Flash_BOOTaddress,uint32_t Flash_APPaddress);
void IAP_Download_ERROR(UART_HandleTypeDef *huart);
int  STMFLASH_Erase(uint32_t WriteAddr,uint32_t NumToWrite);
void STMFLASH_Write(uint32_t WriteAddr,uint32_t *pBuffer,uint32_t NumToWrite);
void STMFLASH_Read(uint32_t ReadAddr,uint32_t *pBuffer,uint32_t NumToRead);
void STMFLASH_Copy(uint32_t ReadAddr,uint32_t WriteAddr,uint32_t size);
#endif



