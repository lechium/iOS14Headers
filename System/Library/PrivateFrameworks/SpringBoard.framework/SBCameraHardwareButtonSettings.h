/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface SBCameraHardwareButtonSettings : PTSettings {

	BOOL _shutterButtonShouldUsePocketDetection;
	double _shutterButtonLongPressTimeout;
	double _shutterButtonLongPressCancellationTimeout;

}

@property (assign,nonatomic) double shutterButtonLongPressTimeout;                          //@synthesize shutterButtonLongPressTimeout=_shutterButtonLongPressTimeout - In the implementation block
@property (assign,nonatomic) double shutterButtonLongPressCancellationTimeout;              //@synthesize shutterButtonLongPressCancellationTimeout=_shutterButtonLongPressCancellationTimeout - In the implementation block
@property (assign,nonatomic) BOOL shutterButtonShouldUsePocketDetection;                    //@synthesize shutterButtonShouldUsePocketDetection=_shutterButtonShouldUsePocketDetection - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)shutterButtonLongPressTimeout;
-(double)shutterButtonLongPressCancellationTimeout;
-(BOOL)shutterButtonShouldUsePocketDetection;
-(void)setShutterButtonLongPressTimeout:(double)arg1 ;
-(void)setShutterButtonLongPressCancellationTimeout:(double)arg1 ;
-(void)setShutterButtonShouldUsePocketDetection:(BOOL)arg1 ;
@end
