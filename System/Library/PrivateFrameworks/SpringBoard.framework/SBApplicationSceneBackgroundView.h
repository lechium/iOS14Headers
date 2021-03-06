/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBApplicationSceneBackgroundView <NSObject>
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long wallpaperStyle; 
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@optional
-(void)setTransformOptions:(unsigned long long)arg1;
-(BOOL)isFullscreen;
-(unsigned long long)transformOptions;
-(void)setWallpaperStyle:(long long)arg1;
-(long long)wallpaperStyle;
-(void)setNeedsClassicModeBackground:(BOOL)arg1;
-(BOOL)needsClassicModeBackground;
-(void)setShouldUseBrightMaterial:(BOOL)arg1;
-(void)setFullscreen:(BOOL)arg1;
-(BOOL)shouldUseBrightMaterial;

@end

