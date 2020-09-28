//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIView;

@interface PBAStackViewController : UIViewController
{
    NSArray *_viewControllers;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100008580
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100008568
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100008534
- (void)viewDidLoad;	// IMP=0x00000001000083ec
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0000000100008390
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100008258
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000081c4
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000080a8
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000100008038
- (void)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000100007fb0
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007f04
@property(readonly, nonatomic) UIViewController *visibleViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000747c
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000746c
- (void)loadView;	// IMP=0x00000001000073bc
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000100007348
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000072dc

@end
