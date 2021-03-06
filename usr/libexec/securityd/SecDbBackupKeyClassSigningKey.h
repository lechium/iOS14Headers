//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupKeyClassSigningKey : PBCodable <NSCopying>
{
    NSData *_aksRefKey;	// 8 = 0x8
    NSData *_aksWrappedKey;	// 16 = 0x10
    NSData *_backupWrappedKey;	// 24 = 0x18
    int _keyClass;	// 32 = 0x20
    NSData *_publicKey;	// 40 = 0x28
    CDStruct_9ea6736c _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000997d8
@property(retain, nonatomic) NSData *backupWrappedKey; // @synthesize backupWrappedKey=_backupWrappedKey;
@property(retain, nonatomic) NSData *aksWrappedKey; // @synthesize aksWrappedKey=_aksWrappedKey;
@property(retain, nonatomic) NSData *aksRefKey; // @synthesize aksRefKey=_aksRefKey;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) int keyClass; // @synthesize keyClass=_keyClass;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100099660
- (unsigned long long)hash;	// IMP=0x00000001000995a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100099440
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100099314
- (void)copyTo:(id)arg1;	// IMP=0x000000010009923c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100099178
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100098eb4
- (id)dictionaryRepresentation;	// IMP=0x0000000100098d7c
- (id)description;	// IMP=0x0000000100098cc8
@property(readonly, nonatomic) _Bool hasBackupWrappedKey;
@property(readonly, nonatomic) _Bool hasAksWrappedKey;
@property(readonly, nonatomic) _Bool hasAksRefKey;
@property(readonly, nonatomic) _Bool hasPublicKey;
@property(nonatomic) _Bool hasKeyClass;

@end

