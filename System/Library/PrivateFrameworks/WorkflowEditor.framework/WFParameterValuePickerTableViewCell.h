/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFParameterValuePickable;
@class WFParameter, WFCodableAttributeBackedSubstitutableState, UILabel, UIImageView, NSLayoutConstraint, UIStackView;

@interface WFParameterValuePickerTableViewCell : UITableViewCell {

	WFParameter*<WFParameterValuePickable> _parameter;
	WFCodableAttributeBackedSubstitutableState* _state;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _iconImageView;
	NSLayoutConstraint* _iconImageViewWidgetConstraint;
	NSLayoutConstraint* _subtitleHeightConstraint;
	NSLayoutConstraint* _subtitleTopConstraint;
	UIStackView* _contentStackView;
	UIStackView* _labelsStackView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;                                     //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * iconImageViewWidgetConstraint;              //@synthesize iconImageViewWidgetConstraint=_iconImageViewWidgetConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * subtitleHeightConstraint;                   //@synthesize subtitleHeightConstraint=_subtitleHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * subtitleTopConstraint;                      //@synthesize subtitleTopConstraint=_subtitleTopConstraint - In the implementation block
@property (nonatomic,readonly) UIStackView * contentStackView;                                  //@synthesize contentStackView=_contentStackView - In the implementation block
@property (nonatomic,readonly) UIStackView * labelsStackView;                                   //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,retain) WFParameter*<WFParameterValuePickable> parameter;                  //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,retain) WFCodableAttributeBackedSubstitutableState * state;                //@synthesize state=_state - In the implementation block
-(UIImageView *)iconImageView;
-(UILabel *)titleLabel;
-(UIStackView *)labelsStackView;
-(void)tintColorDidChange;
-(void)setState:(WFCodableAttributeBackedSubstitutableState *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(id)defaultContentConfiguration;
-(id)configurationState;
-(WFParameter*<WFParameterValuePickable>)parameter;
-(WFCodableAttributeBackedSubstitutableState *)state;
-(UIStackView *)contentStackView;
-(void)setParameter:(WFParameter*<WFParameterValuePickable>)arg1 ;
-(NSLayoutConstraint *)subtitleHeightConstraint;
-(NSLayoutConstraint *)iconImageViewWidgetConstraint;
-(NSLayoutConstraint *)subtitleTopConstraint;
@end

