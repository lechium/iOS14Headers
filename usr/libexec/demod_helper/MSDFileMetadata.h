//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MSDFileMetadata : NSObject
{
    NSDictionary *_dict;	// 8 = 0x8
}

+ (id)compareResultToNSString:(int)arg1;	// IMP=0x000000010000a740
+ (id)fileMetaDataWithMetadataDictionary:(id)arg1;	// IMP=0x00000001000089fc
+ (id)fileMetadatatWithPath:(id)arg1;	// IMP=0x00000001000089a8
+ (id)targetFileWithPath:(id)arg1;	// IMP=0x0000000100008418
+ (id)extendedAttributesWithPath:(id)arg1;	// IMP=0x00000001000081a0
+ (id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2;	// IMP=0x0000000100007f7c
+ (id)accessControlListWithPath:(id)arg1;	// IMP=0x0000000100007c8c
+ (id)extendedAttributeKeysWithPath:(id)arg1;	// IMP=0x0000000100007988
+ (id)fileAttributesWithPath:(id)arg1;	// IMP=0x000000010000778c
+ (id)fileHashWithPath:(id)arg1;	// IMP=0x0000000100007598
- (void).cxx_destruct;	// IMP=0x000000010000a7c0
@property(readonly) NSDictionary *dict; // @synthesize dict=_dict;
@property(readonly, getter=getFileSize) long long fileSize;
@property(readonly, getter=getTargetFile) NSString *targetFile;
@property(readonly, getter=getFileType) NSString *fileType;
@property(readonly, getter=getAccessControlList) NSData *accessControlList;
@property(readonly, getter=getExtendedAttributes) NSDictionary *extendedAttributes;
@property(readonly, getter=getFileAttributes) NSDictionary *fileAttributes;
@property(readonly, getter=getHash) NSData *hash;
- (id)fileAttributesAllowSet:(id)arg1;	// IMP=0x000000010000a208
- (int)compareWith:(id)arg1;	// IMP=0x0000000100009978
- (_Bool)restoreAttribuesToPath:(id)arg1;	// IMP=0x0000000100008ca0
- (_Bool)removeAllExtendedAttributes:(id)arg1;	// IMP=0x0000000100008a9c
- (void)dealloc;	// IMP=0x0000000100008a50
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100008600
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100008588

@end

