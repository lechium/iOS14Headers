/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
@optional
-(void)beginService;
-(void)setDelegateEntityName:(const char*)arg1;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2;
-(void)endService;

@required
+(BOOL)isSupported;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;

@end

