/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libBKDM1.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libBKDM1.dylib/libBKDM1.dylib-Structs.h>
@interface BLHelper : NSObject
+(void)initialize;
+(id)stringFromResetReason:(unsigned)arg1 ;
+(id)stringFromWakeGestureState:(long long)arg1 ;
+(id)systemVersion;
+(id)stringFromProvisioningState:(unsigned long long)arg1 ;
+(id)stringFromScanningState:(unsigned)arg1 ;
+(BOOL)writeImageAsPGM:(id)arg1 withWidth:(unsigned)arg2 height:(unsigned)arg3 toFile:(id)arg4 withComment:(id)arg5 attributes:(id)arg6 ;
+(id)stringFromIQAssessment:(unsigned)arg1 ;
+(id)stringFromSensorSecurityAssurance:(SCD_Struct_BL19*)arg1 ;
+(unsigned long long)writeASLToFile:(id)arg1 withAttributes:(id)arg2 filter:(id)arg3 history:(double)arg4 errorKeywords:(id)arg5 containsErrors:(unsigned long long*)arg6 ;
+(id)stringFromSensorAdditionalData:(SCD_Struct_BL19*)arg1 ;
+(id)stringFromLoggingType:(unsigned long long)arg1 ;
+(id)stringFromStatus:(unsigned)arg1 ;
+(id)stringFromClientObjectArray:(id)arg1 ;
+(id)stringFromIQFeedback:(unsigned)arg1 ;
+(id)stringFromSKSLockState:(unsigned short)arg1 ;
+(id)stringFromClientObject:(id)arg1 ;
+(id)stringFromSensorStatusLog:(SCD_Struct_BL19*)arg1 maskUnstableFields:(BOOL)arg2 ;
+(id)stringFromArray:(id)arg1 ;
+(id)stringFromDictionary:(id)arg1 ;
+(id)stringFromIQProblemClass:(unsigned)arg1 ;
+(id)stringFromMobileKeyBagState:(unsigned)arg1 ;
+(id)stringFromSensorIndicator:(unsigned char)arg1 ;
+(id)stringFromSensorProvisionCommandStatus:(SCD_Struct_BL19*)arg1 ;
@end

