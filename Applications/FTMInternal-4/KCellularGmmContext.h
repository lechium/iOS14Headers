//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class RoutingAreaId;

@interface KCellularGmmContext : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _pTmsi;	// 16 = 0x10
    int _procFailureCause;	// 20 = 0x14
    RoutingAreaId *_rai;	// 24 = 0x18
    int _regProc;	// 32 = 0x20
    int _regStatus;	// 36 = 0x24
    int _rejectCause;	// 40 = 0x28
    unsigned int _subsId;	// 44 = 0x2c
    unsigned int _t3312DurS;	// 48 = 0x30
    int _updateStatus;	// 52 = 0x34
    struct {
        unsigned int timestamp:1;
        unsigned int pTmsi:1;
        unsigned int procFailureCause:1;
        unsigned int regProc:1;
        unsigned int regStatus:1;
        unsigned int rejectCause:1;
        unsigned int subsId:1;
        unsigned int t3312DurS:1;
        unsigned int updateStatus:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002818c
@property(nonatomic) unsigned int subsId; // @synthesize subsId=_subsId;
@property(nonatomic) unsigned int t3312DurS; // @synthesize t3312DurS=_t3312DurS;
@property(nonatomic) unsigned int pTmsi; // @synthesize pTmsi=_pTmsi;
@property(retain, nonatomic) RoutingAreaId *rai; // @synthesize rai=_rai;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100027f4c
- (unsigned long long)hash;	// IMP=0x0000000100027dd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100027bac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000279b8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000277f4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100027658
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100027650
- (id)dictionaryRepresentation;	// IMP=0x0000000100026490
- (id)description;	// IMP=0x00000001000263dc
@property(nonatomic) _Bool hasSubsId;
- (int)StringAsRegProc:(id)arg1;	// IMP=0x00000001000261dc
- (id)regProcAsString:(int)arg1;	// IMP=0x00000001000260f8
@property(nonatomic) _Bool hasRegProc;
@property(nonatomic) int regProc; // @synthesize regProc=_regProc;
- (int)StringAsRejectCause:(id)arg1;	// IMP=0x0000000100025bb0
- (id)rejectCauseAsString:(int)arg1;	// IMP=0x000000010002597c
@property(nonatomic) _Bool hasRejectCause;
@property(nonatomic) int rejectCause; // @synthesize rejectCause=_rejectCause;
- (int)StringAsProcFailureCause:(id)arg1;	// IMP=0x00000001000256b4
- (id)procFailureCauseAsString:(int)arg1;	// IMP=0x0000000100025594
@property(nonatomic) _Bool hasProcFailureCause;
@property(nonatomic) int procFailureCause; // @synthesize procFailureCause=_procFailureCause;
@property(nonatomic) _Bool hasT3312DurS;
@property(nonatomic) _Bool hasPTmsi;
@property(readonly, nonatomic) _Bool hasRai;
- (int)StringAsUpdateStatus:(id)arg1;	// IMP=0x0000000100025394
- (id)updateStatusAsString:(int)arg1;	// IMP=0x000000010002531c
@property(nonatomic) _Bool hasUpdateStatus;
@property(nonatomic) int updateStatus; // @synthesize updateStatus=_updateStatus;
- (int)StringAsRegStatus:(id)arg1;	// IMP=0x000000010002508c
- (id)regStatusAsString:(int)arg1;	// IMP=0x0000000100024f7c
@property(nonatomic) _Bool hasRegStatus;
@property(nonatomic) int regStatus; // @synthesize regStatus=_regStatus;
@property(nonatomic) _Bool hasTimestamp;

@end

