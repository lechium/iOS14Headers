//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MCUtilities)
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;	// IMP=0x00000001000172c0
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;	// IMP=0x0000000100016fbc
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;	// IMP=0x0000000100016cb8
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x00000001000169b4
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x00000001000166b0
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;	// IMP=0x0000000100016370
- (void)MCDeleteBoolRestriction:(id)arg1;	// IMP=0x00000001000162b8
- (void)MCSetBoolRestriction:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000100015fdc
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100015f88
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;	// IMP=0x0000000100015d48
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;	// IMP=0x0000000100015b0c
@end
