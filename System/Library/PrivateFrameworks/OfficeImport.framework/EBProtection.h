/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBProtection : NSObject
+(id)edProtectionFromXlXf:(XlXf*)arg1 ;
+(id)edProtectionFromXlDXfProtect:(XlDXfProtect*)arg1 ;
+(id)edProtectionFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
+(void)writeProtection:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(void)writeProtection:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
+(XlDXfProtect*)xlDXfProtectFromEDProtection:(id)arg1 ;
@end
