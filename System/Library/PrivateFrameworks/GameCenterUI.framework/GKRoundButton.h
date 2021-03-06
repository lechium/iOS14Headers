/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKButton.h>

@class UIImage;

@interface GKRoundButton : GKButton

@property (nonatomic,retain) UIImage * backgroundImage; 
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)tintColorDidChange;
-(UIImage *)backgroundImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)_highlightBounds;
@end

