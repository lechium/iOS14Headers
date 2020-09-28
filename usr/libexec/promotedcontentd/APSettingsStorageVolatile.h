//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSettingsStorableProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface APSettingsStorageVolatile : NSObject <APSettingsStorableProtocol>
{
    NSDictionary *_defaults;	// 8 = 0x8
    NSMutableDictionary *_volatileData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003bd28
@property(readonly, nonatomic) NSMutableDictionary *volatileData; // @synthesize volatileData=_volatileData;
@property(readonly, nonatomic) NSDictionary *defaults; // @synthesize defaults=_defaults;
- (void)synchronize;	// IMP=0x000000010003bd14
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010003bbdc
- (id)valueForKey:(id)arg1;	// IMP=0x000000010003bad4
- (id)initWithDefaultValues:(id)arg1;	// IMP=0x000000010003ba28

@end
