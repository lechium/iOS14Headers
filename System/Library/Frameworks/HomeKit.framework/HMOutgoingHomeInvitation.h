/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitation.h>

@class HMMutableArray, HMUser, NSArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation {

	HMMutableArray* _accessoryInvitations;
	HMUser* _invitee;

}

@property (nonatomic,readonly) HMUser * invitee;                            //@synthesize invitee=_invitee - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryInvitations; 
+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromData:(id)arg1 home:(id)arg2 ;
+(id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2 ;
-(HMUser *)invitee;
-(void)dealloc;
-(id)initWithInvitationData:(id)arg1 home:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)accessoryInvitations;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigure;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
@end

