//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PSHeaderFooterView-Protocol.h"

@class NSArray, NSDateComponentsFormatter, NSError, NSMutableSet, NSString, UIActivityIndicatorView, UILabel, UIProgressView;

@interface BackupStatusView : UIView <PSHeaderFooterView>
{
    UIActivityIndicatorView *_spinner;	// 8 = 0x8
    UIProgressView *_progressBar;	// 16 = 0x10
    UILabel *_statusLabel;	// 24 = 0x18
    UILabel *_timeRemainingLabel;	// 32 = 0x20
    UILabel *_backupIssueLabel;	// 40 = 0x28
    UILabel *_lastBackupLabel;	// 48 = 0x30
    double _backupProgress;	// 56 = 0x38
    int _animatingToState;	// 64 = 0x40
    _Bool _animatedToEnabled;	// 68 = 0x44
    NSMutableSet *_visibleSubviews;	// 72 = 0x48
    NSError *_backupError;	// 80 = 0x50
    NSString *_footerText;	// 88 = 0x58
    NSDateComponentsFormatter *_durationFormatter;	// 96 = 0x60
    NSArray *_syncErrors;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000081ec
@property(retain, nonatomic) NSArray *syncErrors; // @synthesize syncErrors=_syncErrors;
@property(nonatomic) double backupProgress; // @synthesize backupProgress=_backupProgress;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSError *backupError; // @synthesize backupError=_backupError;
- (void)updateViewsForBackupState:(int)arg1 restoreState:(int)arg2 enabled:(_Bool)arg3;	// IMP=0x0000000000007338
- (double)progress;	// IMP=0x000000000000730c
- (void)setBackupProgress:(double)arg1 timeIntervalRemaining:(double)arg2;	// IMP=0x00000000000071f0
- (void)layoutSubviews;	// IMP=0x00000000000071a0
- (void)_layoutSubviews;	// IMP=0x0000000000006de0
- (void)sizeToFit;	// IMP=0x0000000000006d00
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;	// IMP=0x0000000000006cc4
- (void)_sizeToFitWidth:(double)arg1 inTableView:(id)arg2;	// IMP=0x00000000000068ec
- (void)updateStatus:(id)arg1;	// IMP=0x00000000000068ac
- (void)setLastBackupText:(id)arg1;	// IMP=0x0000000000006764
- (void)didMoveToSuperview;	// IMP=0x000000000000670c
- (id)initWithSpecifier:(id)arg1;	// IMP=0x0000000000006088

@end
