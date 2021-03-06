/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying> {

	BOOL _useEmojiStyles;
	BOOL _lightKeyboard;
	BOOL _isFloating;
	long long _forceQuality;
	double _blurRadius;
	double _blurSaturation;
	double _keycapOpacity;
	double _lightKeycapOpacity;
	NSString* _controlKeyBackgroundName;
	NSString* _activatedKeyplaneSwitchControlKeyBackgroundName;
	_UIButtonBarButtonVisualProvider* _buttonBarVisualProvider;

}

@property (assign,nonatomic) BOOL lightKeyboard;                                                        //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
@property (assign,nonatomic) long long forceQuality;                                                    //@synthesize forceQuality=_forceQuality - In the implementation block
@property (assign,nonatomic) double blurRadius;                                                         //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double blurSaturation;                                                     //@synthesize blurSaturation=_blurSaturation - In the implementation block
@property (assign,nonatomic) double keycapOpacity;                                                      //@synthesize keycapOpacity=_keycapOpacity - In the implementation block
@property (assign,nonatomic) double lightKeycapOpacity;                                                 //@synthesize lightKeycapOpacity=_lightKeycapOpacity - In the implementation block
@property (assign,nonatomic) NSString * controlKeyBackgroundName;                                       //@synthesize controlKeyBackgroundName=_controlKeyBackgroundName - In the implementation block
@property (assign,nonatomic) NSString * activatedKeyplaneSwitchControlKeyBackgroundName;                //@synthesize activatedKeyplaneSwitchControlKeyBackgroundName=_activatedKeyplaneSwitchControlKeyBackgroundName - In the implementation block
@property (assign,nonatomic) BOOL isFloating;                                                           //@synthesize isFloating=_isFloating - In the implementation block
@property (nonatomic,readonly) BOOL whiteText; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) long long blurEffectStyle; 
@property (nonatomic,readonly) _UIButtonBarButtonVisualProvider * buttonBarVisualProvider;              //@synthesize buttonBarVisualProvider=_buttonBarVisualProvider - In the implementation block
+(long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2 ;
+(id)darkConfig;
+(id)configForAppearance:(long long)arg1 inputMode:(id)arg2 ;
+(id)defaultConfig;
+(id)defaultEmojiConfig;
+(id)lowQualityDarkConfig;
-(void)setForceQuality:(long long)arg1 ;
-(void)setIsFloating:(BOOL)arg1 ;
-(BOOL)isFloating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)keycapOpacity;
-(double)lightKeycapOpacity;
-(BOOL)whiteText;
-(_UIButtonBarButtonVisualProvider *)buttonBarVisualProvider;
-(long long)forceQuality;
-(NSString *)controlKeyBackgroundName;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurSaturation;
-(void)setLightKeycapOpacity:(double)arg1 ;
-(void)setKeycapOpacity:(double)arg1 ;
-(double)blurRadius;
-(BOOL)lightKeyboard;
-(void)setActivatedKeyplaneSwitchControlKeyBackgroundName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)blurEffectStyle;
-(void)setLightKeyboard:(BOOL)arg1 ;
-(NSString *)activatedKeyplaneSwitchControlKeyBackgroundName;
-(void)setControlKeyBackgroundName:(NSString *)arg1 ;
-(long long)backdropStyle;
-(void)setBlurSaturation:(double)arg1 ;
-(id)description;
@end

