/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:22 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, NSMutableDictionary, NSDictionary;

@interface BWVariableFrameRateParameters : NSObject {

	NSString* _portType;
	int _motionThreshold;
	NSMutableDictionary* _aeMaxGain;

}

@property (nonatomic,readonly) NSString * portType;                   //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) int motionThreshold;                   //@synthesize motionThreshold=_motionThreshold - In the implementation block
@property (nonatomic,readonly) NSDictionary * aeMaxGain;              //@synthesize aeMaxGain=_aeMaxGain - In the implementation block
-(void)dealloc;
-(NSDictionary *)aeMaxGain;
-(int)motionThreshold;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(NSString *)portType;
-(id)description;
@end

