//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHPreferences : NSObject
{
    NSString *_domain;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010007666c
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100076614
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0000000100076560
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x00000001000764d4
- (unsigned long long)unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x0000000100076478
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000001000763ec
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x0000000100076390
- (void)setNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100076340
- (id)numberForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x000000010007628c
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000100076200
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x00000001000761a4
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3;	// IMP=0x000000010007614c
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000760bc
- (id)preferencesValueForKey:(id)arg1 domain:(id)arg2;	// IMP=0x0000000100076074
- (id)preferencesValueForKey:(id)arg1;	// IMP=0x0000000100075fec

@end

