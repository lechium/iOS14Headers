/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentView.h>

@class _UIBasicHeaderFooterContentViewConfiguration, UILabel, NSString;

@interface _UIBasicHeaderFooterContentView : UIView <_UIContentView> {

	_UIBasicHeaderFooterContentViewConfiguration* _animatingFromConfiguration;
	_UIBasicHeaderFooterContentViewConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	_UIBasicHeaderFooterContentViewConfiguration* _configuration;
	UILabel* _textLabel;

}

@property (nonatomic,copy) _UIBasicHeaderFooterContentViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                   //@synthesize textLabel=_textLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_encodableSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)layoutSubviews;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(_UIBasicHeaderFooterContentViewConfiguration *)configuration;
-(double)_multilineContextWidth;
-(double)_preferredMaxLayoutWidth;
-(NSString *)description;
-(UILabel *)textLabel;
-(void)setConfiguration:(_UIBasicHeaderFooterContentViewConfiguration *)arg1 ;
@end

