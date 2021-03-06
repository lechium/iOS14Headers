/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMTorchCommand : CAMCaptureCommand {

	float __level;
	long long __torchMode;

}

@property (nonatomic,readonly) long long _torchMode;              //@synthesize _torchMode=__torchMode - In the implementation block
@property (nonatomic,readonly) float _level;                      //@synthesize _level=__level - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTorchLevel:(float)arg1 ;
-(long long)_torchMode;
-(id)initWithTorchMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(float)_level;
@end

