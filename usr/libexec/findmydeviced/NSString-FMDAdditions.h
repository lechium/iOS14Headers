//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import "FMDCodable-Protocol.h"

@interface NSString (FMDAdditions) <FMDCodable>
+ (id)stringWithFourCC:(unsigned int)arg1;	// IMP=0x000000010006fa34
+ (id)objectTypeKey;	// IMP=0x000000010009f12c
+ (id)objectType;	// IMP=0x000000010009f120
@property(readonly, nonatomic) NSString *fmd_localizedString;
- (id)initWithFMDCoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000010009ef90
- (_Bool)encodeWithFMDCoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000010009ef0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
