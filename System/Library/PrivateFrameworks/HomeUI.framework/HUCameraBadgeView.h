/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class HULegibilityLabel, _UILegibilitySettings, UIVisualEffectView, NSArray, NSString;

@interface HUCameraBadgeView : UIView {

	unsigned long long _size;
	HULegibilityLabel* _label;
	_UILegibilitySettings* _legibilitySettings;
	UIVisualEffectView* _blurEffectView;
	UIVisualEffectView* _vibrancyEffectView;
	NSArray* _staticConstraints;
	NSArray* _labelConstraints;

}

@property (nonatomic,readonly) unsigned long long size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) HULegibilityLabel * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * blurEffectView;                     //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * vibrancyEffectView;                 //@synthesize vibrancyEffectView=_vibrancyEffectView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                               //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                                //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,copy) NSString * labelText; 
+(BOOL)requiresConstraintBasedLayout;
-(void)updateConstraints;
-(NSString *)labelText;
-(UIVisualEffectView *)blurEffectView;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithSize:(unsigned long long)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(unsigned long long)size;
-(HULegibilityLabel *)label;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(UIVisualEffectView *)vibrancyEffectView;
@end

