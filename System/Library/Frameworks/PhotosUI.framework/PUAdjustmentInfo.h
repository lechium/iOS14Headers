/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PUAdjustmentCustomBehavior;
@class NSString;

@interface PUAdjustmentInfo : NSObject {

	BOOL _enabled;
	NSString* _localizedName;
	NSString* _localizedSectionName;
	NSString* _iconName;
	double _defaultLevel;
	double _identityLevel;
	double _minimumLevel;
	double _maximumLevel;
	double _baseLevel;
	double _currentLevel;
	double _lastAdjustedLevel;
	NSString* _identifier;
	NSString* _adjustmentKey;
	NSString* _settingKey;
	id<PUAdjustmentCustomBehavior> _customSettingDelegate;
	NSString* _attributeKey;

}

@property (nonatomic,retain) NSString * localizedName;                                          //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * localizedSectionName;                                   //@synthesize localizedSectionName=_localizedSectionName - In the implementation block
@property (nonatomic,retain) NSString * iconName;                                               //@synthesize iconName=_iconName - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double defaultLevel;                                               //@synthesize defaultLevel=_defaultLevel - In the implementation block
@property (assign,nonatomic) double identityLevel;                                              //@synthesize identityLevel=_identityLevel - In the implementation block
@property (assign,nonatomic) double minimumLevel;                                               //@synthesize minimumLevel=_minimumLevel - In the implementation block
@property (assign,nonatomic) double maximumLevel;                                               //@synthesize maximumLevel=_maximumLevel - In the implementation block
@property (assign,nonatomic) double baseLevel;                                                  //@synthesize baseLevel=_baseLevel - In the implementation block
@property (assign,nonatomic) double currentLevel;                                               //@synthesize currentLevel=_currentLevel - In the implementation block
@property (assign,nonatomic) double lastAdjustedLevel;                                          //@synthesize lastAdjustedLevel=_lastAdjustedLevel - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * adjustmentKey;                                          //@synthesize adjustmentKey=_adjustmentKey - In the implementation block
@property (nonatomic,retain) NSString * settingKey;                                             //@synthesize settingKey=_settingKey - In the implementation block
@property (nonatomic,retain) NSString * attributeKey;                                           //@synthesize attributeKey=_attributeKey - In the implementation block
@property (nonatomic,retain) id<PUAdjustmentCustomBehavior> customSettingDelegate;              //@synthesize customSettingDelegate=_customSettingDelegate - In the implementation block
@property (nonatomic,readonly) double normalizedCurrentLevel; 
@property (nonatomic,readonly) double normalizedDefaultLevel; 
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)identifier;
-(double)baseLevel;
-(NSString *)settingKey;
-(NSString *)attributeKey;
-(void)setAttributeKey:(NSString *)arg1 ;
-(double)normalizedCurrentLevel;
-(double)normalizedDefaultLevel;
-(void)setCurrentLevel:(double)arg1 ;
-(void)setLastAdjustedLevel:(double)arg1 ;
-(NSString *)localizedSectionName;
-(void)setLocalizedSectionName:(NSString *)arg1 ;
-(double)defaultLevel;
-(void)setDefaultLevel:(double)arg1 ;
-(double)identityLevel;
-(void)setIdentityLevel:(double)arg1 ;
-(double)minimumLevel;
-(void)setMinimumLevel:(double)arg1 ;
-(double)maximumLevel;
-(void)setMaximumLevel:(double)arg1 ;
-(void)setBaseLevel:(double)arg1 ;
-(double)lastAdjustedLevel;
-(NSString *)adjustmentKey;
-(void)setAdjustmentKey:(NSString *)arg1 ;
-(void)setSettingKey:(NSString *)arg1 ;
-(id<PUAdjustmentCustomBehavior>)customSettingDelegate;
-(void)setCustomSettingDelegate:(id<PUAdjustmentCustomBehavior>)arg1 ;
-(void)setIconName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)localizedName;
-(BOOL)enabled;
-(id)copy;
-(NSString *)iconName;
-(void)setEnabled:(BOOL)arg1 ;
-(id)description;
-(double)currentLevel;
@end

