/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMIObjectDetection : NSObject <NSSecureCoding> {

	int _labelIndex;
	double _confidence;
	NSNumber* _yaw;
	NSNumber* _roll;
	CGRect _boundingBox;

}

@property (readonly) int labelIndex;                            //@synthesize labelIndex=_labelIndex - In the implementation block
@property (readonly) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
@property (readonly) NSNumber * yaw;                            //@synthesize yaw=_yaw - In the implementation block
@property (readonly) NSNumber * roll;                           //@synthesize roll=_roll - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(CGRect)boundingBox;
-(NSNumber *)yaw;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)roll;
-(unsigned long long)hash;
-(id)description;
-(int)labelIndex;
-(id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 unclampedBoundingBox:(CGRect)arg3 yaw:(id)arg4 roll:(id)arg5 ;
-(id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 boundingBox:(CGRect)arg3 yaw:(id)arg4 roll:(id)arg5 ;
@end

