//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StorageSettings/STStorageApp.h>

#import "STExternalDataApp-Protocol.h"

@class NSString;

@interface STStorageCloudDiskFakeApp : STStorageApp <STExternalDataApp>
{
}

- (id)mediaTypes;	// IMP=0x0000000000010c78
- (id)installDate;	// IMP=0x0000000000010c70
- (id)lastUsedDate;	// IMP=0x0000000000010c68
- (void)updateSpecialSize;	// IMP=0x0000000000010c1c
- (long long)calcSpecialSize;	// IMP=0x0000000000010b38
- (long long)totalSize;	// IMP=0x0000000000010b2c
- (long long)dataSize;	// IMP=0x0000000000010b20
- (long long)dynamicSize;	// IMP=0x0000000000010b18
- (long long)staticSize;	// IMP=0x0000000000010b10
- (_Bool)isDocumentApp;	// IMP=0x0000000000010b08
- (_Bool)isDemotable;	// IMP=0x0000000000010b00
- (_Bool)isDeletable;	// IMP=0x0000000000010af8
- (id)appIdentifier;	// IMP=0x0000000000010aec
- (id)bundleIdentifier;	// IMP=0x0000000000010ae0
- (id)name;	// IMP=0x0000000000010ad4
- (id)initWithApplicationIdentifier:(id)arg1;	// IMP=0x0000000000010a78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

