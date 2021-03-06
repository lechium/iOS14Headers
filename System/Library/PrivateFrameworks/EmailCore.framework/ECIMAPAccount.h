/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECAccount.h>

@class NSDate;

@interface ECIMAPAccount : ECAccount {

	NSDate* _dateOfLastSync;

}

@property (assign,nonatomic) BOOL compactWhenClosingMailboxes; 
@property (assign,nonatomic) long long daysBetweenSyncs; 
@property (nonatomic,copy) NSDate * dateOfLastSync;                               //@synthesize dateOfLastSync=_dateOfLastSync - In the implementation block
@property (assign,nonatomic) BOOL queriedUserToSetPathPrefix; 
@property (assign,nonatomic) BOOL shouldUseGmailLabelStores; 
@property (nonatomic,readonly) BOOL shouldUseGmailLabelStoresIsSet; 
@property (assign,nonatomic) BOOL needsGmailLablesCleanup; 
@property (assign,nonatomic) BOOL hasServerDefinedAllMailMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedArchiveMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedDraftsMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedJunkMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedSentMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedTrashMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedArchiveMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedDraftsMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedJunkMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedSentMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedTrashMailbox; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(BOOL)hasServerDefinedArchiveMailbox;
-(void)setDaysBetweenSyncs:(long long)arg1 ;
-(void)setShouldUseGmailLabelStores:(BOOL)arg1 ;
-(long long)daysBetweenSyncs;
-(void)setNeedsGmailLablesCleanup:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedDraftsMailbox;
-(BOOL)hasServerDefinedSentMailbox;
-(BOOL)ignoreServerDefinedJunkMailbox;
-(NSDate *)dateOfLastSync;
-(void)setHasServerDefinedAllMailMailbox:(BOOL)arg1 ;
-(void)clearQueriedUserToSetPathPrefix;
-(void)setIgnoreServerDefinedSentMailbox:(BOOL)arg1 ;
-(BOOL)compactWhenClosingMailboxes;
-(BOOL)hasServerDefinedAllMailMailbox;
-(BOOL)shouldUseGmailLabelStoresIsSet;
-(id)usesSSLObject;
-(BOOL)shouldUseGmailLabelStores;
-(void)setHasServerDefinedJunkMailbox:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedSentMailbox;
-(BOOL)hasServerDefinedDraftsMailbox;
-(BOOL)ignoreServerDefinedTrashMailbox;
-(BOOL)hasServerDefinedTrashMailbox;
-(void)setHasServerDefinedSentMailbox:(BOOL)arg1 ;
-(void)setCompactWhenClosingMailboxes:(BOOL)arg1 ;
-(BOOL)queriedUserToSetPathPrefix;
-(void)setDateOfLastSync:(NSDate *)arg1 ;
-(BOOL)needsGmailLablesCleanup;
-(void)setHasServerDefinedArchiveMailbox:(BOOL)arg1 ;
-(id)_hostnameFromParentAccount:(id)arg1 ;
-(id)portNumberObject;
-(BOOL)hasServerDefinedJunkMailbox;
-(long long)defaultSecurePortNumber;
-(void)setIgnoreServerDefinedDraftsMailbox:(BOOL)arg1 ;
-(void)setHasServerDefinedTrashMailbox:(BOOL)arg1 ;
-(void)clearDaysBetweenSyncs;
-(void)setIgnoreServerDefinedJunkMailbox:(BOOL)arg1 ;
-(void)setIgnoreServerDefinedTrashMailbox:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedArchiveMailbox;
-(void)setQueriedUserToSetPathPrefix:(BOOL)arg1 ;
-(void)setIgnoreServerDefinedArchiveMailbox:(BOOL)arg1 ;
-(void)setHasServerDefinedDraftsMailbox:(BOOL)arg1 ;
-(long long)defaultPortNumber;
@end

