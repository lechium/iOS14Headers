//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class APPBLogMetaData, NSMutableArray;

@interface APPBLogAdEventRequest : PBRequest <NSCopying>
{
    NSMutableArray *_events;	// 8 = 0x8
    APPBLogMetaData *_metaData;	// 16 = 0x10
}

+ (Class)eventType;	// IMP=0x000000010009e2f4
+ (id)options;	// IMP=0x000000010009e1c8
- (void).cxx_destruct;	// IMP=0x000000010009eefc
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) APPBLogMetaData *metaData; // @synthesize metaData=_metaData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010009ed40
- (unsigned long long)hash;	// IMP=0x000000010009ece4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009ec10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010009ea70
- (void)copyTo:(id)arg1;	// IMP=0x000000010009e97c
- (void)writeTo:(id)arg1;	// IMP=0x000000010009e834
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010009e82c
- (id)dictionaryRepresentation;	// IMP=0x000000010009e3b4
- (id)description;	// IMP=0x000000010009e300
- (id)eventAtIndex:(unsigned long long)arg1;	// IMP=0x000000010009e2dc
- (unsigned long long)eventsCount;	// IMP=0x000000010009e2c4
- (void)addEvent:(id)arg1;	// IMP=0x000000010009e250
- (void)clearEvents;	// IMP=0x000000010009e238
@property(readonly, nonatomic) _Bool hasMetaData;

@end
