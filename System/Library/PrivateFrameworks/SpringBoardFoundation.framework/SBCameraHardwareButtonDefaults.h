/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBCameraHardwareButtonDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) double shutterButtonLongPressTimeout; 
@property (nonatomic,readonly) double shutterButtonLongPressCancellationTimeout; 
@property (nonatomic,readonly) BOOL shutterButtonShouldUsePocketDetection; 
-(void)setShutterButtonLongPressTimeout:(double)arg1 ;
-(double)shutterButtonLongPressTimeout;
-(void)setShutterButtonLongPressCancellationTimeout:(double)arg1 ;
-(double)shutterButtonLongPressCancellationTimeout;
-(void)setShutterButtonShouldUsePocketDetection:(BOOL)arg1 ;
-(BOOL)shutterButtonShouldUsePocketDetection;
-(void)_bindAndRegisterDefaults;
@end
