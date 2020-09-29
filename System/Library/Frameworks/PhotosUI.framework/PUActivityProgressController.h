/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PUActivityProgressViewController, UIAlertController, UIView, NSString, UIWindow, NSProgress;

@interface PUActivityProgressController : NSObject {

	PUActivityProgressViewController* _progressViewController;
	UIAlertController* _alertController;
	UIView* _containerView;
	UIView* _dimmingView;
	UIView* _progressContainerView;
	double _whenDidShow;
	BOOL _didShow;
	BOOL _didHide;
	NSString* _title;
	UIWindow* _window;
	/*^block*/id _cancellationHandler;
	NSProgress* _progress;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,copy) id cancellationHandler;                  //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setFractionCompleted:(double)arg1 ;
-(id)cancellationHandler;
-(void)dealloc;
-(NSString *)title;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)init;
-(BOOL)isCancelled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)setCancellationHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_updateFractionCompletedFromProgress;
-(id)_newProgressContainerView;
-(void)showAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2 ;
-(void)hideAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2 ;
@end
