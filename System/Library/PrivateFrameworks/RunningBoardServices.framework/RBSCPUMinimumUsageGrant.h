/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSCPUMinimumUsageGrant : RBSGrant {

	unsigned char _role;
	unsigned long long _percentage;
	double _duration;

}

@property (nonatomic,readonly) unsigned char role;                         //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) unsigned long long percentage;              //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
+(id)grantForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 ;
-(double)duration;
-(unsigned char)role;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)percentage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

