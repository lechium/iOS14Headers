//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSString;

@interface FontSettingsStringMatcher : NSObject
{
    NSString *_pattern;	// 8 = 0x8
    struct __CFStringTokenizer *_tokenizer;	// 16 = 0x10
    NSLocale *_currentLocale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d944
@property(retain, nonatomic) NSLocale *currentLocale; // @synthesize currentLocale=_currentLocale;
@property(nonatomic) struct __CFStringTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;
@property(readonly, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (_Bool)stringMatchesPattern:(id)arg1;	// IMP=0x000000000000d830
- (void)enumerateRangesMatchingPattern:(id)arg1 matchingType:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d62c
- (void)dealloc;	// IMP=0x000000000000d5e0
- (id)initWithPatternString:(id)arg1;	// IMP=0x000000000000d514

@end

