/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTTimerIntentHandler.h>

@interface MTUpdateTimerIntentHandler : MTTimerIntentHandler
-(id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2 ;
-(void)_updateTimer:(id)arg1 dryRun:(BOOL)arg2 allowMultiple:(BOOL)arg3 excludeStoppedTimers:(BOOL)arg4 filterBlock:(/*^block*/id)arg5 updateBlock:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_updateTimer:(id)arg1 dryRun:(BOOL)arg2 updateBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
@end
