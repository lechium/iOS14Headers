//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDBubbled-Protocol.h"
#import "RDClient-Protocol.h"

@class NSMutableArray, NSString, NSXPCConnection;

@interface RDClient : NSObject <RDClient, BDBubbled>
{
    _Bool _stakeholderIsRegistered;	// 8 = 0x8
    _Bool _wasToldWillSwitchUser;	// 9 = 0x9
    _Bool _criticalStakeHolder;	// 10 = 0xa
    _Bool _bubbleStakeHolder;	// 11 = 0xb
    _Bool _bubblePopstakeholderIsRegistered;	// 12 = 0xc
    _Bool _personaStakeHolderIsRegistered;	// 13 = 0xd
    int _switchStakeHolderKind;	// 16 = 0x10
    NSString *_machServiceName;	// 24 = 0x18
    NSMutableArray *_userSwitchTasks;	// 32 = 0x20
    NSMutableArray *_userSyncTasks;	// 40 = 0x28
    NSXPCConnection *_xpcConnection;	// 48 = 0x30
    NSXPCConnection *_syncXPCConnection;	// 56 = 0x38
}

+ (id)sharedBubbleXPCInterface;	// IMP=0x00000001000191a8
+ (id)sharedXPCInterface;	// IMP=0x0000000100019124
+ (id)clientWithXPCConnection:(id)arg1;	// IMP=0x00000001000190cc
- (void).cxx_destruct;	// IMP=0x000000010001a3dc
@property(retain, nonatomic) NSXPCConnection *syncXPCConnection; // @synthesize syncXPCConnection=_syncXPCConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSMutableArray *userSyncTasks; // @synthesize userSyncTasks=_userSyncTasks;
@property(retain, nonatomic) NSMutableArray *userSwitchTasks; // @synthesize userSwitchTasks=_userSwitchTasks;
@property(nonatomic) _Bool personaStakeHolderIsRegistered; // @synthesize personaStakeHolderIsRegistered=_personaStakeHolderIsRegistered;
@property(nonatomic) int switchStakeHolderKind; // @synthesize switchStakeHolderKind=_switchStakeHolderKind;
@property(nonatomic) _Bool bubblePopstakeholderIsRegistered; // @synthesize bubblePopstakeholderIsRegistered=_bubblePopstakeholderIsRegistered;
@property(nonatomic) _Bool bubbleStakeHolder; // @synthesize bubbleStakeHolder=_bubbleStakeHolder;
@property(nonatomic) _Bool criticalStakeHolder; // @synthesize criticalStakeHolder=_criticalStakeHolder;
@property(nonatomic) _Bool wasToldWillSwitchUser; // @synthesize wasToldWillSwitchUser=_wasToldWillSwitchUser;
@property(nonatomic) _Bool stakeholderIsRegistered; // @synthesize stakeholderIsRegistered=_stakeholderIsRegistered;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void)clearTaskLists;	// IMP=0x000000010001a28c
- (void)bubbleShouldPop;	// IMP=0x000000010001a230
- (void)bubbleDidPop;	// IMP=0x000000010001a1f0
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a184
- (void)deviceLoginSessionStateDidUpdate;	// IMP=0x000000010001a144
- (void)userSwitchTaskListDidUpdate;	// IMP=0x000000010001a104
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a038
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019f6c
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019e08
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019ccc
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019b58
@property(readonly, nonatomic) _Bool hasUserSyncTasks;
- (_Bool)removeUserSyncTask:(id)arg1;	// IMP=0x00000001000199ec
- (void)addUserSyncTask:(id)arg1;	// IMP=0x0000000100019980
@property(readonly, nonatomic) _Bool hasUserSwitchTasks;
- (_Bool)removeUserSwitchTask:(id)arg1;	// IMP=0x0000000100019814
- (id)taskDictionaryInArray:(id)arg1 withUUIDString:(id)arg2;	// IMP=0x0000000100019668
- (void)addUserSwitchTask:(id)arg1;	// IMP=0x00000001000195fc
- (id)syncProxy;	// IMP=0x0000000100019510
- (id)proxy;	// IMP=0x0000000100019424
- (CDStruct_6ad76789)currentAuditToken;	// IMP=0x00000001000193c8
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x00000001000192f4
@property(readonly, nonatomic) int pid;
- (id)init;	// IMP=0x000000010001922c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

