/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest {

	long long _badgeCount;

}

@property (assign,nonatomic) long long badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
