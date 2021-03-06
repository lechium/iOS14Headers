//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDDictionaryRepresentable-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class FMDVolatileMetaDataRecord, NSDate, NSDictionary, NSString;
@protocol FMGeoLocatable;

@interface FMDLocation : NSObject <NSSecureCoding, FMDDictionaryRepresentable>
{
    unsigned char _positionType;	// 8 = 0x8
    NSDate *_timeStamp;	// 16 = 0x10
    NSObject<FMGeoLocatable> *_location;	// 24 = 0x18
    long long _eventType;	// 32 = 0x20
    FMDVolatileMetaDataRecord *_metaDataRecord;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010005d640
- (void).cxx_destruct;	// IMP=0x000000010005dc20
@property(readonly, nonatomic) FMDVolatileMetaDataRecord *metaDataRecord; // @synthesize metaDataRecord=_metaDataRecord;
@property(nonatomic) unsigned char positionType; // @synthesize positionType=_positionType;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSObject<FMGeoLocatable> *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
- (id)_trackedLocationTypeAsString:(unsigned char)arg1;	// IMP=0x000000010005db68
- (id)stringForLocationType:(long long)arg1;	// IMP=0x000000010005dafc
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010005d4f0
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010005ce88
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010005cc90
- (id)initWithLocation:(id)arg1 eventType:(long long)arg2 positionType:(unsigned char)arg3;	// IMP=0x000000010005cbb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

