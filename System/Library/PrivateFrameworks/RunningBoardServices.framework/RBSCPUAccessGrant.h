/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSCPUAccessGrant : RBSGrant {

	unsigned char _role;

}

@property (nonatomic,readonly) unsigned char role;              //@synthesize role=_role - In the implementation block
+(id)grantWithUserInteractivityAndFocus;
+(id)grantWithRole:(unsigned char)arg1 ;
+(id)grantWithUserInteractivity;
+(id)grant;
+(id)grantUserInitiated;
-(unsigned char)role;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
