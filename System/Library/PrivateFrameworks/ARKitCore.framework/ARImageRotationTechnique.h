/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@interface ARImageRotationTechnique : ARTechnique {

	OpaqueVTImageRotationSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _bufferPool;
	long long _rotationAngle;
	long long _mirrorMode;

}

@property (nonatomic,readonly) long long rotationAngle;              //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,readonly) long long mirrorMode;                 //@synthesize mirrorMode=_mirrorMode - In the implementation block
-(long long)rotationAngle;
-(id)processData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)_fullDescription;
-(unsigned long long)requiredSensorDataTypes;
-(long long)mirrorMode;
-(id)initWithRotation:(long long)arg1 mirror:(long long)arg2 ;
-(int)_rotateAccelerate:(CVBufferRef)arg1 pOutputBuffer:(_CVBuffer*)arg2 ;
@end

