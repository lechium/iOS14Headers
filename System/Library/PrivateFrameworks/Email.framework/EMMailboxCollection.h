/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMCollection.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxRepository;

@interface EMMailboxCollection : EMCollection <NSSecureCoding>

@property (nonatomic,readonly) EMMailboxRepository * repository; 
+(BOOL)supportsSecureCoding;
-(id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2 ;
-(void)setRepository:(EMMailboxRepository *)arg1 ;
-(id)initWithObjectID:(id)arg1 query:(id)arg2 ;
-(id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2 repository:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 repository:(id)arg2 ;
-(id)initWithMailbox:(id)arg1 ;
-(EMMailboxRepository *)repository;
@end
