//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsListController.h>

#import "UISearchControllerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol CACSearchResultPresenter;

__attribute__((visibility("hidden")))
@interface CACCommandSearchResultsViewController : AXUISettingsListController <UISearchControllerDelegate>
{
    id <CACSearchResultPresenter> _delegate;	// 192 = 0xc0
    NSArray *_searchResults;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000032f5c
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <CACSearchResultPresenter> delegate; // @synthesize delegate=_delegate;
- (void)presentCustomAction:(id)arg1;	// IMP=0x0000000000032e40
- (void)keyboardWillBeHidden:(id)arg1;	// IMP=0x0000000000032d84
- (void)keyboardWasShown:(id)arg1;	// IMP=0x0000000000032c7c
- (void)registerForKeyboardNotifications;	// IMP=0x0000000000032bb8
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0000000000032ba0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000003294c
- (id)specifiers;	// IMP=0x000000000003248c
- (void)viewDidLoad;	// IMP=0x000000000003243c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

