//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSDate, NSString, UITableView, UITextField;

@interface FieldTestSaveViewController : UIViewController <UITableViewDataSource, UITextFieldDelegate>
{
    NSDate *_timeStamp;	// 8 = 0x8
    NSArray *_saveHistory;	// 16 = 0x10
    UITableView *saveContentTable;	// 24 = 0x18
    UITextField *saveDescription;	// 32 = 0x20
}

@property(retain, nonatomic) UITextField *saveDescription; // @synthesize saveDescription;
@property(retain, nonatomic) UITableView *saveContentTable; // @synthesize saveContentTable;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100007c64
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100007c5c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100007b20
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100007b08
- (void)backgroundTouched:(id)arg1;	// IMP=0x0000000100007af0
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100007acc
- (void)cancelPressed:(id)arg1;	// IMP=0x0000000100007a8c
- (void)savePressed:(id)arg1;	// IMP=0x00000001000078dc
- (void)dealloc;	// IMP=0x000000010000787c
- (void)viewDidUnload;	// IMP=0x0000000100007848
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100007814
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100007790
- (void)viewDidLoad;	// IMP=0x000000010000771c
- (id)initWithSaveHistory:(id)arg1;	// IMP=0x0000000100007684

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

