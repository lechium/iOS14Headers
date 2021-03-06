//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyError, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWillBeRetried : PBCodable <NSCopying>
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100061994
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000618b0
- (unsigned long long)hash;	// IMP=0x0000000100061854
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100061780
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000616d0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100061664
- (void)writeTo:(id)arg1;	// IMP=0x0000000100061600
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000613c8
- (id)dictionaryRepresentation;	// IMP=0x00000001000612e8
- (id)description;	// IMP=0x0000000100061234
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTask;

@end

