//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface APPBThirdPartySegmentUpdateRequest : PBRequest <NSCopying>
{
    NSString *_appID;	// 8 = 0x8
    NSString *_appVersion;	// 16 = 0x10
    NSData *_dPID;	// 24 = 0x18
    NSData *_iAdID;	// 32 = 0x20
    int _runState;	// 40 = 0x28
    NSMutableArray *_segmentIdentifiers;	// 48 = 0x30
    NSData *_toroID;	// 56 = 0x38
    _Bool _privateSegment;	// 64 = 0x40
    _Bool _resetSegmentMembership;	// 65 = 0x41
    struct {
        unsigned int runState:1;
        unsigned int privateSegment:1;
        unsigned int resetSegmentMembership:1;
    } _has;	// 68 = 0x44
}

+ (Class)segmentIdentifiersType;	// IMP=0x00000001000ae214
+ (id)options;	// IMP=0x00000001000adec4
- (void).cxx_destruct;	// IMP=0x00000001000af7e8
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(retain, nonatomic) NSData *toroID; // @synthesize toroID=_toroID;
@property(nonatomic) _Bool privateSegment; // @synthesize privateSegment=_privateSegment;
@property(retain, nonatomic) NSMutableArray *segmentIdentifiers; // @synthesize segmentIdentifiers=_segmentIdentifiers;
@property(nonatomic) _Bool resetSegmentMembership; // @synthesize resetSegmentMembership=_resetSegmentMembership;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000af4a0
- (unsigned long long)hash;	// IMP=0x00000001000af364
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000af140
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000aee84
- (void)copyTo:(id)arg1;	// IMP=0x00000001000aec9c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000aea74
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000aea6c
- (id)dictionaryRepresentation;	// IMP=0x00000001000ae364
- (id)description;	// IMP=0x00000001000ae2b0
@property(readonly, nonatomic) _Bool hasDPID;
@property(readonly, nonatomic) _Bool hasToroID;
@property(nonatomic) _Bool hasPrivateSegment;
- (id)segmentIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000ae1fc
- (unsigned long long)segmentIdentifiersCount;	// IMP=0x00000001000ae1e4
- (void)addSegmentIdentifiers:(id)arg1;	// IMP=0x00000001000ae170
- (void)clearSegmentIdentifiers;	// IMP=0x00000001000ae158
@property(nonatomic) _Bool hasResetSegmentMembership;
- (int)StringAsRunState:(id)arg1;	// IMP=0x00000001000ae058
- (id)runStateAsString:(int)arg1;	// IMP=0x00000001000adfe0
@property(nonatomic) _Bool hasRunState;
@property(nonatomic) int runState; // @synthesize runState=_runState;
@property(readonly, nonatomic) _Bool hasAppVersion;
@property(readonly, nonatomic) _Bool hasAppID;
@property(readonly, nonatomic) _Bool hasIAdID;

@end
