//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKSettingsGroupController.h"

@class GKGameSession;

@interface GKSettingsSessionDetailsGroupController : GKSettingsGroupController
{
    GKGameSession *_session;	// 208 = 0xd0
}

@property(retain, nonatomic) GKGameSession *session; // @synthesize session=_session;
- (id)maxPlayers:(id)arg1;	// IMP=0x0000000000005fcc
- (id)minPlayers:(id)arg1;	// IMP=0x0000000000005fb0
- (id)specifiers;	// IMP=0x0000000000005e44
- (void)dealloc;	// IMP=0x0000000000005df4
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000005d94

@end

