/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	int hour;
	int minute;
} SCD_Struct_CC0;

typedef struct {
	SCD_Struct_CC0 fromTime;
	SCD_Struct_CC0 toTime;
} SCD_Struct_CC1;

typedef struct {
	BOOL active;
	BOOL enabled;
	BOOL sunSchedulePermitted;
	int mode;
	SCD_Struct_CC1 schedule;
	unsigned long long disableFlags;
	BOOL available;
} SCD_Struct_CC2;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	int field4;
	SCD_Struct_CC1 field5;
	unsigned long long field6;
	BOOL field7;
} SCD_Struct_CC3;

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

