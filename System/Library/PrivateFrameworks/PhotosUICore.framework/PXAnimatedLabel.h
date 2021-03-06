/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFont, NSString, PXAnimatedCounter, UILabel, NSLayoutConstraint;

@interface PXAnimatedLabel : UIView {

	UIFont* _font;
	NSString* _text;
	PXAnimatedCounter* _counter;
	UILabel* _label;
	NSLayoutConstraint* _counterWidthConstraint;

}

@property (retain) PXAnimatedCounter * counter;                                //@synthesize counter=_counter - In the implementation block
@property (retain) UILabel * label;                                            //@synthesize label=_label - In the implementation block
@property (readonly) NSLayoutConstraint * counterWidthConstraint;              //@synthesize counterWidthConstraint=_counterWidthConstraint - In the implementation block
@property (nonatomic,retain) UIFont * font;                                    //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
-(void)commonInit;
-(PXAnimatedCounter *)counter;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(id)initWithCoder:(id)arg1 ;
-(void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateConstraintsForText;
-(NSLayoutConstraint *)counterWidthConstraint;
-(void)setCounter:(PXAnimatedCounter *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setFont:(UIFont *)arg1 ;
@end

