#ifndef __ASM_THERM_H
#define __ASM_THERM_H

#define CMD_SET_THERMOSTATE	0x53
#define CMD_GET_THERMOSTATE	0x54
#define CMD_GET_STATUS		0x56
#define CMD_GET_TEMPERATURE	0x57
#define CMD_SET_THERMOSTATE2	0x58
#define CMD_GET_THERMOSTATE2	0x59
#define CMD_GET_TEMPERATURE2	0x5a
#define CMD_GET_FAN		0x5b
#define CMD_SET_FAN		0x5c

#define FAN_OFF			0
#define FAN_ON			1
#define FAN_ALWAYS_ON		2

struct therm {
	int hi;
	int lo;
};

#endif
