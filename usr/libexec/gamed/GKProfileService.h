//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKProfileService-Protocol.h"

@class NSString;

@interface GKProfileService : GKService <GKProfileService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010015d2b0
+ (Class)interfaceClass;	// IMP=0x000000010015d2a4
- (oneway void)getProfilesForPlayerIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015ec04
- (oneway void)getOcelotStateForCurrentAppWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010015ebc4
- (oneway void)setOcelotStateForCurrentApp;	// IMP=0x000000010015eb58
- (void)loadProfilesForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015e254
- (void)fetchProfilesForPlayerIDs:(id)arg1 familiarity:(int)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010015d88c
- (void)_updateLastPlayedGames:(id)arg1 forPlayers:(id)arg2 group:(id)arg3;	// IMP=0x000000010015d430
- (id)_profileRequestForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2;	// IMP=0x000000010015d2b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
