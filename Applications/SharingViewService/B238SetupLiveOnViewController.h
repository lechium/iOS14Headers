//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class NSString, UILabel;

@interface B238SetupLiveOnViewController : B238SetupBaseViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    NSString *_iCloudUserID;	// 48 = 0x30
    NSString *_iTunesUserID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100028d40
@property(copy, nonatomic) NSString *iTunesUserID; // @synthesize iTunesUserID=_iTunesUserID;
@property(copy, nonatomic) NSString *iCloudUserID; // @synthesize iCloudUserID=_iCloudUserID;
- (void)handleLiveOnButton:(id)arg1;	// IMP=0x0000000100028c1c
- (void)handleDismissButton:(id)arg1;	// IMP=0x0000000100028b8c
- (void)handleDevelopmentButton:(id)arg1;	// IMP=0x0000000100028aa0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100028a08

@end
