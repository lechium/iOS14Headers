//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PTPCameraItem.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PTPCameraFile : PTPCameraItem
{
    _Bool _raw;	// 104 = 0x68
    _Bool _hasThumbnail;	// 105 = 0x69
    _Bool _updatedBasicMetadata;	// 106 = 0x6a
    _Bool _updatedExpensiveMetadata;	// 107 = 0x6b
    _Bool _previewThumbnail;	// 108 = 0x6c
    _Bool _smallThumbnail;	// 109 = 0x6d
    _Bool _rolledMetadata;	// 110 = 0x6e
    int _thmSize;	// 112 = 0x70
    int _thmOffset;	// 116 = 0x74
    int _thmWidth;	// 120 = 0x78
    int _thmHeight;	// 124 = 0x7c
    int _imgWidth;	// 128 = 0x80
    int _imgHeight;	// 132 = 0x84
    int _imgOrientation;	// 136 = 0x88
    int _bitsPerPixel;	// 140 = 0x8c
    NSMutableDictionary *_cachedMetadata;	// 144 = 0x90
    NSString *_UTI;	// 152 = 0x98
    NSMutableDictionary *_subImages;	// 160 = 0xa0
    long long _dpOffset;	// 168 = 0xa8
}

@property _Bool rolledMetadata; // @synthesize rolledMetadata=_rolledMetadata;
@property _Bool smallThumbnail; // @synthesize smallThumbnail=_smallThumbnail;
@property _Bool previewThumbnail; // @synthesize previewThumbnail=_previewThumbnail;
@property _Bool updatedExpensiveMetadata; // @synthesize updatedExpensiveMetadata=_updatedExpensiveMetadata;
@property _Bool updatedBasicMetadata; // @synthesize updatedBasicMetadata=_updatedBasicMetadata;
@property long long dpOffset; // @synthesize dpOffset=_dpOffset;
@property int bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property int imgOrientation; // @synthesize imgOrientation=_imgOrientation;
@property int imgHeight; // @synthesize imgHeight=_imgHeight;
@property int imgWidth; // @synthesize imgWidth=_imgWidth;
@property int thmHeight; // @synthesize thmHeight=_thmHeight;
@property int thmWidth; // @synthesize thmWidth=_thmWidth;
@property int thmOffset; // @synthesize thmOffset=_thmOffset;
@property int thmSize; // @synthesize thmSize=_thmSize;
@property(retain, nonatomic) NSMutableDictionary *subImages; // @synthesize subImages=_subImages;
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_UTI;
@property(nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(nonatomic) _Bool raw; // @synthesize raw=_raw;
@property(readonly) NSMutableDictionary *cachedMetadata; // @synthesize cachedMetadata=_cachedMetadata;
- (id)imageData;	// IMP=0x0000000100027ca0
- (struct CGImage *)copyThumbnailForPixelWidth:(unsigned int)arg1;	// IMP=0x0000000100027704
- (id)thumbnailForPixelWidth:(unsigned int)arg1;	// IMP=0x0000000100027690
- (long long)compare:(id)arg1 against:(id)arg2 withContext:(void *)arg3;	// IMP=0x0000000100027610
- (id)metadataDict;	// IMP=0x0000000100027510
- (id)subImageDictForPixelWidth:(id)arg1;	// IMP=0x0000000100027158
- (void)addSubImageDict:(id)arg1;	// IMP=0x0000000100026f3c
- (void)rawImageScrapeAllocatedData:(char *)arg1 length:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3;	// IMP=0x0000000100026b14
- (id)rawImageValidateSubImage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100026824
- (void)rawImageInspectMetadata;	// IMP=0x0000000100025f04
- (_Bool)processMetadata:(id)arg1;	// IMP=0x0000000100025814
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;	// IMP=0x0000000100025640
- (_Bool)rawImageSupported;	// IMP=0x000000010002555c
- (_Bool)imageIOSupported;	// IMP=0x0000000100025490
- (id)altThumbnaillForPixelWidth:(unsigned int)arg1;	// IMP=0x0000000100024ea0
- (void)updateBasicMetadata;	// IMP=0x0000000100024418
- (void)metadataWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024374
- (void)thumbnailDataWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024180
- (int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long *)arg3;	// IMP=0x0000000100023f10
- (void)updateImmediateMetadata;	// IMP=0x0000000100023f0c
- (id)initWithStorageID:(unsigned int)arg1 ptpObjectInfo:(id)arg2 objHandle:(unsigned int)arg3 parent:(id)arg4 initiator:(id)arg5;	// IMP=0x00000001000238dc
- (id)initWithStorageID:(unsigned int)arg1 name:(id)arg2 objHandle:(unsigned int)arg3 parent:(id)arg4 initiator:(id)arg5;	// IMP=0x0000000100023738
- (unsigned long long)readStream:(void *)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x0000000100023470
- (void)releaseProvider;	// IMP=0x0000000100023460
- (void)rewind;	// IMP=0x0000000100023450
- (long long)skipBytes:(long long)arg1;	// IMP=0x00000001000233b4
- (_Bool)isAppleDevice;	// IMP=0x0000000100023384
- (void)dealloc;	// IMP=0x0000000100023314
- (void)logDebugIdentity;	// IMP=0x0000000100023064

@end
