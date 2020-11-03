//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSDetailController.h>

#import "UIPageViewControllerDataSource-Protocol.h"

@class NSArray, NSDictionary, NSString, UIFont, UIPageViewController;

@interface PSFontFacePreviewController : PSDetailController <UIPageViewControllerDataSource>
{
    NSString *_fontPreferredLanguage;	// 40 = 0x28
    NSDictionary *_fontLocalizedStrings;	// 48 = 0x30
    UIPageViewController *_pageViewController;	// 56 = 0x38
    NSArray *_sampleViewControllers;	// 64 = 0x40
    UIFont *_font;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000034d4
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSArray *sampleViewControllers; // @synthesize sampleViewControllers=_sampleViewControllers;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (long long)presentationIndexForPageViewController:(id)arg1;	// IMP=0x00000000000033d4
- (long long)presentationCountForPageViewController:(id)arg1;	// IMP=0x00000000000033bc
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000000003360
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x00000000000032e4
- (id)makeRepertoireView;	// IMP=0x000000000000323c
- (id)makeSampleViewWithText:(id)arg1 ofSize:(double)arg2;	// IMP=0x0000000000002a60
- (id)makeLoremIpsumSampleView;	// IMP=0x0000000000002970
- (id)makeAlphabetSampleView;	// IMP=0x00000000000026f0
- (id)sampleViewForPage:(long long)arg1;	// IMP=0x00000000000026b4
- (id)fontLocalizedStringForKey:(id)arg1;	// IMP=0x0000000000002574
- (id)fontPreferredLanguage;	// IMP=0x00000000000023b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000001b6c
- (void)updateNavigationItem;	// IMP=0x0000000000001b28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
