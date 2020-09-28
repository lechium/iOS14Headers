//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSScreenshot, SSSScreenshotModificationInfo, UIImage;
@protocol OS_dispatch_queue;

@interface SSSScreenshotImageProvider : NSObject
{
    struct os_unfair_lock_s _outputImageLock;	// 8 = 0x8
    _Bool _highQualityQueueHasBeenResumed;	// 12 = 0xc
    _Bool _highQualityQueueIsValid;	// 13 = 0xd
    _Bool _hasOriginalUneditedImage;	// 14 = 0xe
    _Bool _hasChangedBackingImage;	// 15 = 0xf
    SSSScreenshot *_screenshot;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_potentiallyLowQualityImageQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_highQualityImageQueue;	// 32 = 0x20
    UIImage *_cachedOutputImage;	// 40 = 0x28
    UIImage *_cachedCGImageBackedUneditedImageForUI;	// 48 = 0x30
    SSSScreenshotModificationInfo *_cachedModificationInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100026e7c
@property(retain, nonatomic) SSSScreenshotModificationInfo *cachedModificationInfo; // @synthesize cachedModificationInfo=_cachedModificationInfo;
@property(retain, nonatomic) UIImage *cachedCGImageBackedUneditedImageForUI; // @synthesize cachedCGImageBackedUneditedImageForUI=_cachedCGImageBackedUneditedImageForUI;
@property(retain, nonatomic) UIImage *cachedOutputImage; // @synthesize cachedOutputImage=_cachedOutputImage;
@property(nonatomic) _Bool hasChangedBackingImage; // @synthesize hasChangedBackingImage=_hasChangedBackingImage;
@property(nonatomic) _Bool hasOriginalUneditedImage; // @synthesize hasOriginalUneditedImage=_hasOriginalUneditedImage;
@property(nonatomic) _Bool highQualityQueueIsValid; // @synthesize highQualityQueueIsValid=_highQualityQueueIsValid;
@property(nonatomic) _Bool highQualityQueueHasBeenResumed; // @synthesize highQualityQueueHasBeenResumed=_highQualityQueueHasBeenResumed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *highQualityImageQueue; // @synthesize highQualityImageQueue=_highQualityImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *potentiallyLowQualityImageQueue; // @synthesize potentiallyLowQualityImageQueue=_potentiallyLowQualityImageQueue;
@property(nonatomic) __weak SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void)scheduleDeletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026c58
- (id)pdfDocument;	// IMP=0x0000000100026b78
- (void)processImageIdentifier:(id)arg1;	// IMP=0x0000000100026a30
- (void)_loadUneditedImageIfNecessaryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026720
- (id)requestCGImageBackedUneditedImageForUIBlocking;	// IMP=0x00000001000265d0
- (void)requestCGImageBackedUneditedImageForUI:(CDUnknownBlockType)arg1;	// IMP=0x00000001000262a4
- (id)requestUneditedImageForUIBlocking;	// IMP=0x0000000100026154
- (void)requestUneditedImageForUI:(CDUnknownBlockType)arg1;	// IMP=0x000000010002600c
- (id)requestOutputImageForUIBlocking;	// IMP=0x0000000100025ebc
- (id)requestOutputImageForSavingBlocking;	// IMP=0x0000000100025d54
- (void)requestOutputImageForUI:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025c2c
- (void)requestOutputImageInTransition:(_Bool)arg1 forSaving:(CDUnknownBlockType)arg2;	// IMP=0x00000001000258c8
- (void)requestOutputImageForSaving:(CDUnknownBlockType)arg1;	// IMP=0x00000001000258b4
- (id)_outputImageOnCurrentUneditedImage;	// IMP=0x00000001000256f4
- (void)_resumeHighQualityQueueIfNecessary;	// IMP=0x0000000100025684
- (void)dealloc;	// IMP=0x00000001000255ac
- (id)initWithScreenshot:(id)arg1;	// IMP=0x000000010002540c

@end
