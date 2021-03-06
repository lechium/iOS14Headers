/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNScheduler <CNTimeProvider,NSObject>
@required
-(void)performBlock:(/*^block*/id)arg1;
-(id)performCancelableBlock:(/*^block*/id)arg1;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2;

@end

