/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel, UIImageView, UIWindow;

@interface UIProgressHUD : UIView {

	UIActivityIndicatorView* _progressIndicator;
	UILabel* _progressMessage;
	UIImageView* _doneView;
	UIWindow* _parentWindow;
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	}  _progressHUDFlags;

}
-(void)hide;
-(void)setFontSize:(int)arg1 ;
-(void)show:(BOOL)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)done;
-(void)showInView:(id)arg1 ;
-(void)setShowsText:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

