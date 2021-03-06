/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PUPhotoStreamCreateTitleDelegate;
@class UITextField, UILabel, UITextView, UINavigationItem, NSArray, NSLayoutConstraint, NSString;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate> {

	UITextField* _titleField;
	UILabel* _descriptionLabel;
	UITextView* _textView;
	UILabel* _textPlaceholderLabel;
	UINavigationItem* _navItem;
	UILabel* _instructionLabel;
	NSArray* _constraints;
	BOOL _hidePlaceholder;
	UILabel* _axPlaceholderLabel;
	NSLayoutConstraint* _standardHeightConstraint;
	NSLayoutConstraint* _axHeightConstraint;
	id<PUPhotoStreamCreateTitleDelegate> _titleDelegate;

}

@property (assign,nonatomic) id<PUPhotoStreamCreateTitleDelegate> titleDelegate;              //@synthesize titleDelegate=_titleDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setTitle:(id)arg1 ;
-(void)contentSizeChanged;
-(void)_addConstraintsForTraitCollection:(id)arg1 ;
-(void)_cancelPost:(id)arg1 ;
-(id<PUPhotoStreamCreateTitleDelegate>)titleDelegate;
-(id)navigationItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)textViewDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTitleDelegate:(id<PUPhotoStreamCreateTitleDelegate>)arg1 ;
@end

