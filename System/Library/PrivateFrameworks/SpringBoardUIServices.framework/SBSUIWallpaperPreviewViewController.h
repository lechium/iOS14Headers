/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewDelegate.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewControllerDelegate;
@class _UILegibilitySettings, NSTimer, SBFWallpaperConfigurationManager, SBFWallpaperConfiguration, UIImage, NSDictionary, NSString, AVURLAsset, SBFWallpaperOptions, SBSUIProgressHUD, _SBSUIOrientedImageView;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewDelegate, SBFLegibilitySettingsProvider> {

	NSTimer* _dateTimer;
	SBFWallpaperConfigurationManager* _wallpaperConfigurationManager;
	SBFWallpaperConfiguration* _initialConfiguration;
	UIImage* _wallpaperImage;
	NSDictionary* _wallpaperImageDict;
	NSDictionary* _proceduralWallpaper;
	NSDictionary* _proceduralWallpaperOptions;
	BOOL _allowScrolling;
	long long _variant;
	NSString* _name;
	BOOL _colorSamplingEnabled;
	AVURLAsset* _video;
	NSDictionary* _videoDict;
	double _stillTimeInVideo;
	SBFWallpaperOptions* _options;
	NSDictionary* _optionsDict;
	BOOL _enableButtons;
	BOOL _disableContents;
	BOOL _disableParallax;
	SBSUIProgressHUD* _hud;
	_SBSUIOrientedImageView* _homeScreenPreviewView;
	BOOL _motionEnabled;
	BOOL _irisEnabled;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;
	id<SBSUIWallpaperPreviewViewControllerDelegate> _previewDelegate;
	double _zoomScale;
	double _parallaxFactor;
	SBFWallpaperConfiguration* _wallpaperConfiguration;
	CGRect _cropRect;

}

@property (nonatomic,copy) SBFWallpaperConfiguration * wallpaperConfiguration;                                    //@synthesize wallpaperConfiguration=_wallpaperConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<SBSUIWallpaperPreviewViewControllerDelegate> previewDelegate;              //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (readonly) UIImage * wallpaperImage;                                                                    //@synthesize wallpaperImage=_wallpaperImage - In the implementation block
@property (nonatomic,copy,readonly) SBFWallpaperOptions * wallpaperOptions; 
@property (assign,nonatomic) BOOL motionEnabled;                                                                  //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (assign,nonatomic) BOOL irisEnabled;                                                                    //@synthesize irisEnabled=_irisEnabled - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                                     //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) double zoomScale;                                                                    //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                                                               //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(UIImage *)wallpaperImage;
-(id)wallpaperConfigurationManager;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(void)setParallaxFactor:(double)arg1 ;
-(double)parallaxFactor;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)cropRect;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(double)zoomScale;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_dateView;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)_parallaxFactor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)setPreviewDelegate:(id<SBSUIWallpaperPreviewViewControllerDelegate>)arg1 ;
-(void)setWallpaperForLocations:(long long)arg1 ;
-(id)initWithImage:(id)arg1 video:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(BOOL)arg5 enableButtons:(BOOL)arg6 disableContents:(BOOL)arg7 ;
-(SBFWallpaperOptions *)wallpaperOptions;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(long long)_wallpaperType;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_previewView;
-(id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4 ;
-(id)initWithScrollableImage:(id)arg1 video:(id)arg2 time:(double)arg3 ;
-(id)_wallpaperView;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 ;
-(id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(BOOL)arg5 enableButtons:(BOOL)arg6 disableContents:(BOOL)arg7 disableParallax:(BOOL)arg8 ;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)_applyHomeScreenPreview;
-(void)_enableIrisOrParallaxIfEligible;
-(void)_updateDateView;
-(void)_stopDateTimer;
-(id)_wallpaperTypeDescription;
-(BOOL)motionEnabled;
-(void)setWallpaperForLocations:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setImageWallpaperForLocations:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setProceduralWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_displaySettingWallpaperHUD;
-(BOOL)irisEnabled;
-(void)_setWallpaperImagesOnMainThread:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setImageWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_wallpaperViewIfLoaded;
-(void)setMotionEnabled:(BOOL)arg1 updateParallaxOnWallpaperView:(BOOL)arg2 ;
-(void)setIrisEnabled:(BOOL)arg1 ;
-(id<SBSUIWallpaperPreviewViewControllerDelegate>)previewDelegate;
-(id)_proceduralWallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3 ;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 image:(id)arg2 video:(id)arg3 videoURL:(id)arg4 stillTimeInVideo:(double)arg5 supportsCropping:(BOOL)arg6 variant:(long long)arg7 needsWallpaperDimming:(BOOL)arg8 ;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 options:(id)arg3 ;
-(void)setWallpaperConfiguration:(SBFWallpaperConfiguration *)arg1 ;
-(id)_colorWallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3 ;
-(id)_previewViewIfLoaded;
-(void)_startDateTimer;
-(void)userDidTapOnIrisButton:(id)arg1 ;
-(void)userDidTapOnParallaxButton:(id)arg1 ;
-(void)userDidTapOnCancelButton:(id)arg1 ;
-(void)userDidTapOnSetButton:(id)arg1 ;
-(id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 ;
-(id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 variant:(long long)arg3 disableSegmentedControl:(BOOL)arg4 enableButtons:(BOOL)arg5 disableContents:(BOOL)arg6 ;
-(id)initWithImage:(id)arg1 name:(id)arg2 ;
-(id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(BOOL)arg5 enableButtons:(BOOL)arg6 disableContents:(BOOL)arg7 ;
-(id)initWithScrollableImage:(id)arg1 ;
-(void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3 ;
-(BOOL)colorSamplingEnabled;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(SBFWallpaperConfiguration *)wallpaperConfiguration;
-(id)initWithWallpaperVariant:(long long)arg1 ;
@end

