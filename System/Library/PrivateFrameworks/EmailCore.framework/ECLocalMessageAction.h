/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ECLocalMessageActionBuilder.h>

@class NSString, NSURL;

@interface ECLocalMessageAction : NSObject <ECLocalMessageActionBuilder> {

	BOOL _userInitiated;
	NSString* _messageActionPersistentID;
	NSURL* _mailboxURL;

}

@property (nonatomic,retain) NSString * messageActionPersistentID;              //@synthesize messageActionPersistentID=_messageActionPersistentID - In the implementation block
@property (nonatomic,retain) NSURL * mailboxURL;                                //@synthesize mailboxURL=_mailboxURL - In the implementation block
@property (assign,nonatomic) BOOL userInitiated;                                //@synthesize userInitiated=_userInitiated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(NSURL *)mailboxURL;
-(NSString *)description;
-(NSString *)messageActionPersistentID;
-(void)setMessageActionPersistentID:(NSString *)arg1 ;
-(void)setMailboxURL:(NSURL *)arg1 ;
@end
