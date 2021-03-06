/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:13 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class SBFParallaxSettings;


@protocol SBIconAccessoryView <SBReusableView>
@property (nonatomic,retain) SBFParallaxSettings * parallaxSettings; 
@property (nonatomic,retain) id<SBIconListLayout> listLayout; 
@optional
-(void)setListLayout:(id)arg1;
-(id<SBIconListLayout>)listLayout;
-(SBFParallaxSettings *)parallaxSettings;
-(void)setParallaxSettings:(id)arg1;

@required
-(CGPoint*)accessoryCenterForIconBounds:(CGRect)arg1;
-(BOOL)displayingAccessory;
-(void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
-(void)setAccessoryBrightness:(double)arg1;
-(void)configureForIcon:(id)arg1 infoProvider:(id)arg2;

@end

