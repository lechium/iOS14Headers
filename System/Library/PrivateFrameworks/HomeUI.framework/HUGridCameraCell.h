/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>

@class HFItem, HUGridCameraCellLayoutOptions, UIView, UILabel, HULegibilityLabel, HUCameraView, _UILegibilitySettings, NSArray, NADecayingTimer, HUVisualEffectContainerView;

@interface HUGridCameraCell : HUGridCell {

	HFItem* _item;
	HUGridCameraCellLayoutOptions* _layoutOptions;
	UIView* _topBarView;
	UIView* _recordingIndicator;
	UILabel* _titleLabel;
	HULegibilityLabel* _descriptionLabel;
	HUCameraView* _cameraView;
	_UILegibilitySettings* _legibilitySettings;
	NSArray* _allConstraints;
	NSArray* _labelsConstraints;
	NADecayingTimer* _descriptionLabelUpdateTimer;
	HUVisualEffectContainerView* _exclamationView;

}

@property (nonatomic,retain) UIView * topBarView;                                        //@synthesize topBarView=_topBarView - In the implementation block
@property (nonatomic,retain) UIView * recordingIndicator;                                //@synthesize recordingIndicator=_recordingIndicator - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HULegibilityLabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) HUCameraView * cameraView;                                  //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) NSArray * allConstraints;                                   //@synthesize allConstraints=_allConstraints - In the implementation block
@property (nonatomic,retain) NSArray * labelsConstraints;                                //@synthesize labelsConstraints=_labelsConstraints - In the implementation block
@property (nonatomic,retain) NADecayingTimer * descriptionLabelUpdateTimer;              //@synthesize descriptionLabelUpdateTimer=_descriptionLabelUpdateTimer - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * exclamationView;              //@synthesize exclamationView=_exclamationView - In the implementation block
@property (nonatomic,retain) HUGridCameraCellLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) double cameraViewAlpha; 
@property (nonatomic,readonly) UIView * cameraContentView; 
+(Class)layoutOptionsClass;
+(BOOL)requiresConstraintBasedLayout;
-(HUGridCameraCellLayoutOptions *)layoutOptions;
-(void)layoutOptionsDidChange;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(UILabel *)titleLabel;
-(NADecayingTimer *)descriptionLabelUpdateTimer;
-(void)setDescriptionLabelUpdateTimer:(NADecayingTimer *)arg1 ;
-(id)_descriptionLabelText:(id)arg1 ;
-(BOOL)shouldDisplayAccessModeErrorContent;
-(BOOL)shouldDisplayErrorContent;
-(void)_updateRecordIndicatorColor;
-(void)_updateCameraViewAppearance;
-(NSArray *)allConstraints;
-(NSArray *)labelsConstraints;
-(void)setLabelsConstraints:(NSArray *)arg1 ;
-(void)setAllConstraints:(NSArray *)arg1 ;
-(double)cameraViewAlpha;
-(void)_animateTransitionWithView:(id)arg1 animations:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)prepareForReuse;
-(void)dealloc;
-(HUCameraView *)cameraView;
-(void)setCameraView:(HUCameraView *)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)setTopBarView:(UIView *)arg1 ;
-(void)setRecordingIndicator:(UIView *)arg1 ;
-(void)setExclamationView:(HUVisualEffectContainerView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)item;
-(HUVisualEffectContainerView *)exclamationView;
-(void)setLayoutOptions:(HUGridCameraCellLayoutOptions *)arg1 ;
-(UIView *)cameraContentView;
-(_UILegibilitySettings *)legibilitySettings;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UIView *)recordingIndicator;
-(UIView *)topBarView;
-(HULegibilityLabel *)descriptionLabel;
-(void)setDescriptionLabel:(HULegibilityLabel *)arg1 ;
-(CGRect)cameraViewFrame;
-(void)setCameraViewAlpha:(double)arg1 ;
@end

