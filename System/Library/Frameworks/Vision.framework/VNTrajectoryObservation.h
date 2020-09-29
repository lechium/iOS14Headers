/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSUUID;

@interface VNTrajectoryObservation : VNObservation {

	NSArray* _detectedPoints;
	NSArray* _projectedPoints;
	NSUUID* _requestUUID;
	 _equationCoefficients;

}

@property (nonatomic,copy) NSArray * detectedPoints;               //@synthesize detectedPoints=_detectedPoints - In the implementation block
@property (nonatomic,copy) NSArray * projectedPoints;              //@synthesize projectedPoints=_projectedPoints - In the implementation block
@property (assign,nonatomic)  equationCoefficients;                //@synthesize equationCoefficients=_equationCoefficients - In the implementation block
@property (nonatomic,copy) NSUUID * requestUUID;                   //@synthesize requestUUID=_requestUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)requestUUID;
-(void)setRequestUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProjectedPoints:(NSArray *)arg1 ;
-()equationCoefficients;
-(void)setEquationCoefficients:;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithRequestRevision:(unsigned long long)arg1 requestUUID:(id)arg2 trajectoryUUID:(id)arg3 detectedPoints:(id)arg4 projectedPoints:(id)arg5 equationCoefficients:(float)arg6 ;
-(NSArray *)detectedPoints;
-(void)setDetectedPoints:(NSArray *)arg1 ;
-(NSArray *)projectedPoints;
@end
