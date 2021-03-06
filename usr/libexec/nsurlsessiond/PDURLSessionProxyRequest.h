//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface PDURLSessionProxyRequest : PBRequest <NSCopying>
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000100042b94
@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100042ae8
- (unsigned long long)hash;	// IMP=0x0000000100042a84
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000429ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100042904
- (void)copyTo:(id)arg1;	// IMP=0x000000010004288c
- (void)writeTo:(id)arg1;	// IMP=0x000000010004281c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100042814
- (id)dictionaryRepresentation;	// IMP=0x0000000100042748
- (id)description;	// IMP=0x0000000100042694
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;
- (id)_actualRequest;	// IMP=0x00000001000375d0
- (id)_initWithActualRequest:(id)arg1;	// IMP=0x0000000100037500

@end

