//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WebSheetRemoteAlertPresentationViewController;

@interface WebSheetViewController : UIViewController
{
    WebSheetRemoteAlertPresentationViewController *_remotePresentationController;	// 8 = 0x8
}

@property(nonatomic) WebSheetRemoteAlertPresentationViewController *remotePresentationController; // @synthesize remotePresentationController=_remotePresentationController;
- (id)webSheetView;	// IMP=0x0000000100008dc4
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100008dbc
- (_Bool)shouldAutorotate;	// IMP=0x0000000100008db4
- (void)dismissViewController;	// IMP=0x0000000100008d8c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100008d24
- (void)loadView;	// IMP=0x0000000100008c74

@end

