/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXPreferencesObserver.h>

@class PXImageModulationSettings, NSHashTable, PXRequestedEDRHeadroomFactorFilter, CAContext, UIViewController, NSString;

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXSettingsKeyObserver, PXPreferencesObserver> {

	struct {
		BOOL enabled;
		BOOL lowPowerModeEnabled;
		BOOL active;
		BOOL HDRFocus;
		BOOL imageModulationIntensity;
		BOOL requestedEDRHeadroomFactor;
		BOOL finalRequestedEDRHeadroomFactor;
		BOOL desiredDynamicRange;
		BOOL imageLayerModulators;
		BOOL currentScreenSupportsHDR;
	}  _needsUpdateFlags;
	double _lastRequestedEDRHeadroomChangeTime;
	BOOL _lowPowerModeEnabled;
	BOOL _applicationActive;
	BOOL _mainScreen;
	BOOL _enabled;
	BOOL _active;
	BOOL _currentScreenSupportsHDR;
	PXImageModulationSettings* _settings;
	NSHashTable* _imageLayerModulators;
	PXRequestedEDRHeadroomFactorFilter* _requestedEDRHeadroomFactorFilter;
	long long _requestedEDRHeadroomSignpost;
	CAContext* _coreAnimationContext;
	UIViewController* _rootViewController;
	double _HDRFocus;
	double _imageModulationIntensity;
	double _requestedEDRHeadroomFactor;

}

@property (nonatomic,readonly) PXImageModulationSettings * settings;                                               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSHashTable * imageLayerModulators;                                                 //@synthesize imageLayerModulators=_imageLayerModulators - In the implementation block
@property (nonatomic,readonly) PXRequestedEDRHeadroomFactorFilter * requestedEDRHeadroomFactorFilter;              //@synthesize requestedEDRHeadroomFactorFilter=_requestedEDRHeadroomFactorFilter - In the implementation block
@property (assign,nonatomic) long long requestedEDRHeadroomSignpost;                                               //@synthesize requestedEDRHeadroomSignpost=_requestedEDRHeadroomSignpost - In the implementation block
@property (nonatomic,retain) CAContext * coreAnimationContext;                                                     //@synthesize coreAnimationContext=_coreAnimationContext - In the implementation block
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled;                                //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
@property (assign,getter=isApplicationActive,nonatomic) BOOL applicationActive;                                    //@synthesize applicationActive=_applicationActive - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * rootViewController;                                       //@synthesize rootViewController=_rootViewController - In the implementation block
@property (getter=isMainScreen,nonatomic,readonly) BOOL mainScreen;                                                //@synthesize mainScreen=_mainScreen - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL currentScreenSupportsHDR;                                                      //@synthesize currentScreenSupportsHDR=_currentScreenSupportsHDR - In the implementation block
@property (nonatomic,readonly) double HDRFocus;                                                                    //@synthesize HDRFocus=_HDRFocus - In the implementation block
@property (nonatomic,readonly) double imageModulationIntensity;                                                    //@synthesize imageModulationIntensity=_imageModulationIntensity - In the implementation block
@property (nonatomic,readonly) double requestedEDRHeadroomFactor;                                                  //@synthesize requestedEDRHeadroomFactor=_requestedEDRHeadroomFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_PX99)optionsForAsset:(id)arg1 ;
+(double)_hdrGainForAsset:(id)arg1 ;
+(long long)_contentFormatForAsset:(id)arg1 ;
+(double)HDRValueForAsset:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_didStartRequestingEDRHeadroomFactor:(double)arg1 ;
-(void)checkInLivePhotoViewModulator:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)_updateIfNeeded;
-(void)didPerformChanges;
-(void)_updateHDRFocusIfNeeded;
-(UIViewController *)rootViewController;
-(void)_invalidateActive;
-(void)setRequestedEDRHeadroomSignpost:(long long)arg1 ;
-(void)_invalidateEnabled;
-(void)_invalidateRequestedEDRHeadroomFactor;
-(void)_updateImageLayerModulatorsIfNeeded;
-(void)_setNeedsUpdate;
-(void)_invalidateImageModulationIntensity;
-(void)_updateCoreAnimationContext;
-(void)_invalidateDesiredDynamicRange;
-(BOOL)isEnabled;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHDRFocus:(double)arg1 ;
-(id)mutableChangeObject;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(NSHashTable *)imageLayerModulators;
-(BOOL)currentScreenSupportsHDR;
-(void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
-(void)_applicationDidResignActive:(id)arg1 ;
-(BOOL)isActive;
-(CAContext *)coreAnimationContext;
-(double)requestedEDRHeadroomFactor;
-(void)_didEndRequestingEDRHeadroomFactor:(double)arg1 ;
-(void)_invalidateLowPowerModeEnabled;
-(id)init;
-(void)setCoreAnimationContext:(CAContext *)arg1 ;
-(BOOL)isMainScreen;
-(void)_invalidateImageLayerModulators;
-(PXImageModulationSettings *)settings;
-(BOOL)isLowPowerModeEnabled;
-(void)preferencesDidChange;
-(id)checkoutImageLayerModulatorWithOptions:(SCD_Struct_PX99)arg1 ;
-(void)setNeedsImageModulationIntensityUpdate;
-(void)setCurrentScreenSupportsHDR:(BOOL)arg1 ;
-(void)setNeedsHDRFocusUpdate;
-(double)HDRFocus;
-(void)_updateEnabledIfNeeded;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateImageModulationIntensityIfNeeded;
-(PXRequestedEDRHeadroomFactorFilter *)requestedEDRHeadroomFactorFilter;
-(void)_invalidateFinalRequestedEDRHeadroomFactor;
-(void)_updateImageLayerModulator:(id)arg1 ;
-(void)setApplicationActive:(BOOL)arg1 ;
-(void)_updateDesiredDynamicRangeIfNeeded;
-(id)checkoutLivePhotoViewModulatorWithOptions:(SCD_Struct_PX99)arg1 ;
-(void)_updateLowPowerModeEnabledIfNeeded;
-(void)setRequestedEDRHeadroomFactor:(double)arg1 ;
-(double)imageModulationIntensity;
-(BOOL)isApplicationActive;
-(long long)requestedEDRHeadroomSignpost;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_updateCurrentScreenSupportsHDRIfNeeded;
-(void)_invalidateCurrentScreenSupportsHDR;
-(void)_updateActiveIfNeeded;
-(id)_checkoutImageLayerModulatorWithOptions:(SCD_Struct_PX99)arg1 contentType:(long long)arg2 ;
-(void)_invalidateHDRFocus;
-(void)checkInImageLayerModulator:(id)arg1 ;
-(void)_updateRequestedEDRHeadroomFactorIfNeeded;
-(void)setImageModulationIntensity:(double)arg1 ;
-(id)initWithRootViewController:(id)arg1 mainScreen:(BOOL)arg2 ;
-(void)_processInfoPowerStateDidChange:(id)arg1 ;
-(BOOL)_needsUpdate;
@end

