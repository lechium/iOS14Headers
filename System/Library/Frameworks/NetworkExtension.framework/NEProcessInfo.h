/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NEProcessInfo : NSObject
+(id)copyUUIDsFromExecutable:(const char*)arg1 ;
+(id)copyNEHelperUUIDs;
+(BOOL)is64bitCapable;
+(id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned)arg2 ;
+(void)clearUUIDCache;
+(id)copyUUIDsForFatBinary:(int)arg1 ;
+(id)copyDNSUUIDs;
+(void)initGlobals;
+(id)copyUUIDForSingleArch:(int)arg1 ;
+(id)copyUUIDsForExecutable:(id)arg1 ;
-(id)init;
@end
