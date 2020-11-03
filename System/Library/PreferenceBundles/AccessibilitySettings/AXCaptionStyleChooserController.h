//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import "AXCaptionPreviewDelegate-Protocol.h"

@class NSArray, NSString, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface AXCaptionStyleChooserController : AXUISettingsBaseListController <AXCaptionPreviewDelegate>
{
    UIWindow *_fullScreenPreviewWindow;	// 192 = 0xc0
    UIView *_landscapeBlackBackgroundView;	// 200 = 0xc8
    UIView *_topHalfSplitImage;	// 208 = 0xd0
    UIView *_bottomHalfSplitImage;	// 216 = 0xd8
    UIView *_padSidePortionImage;	// 224 = 0xe0
    struct __CFString *profileId;	// 232 = 0xe8
    NSArray *captionPreviewSpecifiers;	// 240 = 0xf0
    NSArray *videoOverrideSpecifiers;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000000d03e0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000d02b4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000d0160
- (void)captionPreviewWasTapped:(_Bool)arg1;	// IMP=0x00000000000d0108
- (_Bool)isPreviewExpanded;	// IMP=0x00000000000d0018
- (id)_snapshotWindow:(id)arg1 opaque:(_Bool)arg2;	// IMP=0x00000000000cfec0
- (id)_splitImageAppropriately:(id)arg1 statusBar:(id)arg2 secondHalfStart:(struct CGPoint)arg3 secondHalfEnd:(struct CGPoint)arg4;	// IMP=0x00000000000cf82c
- (_Bool)isStoredColorType:(int)arg1 equalWithColors:(id)arg2;	// IMP=0x00000000000cf608
- (_Bool)isStoredTransparencyType:(int)arg1 equalWithTransparency:(id)arg2;	// IMP=0x00000000000cf508
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cf43c
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000cf3b8
@property(readonly, nonatomic) struct __CFString *profileId; // @synthesize profileId;
- (_Bool)shouldAutorotate;	// IMP=0x00000000000cf2d4
@property(readonly, nonatomic) NSArray *videoOverrideSpecifiers; // @synthesize videoOverrideSpecifiers;
- (id)_videoOverrideText;	// IMP=0x00000000000cf0c4
- (void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000cf094
- (id)_videoOverridesStyle:(id)arg1;	// IMP=0x00000000000cf05c
- (void)willResignActive;	// IMP=0x00000000000cf014
- (void)updateTableCheckedSelection:(id)arg1;	// IMP=0x00000000000ceebc
@property(readonly, nonatomic) NSArray *captionPreviewSpecifiers; // @synthesize captionPreviewSpecifiers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000cece8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
