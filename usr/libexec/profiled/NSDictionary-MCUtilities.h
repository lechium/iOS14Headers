//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MCUtilities)
+ (id)MCShortenedDictionary:(id)arg1;	// IMP=0x0000000100015998
+ (id)MCShortenedArray:(id)arg1;	// IMP=0x0000000100015800
+ (id)MCShortenedData:(id)arg1;	// IMP=0x000000010001560c
+ (id)MCShortenedObject:(id)arg1;	// IMP=0x0000000100015520
+ (id)MCDictionaryFromFile:(id)arg1;	// IMP=0x0000000100014aac
- (id)MCShortenedPlistDescription;	// IMP=0x00000001000154c0
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id *)arg5;	// IMP=0x0000000100015360
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;	// IMP=0x0000000100015188
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;	// IMP=0x0000000100015044
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;	// IMP=0x0000000100014e8c
- (id)MCDeepCopy;	// IMP=0x0000000100014e7c
- (id)MCDeepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100014e70
- (id)MCMutableDeepCopy;	// IMP=0x0000000100014e60
- (id)MCMutableDeepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100014bec
- (_Bool)MCWriteToBinaryFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x00000001000148c8
@end

