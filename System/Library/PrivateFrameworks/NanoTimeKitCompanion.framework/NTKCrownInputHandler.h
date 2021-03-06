/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKClockHardwareInput.h>

@protocol NTKCrownInputHandlerDelegate;
@class NSString;

@interface NTKCrownInputHandler : NSObject <NTKClockHardwareInput> {

	BOOL _useWideIdleCheck;
	id<NTKCrownInputHandlerDelegate> _delegate;
	double _progress;

}

@property (assign,nonatomic,__weak) id<NTKCrownInputHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useWideIdleCheck;                                         //@synthesize useWideIdleCheck=_useWideIdleCheck - In the implementation block
@property (assign,nonatomic) double offsetPerRevolution; 
@property (assign,nonatomic) double progress;                                               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)init;
-(void)setDelegate:(id<NTKCrownInputHandlerDelegate>)arg1 ;
-(id<NTKCrownInputHandlerDelegate>)delegate;
-(double)progress;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)setUseWideIdleCheck:(BOOL)arg1 ;
-(void)setOffsetPerRevolution:(double)arg1 ;
-(double)offsetPerRevolution;
-(void)generateMajorDetents;
-(void)generateMinorDetents;
-(BOOL)useWideIdleCheck;
@end

