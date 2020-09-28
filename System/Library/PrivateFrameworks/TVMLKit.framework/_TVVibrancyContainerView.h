/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVVisualEffectView.h>

@class UIView;

@interface _TVVibrancyContainerView : _TVVisualEffectView {

	UIView* _containedView;

}

@property (nonatomic,__weak,readonly) UIView * containedView;              //@synthesize containedView=_containedView - In the implementation block
-(UIView *)containedView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithEffect:(id)arg1 containingView:(id)arg2 ;
@end
