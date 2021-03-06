/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@protocol PXZoomAnimationObserverCoordinatorDelegate;
@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator {

	SCD_Struct_PX59 _delegateRespondsTo;
	id<PXZoomAnimationObserverCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXZoomAnimationObserverCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PXZoomAnimationObserverCoordinatorDelegate>)arg1 ;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
-(id<PXZoomAnimationObserverCoordinatorDelegate>)delegate;
@end

