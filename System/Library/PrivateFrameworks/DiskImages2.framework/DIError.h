/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DIError : NSObject
+(id)errorWithEnumValue:(long long)arg1 errorString:(id)arg2 ;
+(id)errorWithEnumValue:(long long)arg1 errorString:(id)arg2 error:(id*)arg3 ;
+(id)errorWithRetCode:(int)arg1 prefix:(id)arg2 error:(id*)arg3 ;
+(BOOL)failWithEnumValue:(long long)arg1 errorString:(id)arg2 error:(id*)arg3 ;
+(BOOL)failWithRetCode:(int)arg1 prefix:(id)arg2 error:(id*)arg3 ;
@end
