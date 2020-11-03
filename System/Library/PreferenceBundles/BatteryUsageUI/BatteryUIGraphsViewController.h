//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BatteryUsageRadarComposeViewController, NSDictionary, UIActivityIndicatorView, UIScrollView;

@interface BatteryUIGraphsViewController : UIViewController
{
    NSDictionary *_currentDictionary;	// 8 = 0x8
    UIScrollView *_rootScrollView;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicator;	// 24 = 0x18
    BatteryUsageRadarComposeViewController *_radarController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000843c
@property(retain, nonatomic) BatteryUsageRadarComposeViewController *radarController; // @synthesize radarController=_radarController;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIScrollView *rootScrollView; // @synthesize rootScrollView=_rootScrollView;
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000083ac
- (void)reportIssue;	// IMP=0x000000000000831c
- (void)viewDidLoad;	// IMP=0x0000000000008030
- (void)setUpModelingView:(id)arg1;	// IMP=0x0000000000007934
- (_Bool)validateDictionary:(id)arg1;	// IMP=0x00000000000078d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000007844

@end
