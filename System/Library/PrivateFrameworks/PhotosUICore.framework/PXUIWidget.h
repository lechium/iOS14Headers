/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXOneUpPresentation;


@protocol PXUIWidget <PXWidget>
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation; 
@property (nonatomic,readonly) BOOL cursorInteractionEnabled; 
@optional
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2;
-(void)commitPreviewViewController:(id)arg1;
-(void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2;
-(void)environmentDidUpdateFocusInContext:(id)arg1;
-(id)regionOfInterestForContext:(id)arg1;
-(void)preloadWithSourceRegionOfInterest:(id)arg1 forContext:(id)arg2;
-(id)zoomAnimationCoordinatorForContext:(id)arg1;
-(BOOL)containsPoint:(CGPoint)arg1 forCoordinateSpace:(id)arg2;
-(id)imageViewBasicTileForPreviewingAtPoint:(CGPoint)arg1;
-(PXOneUpPresentation *)oneUpPresentation;
-(id)bestCursorTileForLiftingAtPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(void)setOneUpPresentation:(id)arg1;
-(BOOL)cursorInteractionEnabled;
-(void)prepareForInteractiveTransition:(id)arg1;

@end
