/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute {

	unsigned long long _reason;
	unsigned long long _requestedReason;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedReason; 
@property (nonatomic,readonly) unsigned long long flags; 
+(id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)flags;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)reason;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)requestedReason;
@end
