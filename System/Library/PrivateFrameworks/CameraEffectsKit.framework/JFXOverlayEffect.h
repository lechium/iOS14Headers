/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXTextEffect.h>
#import <libobjc.A.dylib/JFXTrackedEffectPropertiesDelegate.h>

@class NSString, JFXTrackedEffectProperties, JFXFaceTrackedEffectTransform;

@interface JFXOverlayEffect : JFXTextEffect <JFXTrackedEffectPropertiesDelegate> {

	Ai _isInteractiveEditingCount;
	Ai _isEditingFaceTrackingTransformsCount;
	BOOL _prefersTrackingNotActivateAutomatically;
	NSString* _accessibilityOverlayEffectLabel;
	JFXTrackedEffectProperties* _trackingProps;
	JFXFaceTrackedEffectTransform* _internalFaceTrackingTransform;

}

@property (retain) JFXFaceTrackedEffectTransform * internalFaceTrackingTransform;                //@synthesize internalFaceTrackingTransform=_internalFaceTrackingTransform - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,copy) NSString * accessibilityOverlayEffectLabel;                           //@synthesize accessibilityOverlayEffectLabel=_accessibilityOverlayEffectLabel - In the implementation block
@property (nonatomic,retain) JFXFaceTrackedEffectTransform * faceTrackingTransform; 
@property (nonatomic,readonly) BOOL isEmoji; 
@property (assign,getter=isTextFlipped,nonatomic) BOOL flipText; 
@property (assign,getter=isTailFlipped,nonatomic) BOOL flipTail; 
@property (nonatomic,retain) JFXTrackedEffectProperties * trackingProps;                         //@synthesize trackingProps=_trackingProps - In the implementation block
@property (nonatomic,readonly) BOOL isTracking; 
@property (assign,nonatomic) BOOL prefersTrackingNotActivateAutomatically;                       //@synthesize prefersTrackingNotActivateAutomatically=_prefersTrackingNotActivateAutomatically - In the implementation block
@property (nonatomic,readonly) BOOL isInteractiveEditing; 
@property (nonatomic,readonly) BOOL isEditingFaceTrackingTransforms; 
@property (nonatomic,copy) NSString * dynamicTextString; 
@property (nonatomic,readonly) unsigned long long dynamicTextType; 
+(BOOL)supportsSecureCoding;
+(id)effectIDToImageSequenceIDMap;
+(id)dynamicTextPlaceholderMap;
-(BOOL)isTracking;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)maxCharacters;
-(BOOL)isHidden;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityName;
-(unsigned long long)hash;
-(BOOL)isEmoji;
-(JFXFaceTrackedEffectTransform *)faceTrackingTransform;
-(void)setFaceTrackingTransform:(JFXFaceTrackedEffectTransform *)arg1 ;
-(JFXTrackedEffectProperties *)trackingProps;
-(BOOL)isEditingFaceTrackingTransforms;
-(BOOL)enablePresentationState:(BOOL)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setForceRenderAtPosterFrame:(BOOL)arg1 ;
-(void)trackedEffectPropertiesDidChangeTrackingType:(id)arg1 ;
-(BOOL)JFX_posterFrameIsCachable;
-(BOOL)JFX_shouldEnableDynamicLineSpacingForDiacritics;
-(void)setSingleLineScaleThreshold:(double)arg1 ;
-(void)JFX_setupTrackingProps;
-(double)customPickerRotation;
-(id)customPrimaryFillColor;
-(void)setTrackingProps:(JFXTrackedEffectProperties *)arg1 ;
-(NSString *)accessibilityOverlayEffectLabel;
-(void)setAccessibilityOverlayEffectLabel:(NSString *)arg1 ;
-(BOOL)prefersTrackingNotActivateAutomatically;
-(void)setPrefersTrackingNotActivateAutomatically:(BOOL)arg1 ;
-(id)serializableEffectParameters;
-(BOOL)isAppearanceEqual:(id)arg1 forPurpose:(unsigned long long)arg2 ;
-(id)overlayContentDataSource;
-(CGPoint)hitAreaScale;
-(double)pickerScale;
-(unsigned long long)dynamicTextType;
-(BOOL)isTextFlipped;
-(BOOL)supportsFlippingText;
-(void)JFX_updateInteractiveMode;
-(JFXFaceTrackedEffectTransform *)internalFaceTrackingTransform;
-(void)JFX_applyEffectParametersForFaceTrackingTransform:(id)arg1 ;
-(void)setInternalFaceTrackingTransform:(JFXFaceTrackedEffectTransform *)arg1 ;
-(PVCGPointQuad)cornersAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 relativeTo:(CGRect)arg5 basisOrigin:(int)arg6 ;
-(const CGPathRef)newPathsForHitTestingAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 adjustForMinimumSize:(BOOL)arg5 normalizedMinimumSize:(CGSize)arg6 outExpandedPath:(out const CGPath*)arg7 ;
-(SCD_Struct_JF14)transformAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 relativeTo:(CGRect)arg4 basisOrigin:(int)arg5 ;
-(CGAffineTransform)addTransform:(CGAffineTransform)arg1 withComponentTime:(SCD_Struct_JF3)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 restrictToBounds:(BOOL)arg5 ;
-(CGAffineTransform)addTransform:(CGAffineTransform)arg1 withComponentTime:(SCD_Struct_JF3)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(CGRect)imageFrameAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 relativeTo:(CGRect)arg4 basisOrigin:(int)arg5 ;
-(void)applyScaleToFitFrame:(CGRect)arg1 withComponentTime:(SCD_Struct_JF3)arg2 relativeRect:(CGRect)arg3 ;
-(CGPoint)effectPointToScreenPoint:(CGPoint)arg1 effectToScreenTransform:(SCD_Struct_JF14)arg2 viewSize:(CGSize)arg3 ;
-(double)JFX_adjustedMinimumSizeFromNormalizedMinimumSize:(CGSize)arg1 atTime:(SCD_Struct_JF3)arg2 forcePosterFrame:(BOOL)arg3 relativeTo:(CGRect)arg4 basisOrigin:(int)arg5 ;
-(void)setImageSequencePath:(id)arg1 ;
-(BOOL)JFX_hasPosterFrame;
-(BOOL)isInteractiveEditing;
-(BOOL)hasDynamicText;
-(void)resetDynamicTextString;
-(id)JFX_dynamicTextPlaceHolderText;
-(id)JFX_stringAtIndex:(unsigned long long)arg1 ;
-(void)setFlipText:(BOOL)arg1 ;
-(void)setFlipTail:(BOOL)arg1 ;
-(BOOL)isTailFlipped;
-(BOOL)supportsFlippingTail;
-(void)suspendTracking;
-(void)resumeTracking;
-(CGRect)hitAreaBoundingFrameAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 adjustForMinimumSize:(BOOL)arg4 normalizedMinimumSize:(CGSize)arg5 relativeTo:(CGRect)arg6 basisOrigin:(int)arg7 ;
-(BOOL)objectBounds:(CGRect*)arg1 time:(SCD_Struct_JF3)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(SCD_Struct_JF14)transformAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(void)updateRenderSizeMaintainingAppearance:(CGSize)arg1 withComponentTime:(SCD_Struct_JF3)arg2 ;
-(CGPoint)effectCenterAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 relativeTo:(CGRect)arg4 basisOrigin:(int)arg5 ;
-(BOOL)hitTestPoint:(CGPoint)arg1 atTime:(SCD_Struct_JF3)arg2 forcePosterFrame:(BOOL)arg3 relativeTo:(CGRect)arg4 basisOrigin:(int)arg5 adjustForMinimumSize:(BOOL)arg6 normalizedMinimumSize:(CGSize)arg7 ;
-(CGPoint)closeButtonInset;
-(BOOL)includeDropShadowWhenPositioningCloseButton;
-(void)setImageSequencePathToBundledAssets;
-(BOOL)loopedRangeRenderIsCacheable;
-(void)beginInteractiveEditing;
-(void)endInteractiveEditing;
-(void)beginEditingFaceTrackingTransforms;
-(void)endEditingFaceTrackingTransforms;
-(void)setDynamicTextString:(NSString *)arg1 ;
-(NSString *)dynamicTextString;
-(void)updateDynamicTextWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)wasDynamicTextSet;
@end

