//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "MapsTheming-Protocol.h"

@class NSString;

@interface MapsThemeTableView : UITableView <MapsTheming>
{
    CDUnknownBlockType _separatorColorProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006fc0
@property(copy, nonatomic) CDUnknownBlockType separatorColorProvider; // @synthesize separatorColorProvider=_separatorColorProvider;
- (void)_updateSeparatorColor;	// IMP=0x0000000000006ed0
- (void)setCellSeparatorColorProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e70
- (void)updateTheme;	// IMP=0x0000000000006e64
- (void)didMoveToWindow;	// IMP=0x0000000000006df0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000006cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

