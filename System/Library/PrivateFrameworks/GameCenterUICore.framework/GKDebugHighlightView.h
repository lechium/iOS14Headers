/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:30 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSString;

@interface GKDebugHighlightView : UIView {

	BOOL _isOval;
	UIColor* _color;
	NSString* _caption;

}

@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * caption;              //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) BOOL isOval;                     //@synthesize isOval=_isOval - In the implementation block
-(id)init;
-(BOOL)isOval;
-(NSString *)caption;
-(UIColor *)color;
-(void)setCaption:(NSString *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setIsOval:(BOOL)arg1 ;
@end
