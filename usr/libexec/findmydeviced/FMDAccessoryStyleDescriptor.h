//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDDictionaryRepresentable-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface FMDAccessoryStyleDescriptor : NSObject <FMDDictionaryRepresentable, NSSecureCoding>
{
    NSString *_colorCode;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100017178
- (void).cxx_destruct;	// IMP=0x00000001000172c4
@property(copy, nonatomic) NSString *colorCode; // @synthesize colorCode=_colorCode;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100017238
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100017180
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100017060

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

