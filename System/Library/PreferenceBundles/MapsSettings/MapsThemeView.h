//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MapsTheming-Protocol.h"

@class NSString;

@interface MapsThemeView : UIView <MapsTheming>
{
}

- (void)updateTheme;	// IMP=0x0000000000006b24
- (void)didMoveToWindow;	// IMP=0x0000000000006ab0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000006988

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
