/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKStyleProvider, EKEditItemViewControllerDelegate;
@class EKUIRecurrenceAlertController;

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {

	CGRect _initialFrame;
	unsigned long long _subitem;
	BOOL _modal;
	id<EKStyleProvider> _styleProvider;
	id<EKEditItemViewControllerDelegate> _editDelegate;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	BOOL _showsDoneButton;

}

@property (assign,nonatomic) unsigned long long subitem;                                            //@synthesize subitem=_subitem - In the implementation block
@property (assign,nonatomic) BOOL modal;                                                            //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                  //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)cancel;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(BOOL)showsDoneButton;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)saveAndDismiss;
-(void)setModal:(BOOL)arg1 ;
-(BOOL)modal;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(void)_saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setSubitem:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)popIfNonModal;
-(unsigned long long)subitem;
-(void)saveAndDismissWithExtremePrejudice;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setCell:(id)arg1 checked:(BOOL)arg2 ;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(void)didReceiveMemoryWarning;
-(double)marginForTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
@end

