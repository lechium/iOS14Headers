/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INSetTimerAttributeIntentHandling <NSObject>
@optional
-(void)confirmSetTimerAttribute:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTargetTimerForSetTimerAttribute:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveToDurationForSetTimerAttribute:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveToLabelForSetTimerAttribute:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSetTimerAttribute:(id)arg1 completion:(/*^block*/id)arg2;

@end

