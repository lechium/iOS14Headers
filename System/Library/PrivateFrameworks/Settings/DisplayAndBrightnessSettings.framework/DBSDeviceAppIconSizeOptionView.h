/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol DBSDeviceAppIconSizeOptionViewDelegate;
@class UIStackView, DBSDeviceAppIconSizeAnimationView, UILabel, DBSCheckmarkView, UIImpactFeedbackGenerator, SBSHomeScreenService, NSString;

@interface DBSDeviceAppIconSizeOptionView : UIView <UIGestureRecognizerDelegate> {

	BOOL _highlight;
	id<DBSDeviceAppIconSizeOptionViewDelegate> _delegate;
	unsigned long long _appIconSizeOption;
	UIStackView* __stackView;
	DBSDeviceAppIconSizeAnimationView* __packageView;
	UILabel* __label;
	DBSCheckmarkView* __checkmarkView;
	UIImpactFeedbackGenerator* __feedbackGenerator;
	SBSHomeScreenService* __homeScreenService;

}

@property (nonatomic,retain) UIStackView * _stackView;                                                //@synthesize _stackView=__stackView - In the implementation block
@property (nonatomic,retain) DBSDeviceAppIconSizeAnimationView * _packageView;                        //@synthesize _packageView=__packageView - In the implementation block
@property (nonatomic,retain) UILabel * _label;                                                        //@synthesize _label=__label - In the implementation block
@property (nonatomic,retain) DBSCheckmarkView * _checkmarkView;                                       //@synthesize _checkmarkView=__checkmarkView - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * _feedbackGenerator;                          //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (assign,getter=highlighted,nonatomic) BOOL highlight;                                       //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) SBSHomeScreenService * _homeScreenService;                               //@synthesize _homeScreenService=__homeScreenService - In the implementation block
@property (assign,nonatomic,__weak) id<DBSDeviceAppIconSizeOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long appIconSizeOption;                                  //@synthesize appIconSizeOption=_appIconSizeOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)highlighted;
-(void)reload;
-(void)stopAnimation;
-(void)startAnimation;
-(UIStackView *)_stackView;
-(UILabel *)_label;
-(void)setDelegate:(id<DBSDeviceAppIconSizeOptionViewDelegate>)arg1 ;
-(id<DBSDeviceAppIconSizeOptionViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIImpactFeedbackGenerator *)_feedbackGenerator;
-(void)setHighlight:(BOOL)arg1 ;
-(DBSCheckmarkView *)_checkmarkView;
-(void)_configureView;
-(void)set_label:(UILabel *)arg1 ;
-(SBSHomeScreenService *)_homeScreenService;
-(DBSDeviceAppIconSizeAnimationView *)_packageView;
-(void)set_homeScreenService:(SBSHomeScreenService *)arg1 ;
-(void)set_feedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)set_checkmarkView:(DBSCheckmarkView *)arg1 ;
-(void)set_stackView:(UIStackView *)arg1 ;
-(void)_userDidTapOnView:(id)arg1 ;
-(unsigned long long)appIconSizeOption;
-(void)set_packageView:(DBSDeviceAppIconSizeAnimationView *)arg1 ;
-(void)_updateViewForCurrentDeviceAppIconSize;
-(id)initWithFrame:(CGRect)arg1 appIconSizeOption:(unsigned long long)arg2 ;
@end

