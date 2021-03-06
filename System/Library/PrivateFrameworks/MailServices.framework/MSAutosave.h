/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSXPCService.h>

@class NSHashTable;

@interface MSAutosave : MSXPCService {

	NSHashTable* _activeAutosaveSessions;

}

@property (nonatomic,retain) NSHashTable * activeAutosaveSessions;              //@synthesize activeAutosaveSessions=_activeAutosaveSessions - In the implementation block
+(id)log;
+(id)autosave;
-(NSHashTable *)activeAutosaveSessions;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(void)getIdleAutosaves:(/*^block*/id)arg1 ;
-(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)_getRemoteAutosaveSessionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_timeout;
-(id)init;
-(void)autosaveSessionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)setActiveAutosaveSessions:(NSHashTable *)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)autosaveMessageData:(id)arg1 replacingIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleInterruptedConnection;
@end

