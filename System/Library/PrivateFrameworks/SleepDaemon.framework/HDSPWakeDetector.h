/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSPWakeDetector <NSObject>
@property (assign,nonatomic,__weak) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate; 
@required
-(void)startDetecting;
-(void)stopDetecting;
-(id<HDSPWakeDetectorDelegate>)wakeDetectorDelegate;
-(void)setWakeDetectorDelegate:(id)arg1;

@end

