#ifndef _APN_H_
#define _APN_H_

typedef struct {
	s8 *mcc;
	s8 *mnc;
	s8 *apn;
	s8 *user;
	s8 *password;
}apns;

extern const apns apn_table[];

extern const u16 apn_num;

extern u16 getApnTabVersion();

#endif
