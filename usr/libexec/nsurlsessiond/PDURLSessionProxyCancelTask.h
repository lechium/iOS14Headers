//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyCancelTask : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000537f0
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100053768
- (unsigned long long)hash;	// IMP=0x0000000100053750
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000536b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100053634
- (void)copyTo:(id)arg1;	// IMP=0x000000010005360c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000535ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100053404
- (id)dictionaryRepresentation;	// IMP=0x0000000100053378
- (id)description;	// IMP=0x00000001000532c4
@property(readonly, nonatomic) _Bool hasTask;

@end

