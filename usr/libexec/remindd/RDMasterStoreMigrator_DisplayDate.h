//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RDMasterStoreMigrator-Protocol.h"

@class NSString;

@interface RDMasterStoreMigrator_DisplayDate : NSObject <RDMasterStoreMigrator>
{
}

- (void)migrateStore:(id)arg1;	// IMP=0x000000010006b8e4
- (void)migrateStoreIfNeeded:(id)arg1 metadata:(id)arg2;	// IMP=0x000000010006b81c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
