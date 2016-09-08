#include "includes.h"

bool SearchApn(s8 *imsi,apns *apn)
{
	bool boRetVal;
	u16 u16i = 0;

	M_ClrBit(boRetVal);
	for(u16i = 0;u16i < apn_num;u16i++)
	{
		if(IS_FALSE_BIT(memcmp(apn_table[u16i].mcc,imsi,strlen(apn_table[u16i].mcc))))
		{
			if(IS_FALSE_BIT(memcmp(apn_table[u16i].mnc,imsi + 3,strlen(apn_table[u16i].mnc))))
			{
				*apn =  apn_table[u16i];
				M_SetBit(boRetVal);
				break;
			}
			else
			{
			}
		}
		else
		{
			;
		}
	}

	return (boRetVal);
}

u16 getGetAPNUseImsiVersion(void)
{
	#define VERSION		(100)//每次更新版本加1
	return (VERSION);
}

