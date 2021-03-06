/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayModule/DisplayModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIGroupRendering.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol CCUIDisplayModuleViewControllerDelegate;
@class NSArray, CALayer, UIViewPropertyAnimator, CCUIContinuousSliderView, NSString;

@interface CCUIDisplayModuleViewController : UIViewController <CCUIGroupRendering, CCUIContentModuleContentViewController> {

	BKSDisplayBrightnessTransactionRef _brightnessTransaction;
	BOOL _expanded;
	id<CCUIDisplayModuleViewControllerDelegate> _delegate;
	CCUIContinuousSliderView* _sliderView;

}

@property (nonatomic,retain) CCUIContinuousSliderView * sliderView;                                      //@synthesize sliderView=_sliderView - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIDisplayModuleViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentBrightness; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(void)setSliderView:(CCUIContinuousSliderView *)arg1 ;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(double)preferredExpandedContinuousCornerRadius;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)preferredExpandedContentWidth;
-(void)_sliderEditingDidBegin:(id)arg1 ;
-(id)viewForTouchContinuation;
-(void)dealloc;
-(float)currentBrightness;
-(void)viewDidLoad;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(void)setGlyphState:(id)arg1 ;
-(void)setDelegate:(id<CCUIDisplayModuleViewControllerDelegate>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_noteScreenBrightnessDidChange:(id)arg1 ;
-(void)_updateWithCurrentBrightnessAnimated:(BOOL)arg1 ;
-(void)_setBacklightLevel:(float)arg1 ;
-(id<CCUIDisplayModuleViewControllerDelegate>)delegate;
-(NSArray *)punchOutRootLayers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CCUIContinuousSliderView *)sliderView;
-(BOOL)isGroupRenderingRequired;
-(void)_sliderEditingDidEnd:(id)arg1 ;
-(float)_backlightLevel;
-(double)preferredExpandedContentHeight;
-(BOOL)_canShowWhileLocked;
@end

