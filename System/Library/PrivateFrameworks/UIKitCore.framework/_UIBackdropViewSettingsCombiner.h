/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBackdropViewSettings.h>

@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

	_UIBackdropViewSettings* _inputSettingsA;
	_UIBackdropViewSettings* _inputSettingsB;
	double _weighting;
	_UIBackdropViewSettings* _outputSettingsA;
	_UIBackdropViewSettings* _outputSettingsB;

}

@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsA;              //@synthesize outputSettingsA=_outputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsB;              //@synthesize outputSettingsB=_outputSettingsB - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsA;               //@synthesize inputSettingsA=_inputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsB;               //@synthesize inputSettingsB=_inputSettingsB - In the implementation block
@property (assign,nonatomic) double weighting;                                       //@synthesize weighting=_weighting - In the implementation block
-(double)weighting;
-(void)setWeighting:(double)arg1 ;
-(void)setDefaultValues;
-(BOOL)isBackdropVisible;
-(void)copyAdditionalSettingsFromSettings:(id)arg1 ;
-(_UIBackdropViewSettings *)outputSettingsA;
-(_UIBackdropViewSettings *)outputSettingsB;
-(void)setRequiresColorStatistics:(BOOL)arg1 ;
-(_UIBackdropViewSettings *)inputSettingsA;
-(_UIBackdropViewSettings *)inputSettingsB;
-(void)setOutputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setOutputSettingsB:(_UIBackdropViewSettings *)arg1 ;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(BOOL)requiresBackdropLayer;
-(void)setInputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setInputSettingsB:(_UIBackdropViewSettings *)arg1 ;
@end
