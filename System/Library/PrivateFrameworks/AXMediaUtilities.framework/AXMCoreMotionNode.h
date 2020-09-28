/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCoreMotionNode : AXMSourceNode {

	unsigned long long _samplesPerSecond;
	double _lastSampleTime;

}

@property (assign,nonatomic) double lastSampleTime;                            //@synthesize lastSampleTime=_lastSampleTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplesPerSecond;              //@synthesize samplesPerSecond=_samplesPerSecond - In the implementation block
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)samplesPerSecond;
-(double)lastSampleTime;
-(void)setLastSampleTime:(double)arg1 ;
-(void)triggerWithCoreMotionManager:(id)arg1 deviceOrientation:(long long)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)setSamplesPerSecond:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)nodeInitialize;
@end
