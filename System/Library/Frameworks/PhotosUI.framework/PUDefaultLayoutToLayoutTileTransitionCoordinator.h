/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@protocol PUTilingCoordinateSystem;
@class PUTilingLayout, PUAssetReference, PUTilingLayoutTransitionContext;

@interface PUDefaultLayoutToLayoutTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {

	BOOL __isZoomingIn;
	BOOL __needsUpdateZoomingIn;
	PUTilingLayout* _fromLayout;
	PUTilingLayout* _toLayout;
	PUAssetReference* _anchorAssetReference;
	PUTilingLayoutTransitionContext* _context;
	id<PUTilingCoordinateSystem> _fixedCoordinateSystem;

}

@property (assign,setter=_setZoomingIn:,nonatomic) BOOL _isZoomingIn;                                  //@synthesize _isZoomingIn=__isZoomingIn - In the implementation block
@property (assign,setter=_setNeedsUpdateZoomingIn:,nonatomic) BOOL _needsUpdateZoomingIn;              //@synthesize _needsUpdateZoomingIn=__needsUpdateZoomingIn - In the implementation block
@property (nonatomic,retain) PUTilingLayout * fromLayout;                                              //@synthesize fromLayout=_fromLayout - In the implementation block
@property (nonatomic,retain) PUTilingLayout * toLayout;                                                //@synthesize toLayout=_toLayout - In the implementation block
@property (nonatomic,retain) PUAssetReference * anchorAssetReference;                                  //@synthesize anchorAssetReference=_anchorAssetReference - In the implementation block
@property (nonatomic,retain) PUTilingLayoutTransitionContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<PUTilingCoordinateSystem> fixedCoordinateSystem;                       //@synthesize fixedCoordinateSystem=_fixedCoordinateSystem - In the implementation block
-(void)setFromLayout:(PUTilingLayout *)arg1 ;
-(PUTilingLayout *)fromLayout;
-(void)setToLayout:(PUTilingLayout *)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
-(void)setFixedCoordinateSystem:(id<PUTilingCoordinateSystem>)arg1 ;
-(void)setContext:(PUTilingLayoutTransitionContext *)arg1 ;
-(PUAssetReference *)anchorAssetReference;
-(PUTilingLayoutTransitionContext *)context;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(void)setAnchorAssetReference:(PUAssetReference *)arg1 ;
-(PUTilingLayout *)toLayout;
-(id<PUTilingCoordinateSystem>)fixedCoordinateSystem;
-(id)description;
-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(BOOL)_isCenterTileLayoutInfo:(id)arg1 ;
-(id)_centerTileLayoutInfoWithDefaultDisappearance:(id)arg1 layoutWhereCenterTileExists:(id)arg2 layoutWhereCenterTileDisappeared:(id)arg3 ;
-(BOOL)_isZoomingIn;
-(void)_invalidateIsZoomingIn;
-(void)_updateIsZoomingInIfNeeded;
-(long long)_zoomLevelForLayout:(id)arg1 ;
-(void)_setZoomingIn:(BOOL)arg1 ;
-(BOOL)_needsUpdateZoomingIn;
-(void)_setNeedsUpdateZoomingIn:(BOOL)arg1 ;
@end
