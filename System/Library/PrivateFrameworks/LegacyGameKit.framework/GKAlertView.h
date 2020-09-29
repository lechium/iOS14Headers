/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:31 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <LegacyGameKit/LegacyGameKit-Structs.h>
#import <UIKitCore/UIAlertView.h>

@class UIView;

@interface GKAlertView : UIAlertView {

	UIView* _clipView;
	UIView* _contentView;

}
+(void)initialize;
+(CGSize)preferredContentViewSize;
-(id)contentView;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)dealloc;
-(BOOL)_canDrawContent;
-(id)initAlertView;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_replaceContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 ;
@end
