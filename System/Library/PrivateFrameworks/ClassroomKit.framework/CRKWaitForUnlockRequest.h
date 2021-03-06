/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKWaitForUnlockRequest : CATTaskRequest {

	BOOL _shouldBecomeExclusive;

}

@property (assign,nonatomic) BOOL shouldBecomeExclusive;              //@synthesize shouldBecomeExclusive=_shouldBecomeExclusive - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)shouldBecomeExclusive;
-(void)setShouldBecomeExclusive:(BOOL)arg1 ;
@end

