/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CVAIMUCalibration;

@interface CVACalibration : NSObject <NSSecureCoding> {

	NSArray* _cameraCalibrations;
	CVAIMUCalibration* _imuCalibration;

}

@property (nonatomic,retain) NSArray * cameraCalibrations;                    //@synthesize cameraCalibrations=_cameraCalibrations - In the implementation block
@property (nonatomic,retain) CVAIMUCalibration * imuCalibration;              //@synthesize imuCalibration=_imuCalibration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCameraCalibrations:(NSArray *)arg1 ;
-(void)setImuCalibration:(CVAIMUCalibration *)arg1 ;
-(NSArray *)cameraCalibrations;
-(CVAIMUCalibration *)imuCalibration;
@end

