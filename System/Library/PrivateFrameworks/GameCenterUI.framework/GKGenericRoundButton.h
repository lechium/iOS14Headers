/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface GKGenericRoundButton : UIButton {

	UIColor* _fillColor;
	UIColor* _highlightedFillColor;

}

@property (nonatomic,retain) UIColor * fillColor;                         //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedFillColor;              //@synthesize highlightedFillColor=_highlightedFillColor - In the implementation block
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)highlightedFillColor;
-(void)setHighlightedFillColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

