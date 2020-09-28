//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, _CDContextualChangeRegistration;
@protocol _CDContext;

@interface CLDuetRegistration : NSObject
{
    id <_CDContext> _context;	// 8 = 0x8
    _CDContextualChangeRegistration *_cdRegistration;	// 16 = 0x10
    NSMutableSet *_clients;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) _CDContextualChangeRegistration *cdRegistration; // @synthesize cdRegistration=_cdRegistration;
@property(retain, nonatomic) id <_CDContext> context; // @synthesize context=_context;
- (void)deregisterCallback;	// IMP=0x0000000100580224
- (void)registerCallback;	// IMP=0x0000000100580008
- (void)removeAllClients;	// IMP=0x000000010057feec
- (void)removeClient:(id)arg1;	// IMP=0x000000010057fe6c
- (void)addClient:(id)arg1;	// IMP=0x000000010057fde8
- (void)dealloc;	// IMP=0x000000010057fd60
- (id)init;	// IMP=0x000000010057fcf0

@end
