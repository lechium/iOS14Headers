//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMFLocatorMigrator : NSObject
{
}

- (void)_saveVersionIdentifiersDict:(id)arg1;	// IMP=0x0000000100030634
- (id)_currentVersionIdentifiersDict;	// IMP=0x0000000100030398
- (id)_oldVersionIdentifiersDict;	// IMP=0x00000001000301c4
- (void)migrateFromVersion:(id)arg1 toVersion:(id)arg2;	// IMP=0x0000000100030070
- (_Bool)performMigration;	// IMP=0x000000010002ff20

@end

