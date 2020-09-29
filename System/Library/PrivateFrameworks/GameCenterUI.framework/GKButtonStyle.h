/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <GameCenterUI/GameCenterUI-Structs.h>
@class UIColor;

@interface GKButtonStyle : NSObject {

	BOOL _clipToBounds;
	double _cornerRadius;
	UIColor* _backgroundColor;
	id _compositingFilter;
	UIEdgeInsets _titleEdgeInsets;

}

@property (assign,nonatomic) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL clipToBounds;                         //@synthesize clipToBounds=_clipToBounds - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets;              //@synthesize titleEdgeInsets=_titleEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) id compositingFilter;                      //@synthesize compositingFilter=_compositingFilter - In the implementation block
+(id)defaultStyle;
+(id)standardStyle;
-(double)cornerRadius;
-(UIEdgeInsets)titleEdgeInsets;
-(void)applyToButton:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithCornerRadius:(double)arg1 andBackgroundColor:(id)arg2 ;
-(BOOL)clipToBounds;
-(void)setClipToBounds:(BOOL)arg1 ;
-(id)compositingFilter;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
@end
