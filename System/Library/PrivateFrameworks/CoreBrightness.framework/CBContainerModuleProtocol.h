/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBContainerModuleProtocol <NSObject>
@required
-(id)copyPropertyForKey:(id)arg1;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2;
-(void)registerNotificationBlock:(/*^block*/id)arg1;
-(void)start;
-(void)unregisterNotificationBlock;
-(void)stop;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;

@end

