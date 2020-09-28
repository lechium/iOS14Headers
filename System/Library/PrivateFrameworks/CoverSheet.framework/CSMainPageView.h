/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSPageViewBase.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class _UILegibilitySettings, CSVibrantWallpaperButton, SBWallpaperEffectView, NSString;

@interface CSMainPageView : CSPageViewBase <CAAnimationDelegate> {

	_UILegibilitySettings* _legibilitySettings;
	BOOL _logoutHugCorner;
	BOOL _fakeWallpaperVisible;
	CSVibrantWallpaperButton* _logoutButtonView;
	SBWallpaperEffectView* _wallpaperEffectView;

}

@property (nonatomic,retain) CSVibrantWallpaperButton * logoutButtonView;              //@synthesize logoutButtonView=_logoutButtonView - In the implementation block
@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) BOOL fakeWallpaperVisible;                                //@synthesize fakeWallpaperVisible=_fakeWallpaperVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)_layoutLogoutButtonView;
-(void)_updateLogoutButtonForLegibilitySettings;
-(BOOL)fakeWallpaperVisible;
-(void)layoutSubviews;
-(void)updateForPresentation:(id)arg1 ;
-(CSVibrantWallpaperButton *)logoutButtonView;
-(id)presentationRegions;
-(void)setFakeWallpaperVisible:(BOOL)arg1 ;
-(void)_layoutWallpaperEffectView;
-(UIEdgeInsets)_logoutButtonInsets;
-(void)setLogoutButtonView:(CSVibrantWallpaperButton *)arg1 ;
@end
