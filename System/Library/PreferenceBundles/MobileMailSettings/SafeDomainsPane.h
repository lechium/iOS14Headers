//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class UITextField;

@interface SafeDomainsPane : PSListController
{
    UITextField *_textField;	// 192 = 0xc0
    PSListController *_parentListController;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000001826c
@property(nonatomic) __weak PSListController *parentListController; // @synthesize parentListController=_parentListController;
- (void)_setDomainsList:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x0000000000017f4c
- (id)_domainsListWithSpecifier:(id)arg1;	// IMP=0x0000000000017e84
- (id)specifiers;	// IMP=0x0000000000017c00
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000179d8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000017984
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000178a4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000177f8
- (void)viewDidLoad;	// IMP=0x0000000000017700

@end
