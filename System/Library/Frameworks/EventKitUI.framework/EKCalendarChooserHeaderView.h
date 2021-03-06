/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView, NSArray, UILabel, EKGroupInfoButton, EKCalendarChooser, EKGroupInfo;

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView {

	UIActivityIndicatorView* _spinner;
	NSArray* _primaryLabelWithShowAllButtonLargeConstraints;
	NSArray* _primaryLabelWithoutShowAllButtonLargeConstraints;
	NSArray* _commonLargeConstraints;
	NSArray* _primaryLabelWithShowAllButtonNormalConstraints;
	NSArray* _primaryLabelWithoutShowAllButtonNormalConstraints;
	NSArray* _commonNormalConstraints;
	NSArray* _commonConstraints;
	BOOL _stacked;
	UILabel* _primaryLabel;
	EKGroupInfoButton* _showAllButton;
	EKCalendarChooser* _chooser;
	EKGroupInfo* _group;

}

@property (nonatomic,retain) UILabel * primaryLabel;                          //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) EKGroupInfoButton * showAllButton;               //@synthesize showAllButton=_showAllButton - In the implementation block
@property (assign,nonatomic) BOOL showAllButtonHidden; 
@property (assign,nonatomic,__weak) EKCalendarChooser * chooser;              //@synthesize chooser=_chooser - In the implementation block
@property (nonatomic,retain) EKGroupInfo * group;                             //@synthesize group=_group - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setGroup:(EKGroupInfo *)arg1 ;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(EKCalendarChooser *)chooser;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(UILabel *)primaryLabel;
-(EKGroupInfo *)group;
-(EKGroupInfoButton *)showAllButton;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setShowAllButton:(EKGroupInfoButton *)arg1 ;
-(void)_eventStoreChanged;
-(BOOL)showAllButtonHidden;
-(void)_activateConstraints;
-(void)_groupShowAllButtonTapped:(id)arg1 ;
-(void)updateSpinner;
-(void)setChooser:(EKCalendarChooser *)arg1 ;
-(void)setShowAllButtonHidden:(BOOL)arg1 ;
-(void)_createConstraints;
@end

