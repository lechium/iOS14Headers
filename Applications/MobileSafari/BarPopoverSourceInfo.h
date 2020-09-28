//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_SFPopoverSourceInfo-Protocol.h"

@class BrowserController, NSString, UIBarButtonItem, UIView;

@interface BarPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>
{
    long long _barItem;	// 8 = 0x8
    BrowserController *_browserController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100138f74
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
- (id)_sourceInfo;	// IMP=0x0000000100138d04
- (id)initWithBrowserController:(id)arg1 barItem:(long long)arg2;	// IMP=0x0000000100138c74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
