/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIVibrancyEffect, NSArray, UIColor, UIImage;

@interface _UIBarBackgroundLayout : NSObject <NSCopying> {

	double _backgroundAlpha;
	double _shadowAlpha;
	double _backgroundHeight1;
	double _backgroundHeight2;
	double _backgroundTransitionProgress;
	long long _interfaceIdiom;
	long long _interfaceStyle;
	BOOL _useExplicitGeometry;
	BOOL _disableTinting;
	BOOL _shadowHidden;
	UIVibrancyEffect* _bg1ShadowEffect;
	UIVibrancyEffect* _bg2ShadowEffect;

}

@property (nonatomic,readonly) double bgInset; 
@property (nonatomic,readonly) BOOL shouldUseExplicitGeometry; 
@property (nonatomic,readonly) double bg1Alpha; 
@property (nonatomic,readonly) NSArray * bg1Effects; 
@property (nonatomic,readonly) UIColor * bg1Color; 
@property (nonatomic,readonly) UIImage * bg1Image; 
@property (nonatomic,readonly) double bg1ImageAlpha; 
@property (nonatomic,readonly) long long bg1ImageMode; 
@property (nonatomic,readonly) BOOL bg1HasShadow; 
@property (nonatomic,readonly) UIColor * bg1ShadowColor; 
@property (nonatomic,readonly) UIImage * bg1ShadowImage; 
@property (nonatomic,readonly) UIVibrancyEffect * bg1ShadowEffect;              //@synthesize bg1ShadowEffect=_bg1ShadowEffect - In the implementation block
@property (nonatomic,readonly) UIColor * bg1ShadowTint; 
@property (nonatomic,readonly) double bg1ShadowAlpha; 
@property (nonatomic,readonly) BOOL bg2Enabled; 
@property (nonatomic,readonly) double bg2Alpha; 
@property (nonatomic,readonly) NSArray * bg2Effects; 
@property (nonatomic,readonly) UIColor * bg2Color; 
@property (nonatomic,readonly) UIImage * bg2Image; 
@property (nonatomic,readonly) long long bg2ImageMode; 
@property (nonatomic,readonly) BOOL bg2HasShadow; 
@property (nonatomic,readonly) UIColor * bg2ShadowColor; 
@property (nonatomic,readonly) UIImage * bg2ShadowImage; 
@property (nonatomic,readonly) UIVibrancyEffect * bg2ShadowEffect;              //@synthesize bg2ShadowEffect=_bg2ShadowEffect - In the implementation block
@property (nonatomic,readonly) UIColor * bg2ShadowTint; 
@property (nonatomic,readonly) double bg2ShadowAlpha; 
@property (assign,nonatomic) long long interfaceIdiom;                          //@synthesize interfaceIdiom=_interfaceIdiom - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                          //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                            //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) BOOL shadowHidden;                                 //@synthesize shadowHidden=_shadowHidden - In the implementation block
@property (assign,nonatomic) BOOL useExplicitGeometry;                          //@synthesize useExplicitGeometry=_useExplicitGeometry - In the implementation block
@property (assign,nonatomic) double backgroundHeight1;                          //@synthesize backgroundHeight1=_backgroundHeight1 - In the implementation block
@property (assign,nonatomic) double backgroundHeight2;                          //@synthesize backgroundHeight2=_backgroundHeight2 - In the implementation block
@property (assign,nonatomic) double backgroundTransitionProgress;               //@synthesize backgroundTransitionProgress=_backgroundTransitionProgress - In the implementation block
@property (nonatomic,readonly) double topInset; 
@property (assign,nonatomic) BOOL disableTinting;                               //@synthesize disableTinting=_disableTinting - In the implementation block
-(void)setInterfaceStyle:(long long)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(UIColor *)bg2Color;
-(NSArray *)bg2Effects;
-(double)bg1ImageAlpha;
-(double)backgroundHeight2;
-(BOOL)bg2HasHeight;
-(UIColor *)bg2ShadowColor;
-(void)setBackgroundTransitionProgress:(double)arg1 ;
-(double)bg1Alpha;
-(double)backgroundTransitionProgress;
-(long long)bg2ImageMode;
-(UIVibrancyEffect *)bg2ShadowEffect;
-(double)topInset;
-(long long)interfaceStyle;
-(BOOL)useExplicitGeometry;
-(long long)bg1ImageMode;
-(double)bgInset;
-(BOOL)shadowHidden;
-(UIColor *)bg1Color;
-(UIVibrancyEffect *)bg1ShadowEffect;
-(double)bg2ShadowAlpha;
-(long long)interfaceIdiom;
-(BOOL)shouldUseExplicitGeometry;
-(BOOL)bg2HasShadow;
-(BOOL)disableTinting;
-(double)bg1ShadowAlpha;
-(UIImage *)bg1Image;
-(void)setInterfaceIdiom:(long long)arg1 ;
-(void)setBackgroundHeight2:(double)arg1 ;
-(NSArray *)bg1Effects;
-(double)shadowAlpha;
-(UIImage *)bg2ShadowImage;
-(double)backgroundHeight1;
-(void)setDisableTinting:(BOOL)arg1 ;
-(UIColor *)bg2ShadowTint;
-(UIColor *)bg1ShadowTint;
-(UIImage *)bg1ShadowImage;
-(UIImage *)bg2Image;
-(BOOL)bg2Enabled;
-(BOOL)bg1HasShadow;
-(void)describeInto:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUseExplicitGeometry:(BOOL)arg1 ;
-(double)bg2Alpha;
-(id)initWithLayout:(id)arg1 ;
-(UIColor *)bg1ShadowColor;
-(id)init;
-(void)setBackgroundAlpha:(double)arg1 ;
-(double)backgroundAlpha;
-(void)setBackgroundHeight1:(double)arg1 ;
-(id)description;
-(void)setShadowHidden:(BOOL)arg1 ;
@end

