/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSIndexPath, PUGridMagnifiedView;

@interface PUGridMagnifiedImageViewController : UIViewController {

	BOOL _canShowFullScreen;
	id _delegate;
	NSIndexPath* _itemIndexPath;
	double _magnifiedYOffset;
	PUGridMagnifiedView* _magnifiedView;
	double _shadowRadius;
	double _shadowOpacity;
	CGPoint _gestureWindLocation;
	CGSize _imageSize;
	CGSize _magnifiedSize;
	CGSize _shadowOffset;
	CGPoint _lastLocation;
	CGRect _itemWindFrame;
	CGRect _trackingWindFrame;
	UIEdgeInsets _magnifiedDragEdgeInsets;

}

@property (nonatomic,retain) PUGridMagnifiedView * magnifiedView;               //@synthesize magnifiedView=_magnifiedView - In the implementation block
@property (assign,nonatomic) CGPoint lastLocation;                              //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint gestureWindLocation;                       //@synthesize gestureWindLocation=_gestureWindLocation - In the implementation block
@property (nonatomic,retain) NSIndexPath * itemIndexPath;                       //@synthesize itemIndexPath=_itemIndexPath - In the implementation block
@property (assign,nonatomic) CGRect itemWindFrame;                              //@synthesize itemWindFrame=_itemWindFrame - In the implementation block
@property (nonatomic,readonly) BOOL canShowFullScreen;                          //@synthesize canShowFullScreen=_canShowFullScreen - In the implementation block
@property (assign,nonatomic) CGRect trackingWindFrame;                          //@synthesize trackingWindFrame=_trackingWindFrame - In the implementation block
@property (assign,nonatomic) double magnifiedYOffset;                           //@synthesize magnifiedYOffset=_magnifiedYOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets magnifiedDragEdgeInsets;              //@synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                  //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) CGSize magnifiedSize;                              //@synthesize magnifiedSize=_magnifiedSize - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowRadius;                               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                              //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(CGSize)shadowOffset;
-(double)shadowOpacity;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(void)setLastLocation:(CGPoint)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(CGPoint)lastLocation;
-(void)setGestureWindLocation:(CGPoint)arg1 ;
-(void)beginMagnificationAnimated:(BOOL)arg1 ;
-(void)continueMagnification;
-(id)installMagnifiedView;
-(void)setupMagnifiedView;
-(void)hideMagnifiedThumbnailWithAnimation:(BOOL)arg1 ;
-(BOOL)gestureInNewLocation;
-(BOOL)isValidMagnifyLocation:(CGPoint)arg1 ;
-(id)imageForMagnifyLocation:(CGPoint)arg1 ;
-(id)imageForIndexPath:(id)arg1 ;
-(CGPoint)gestureWindLocation;
-(CGRect)magnifiedImageWindFrame;
-(NSIndexPath *)itemIndexPath;
-(void)setItemIndexPath:(NSIndexPath *)arg1 ;
-(CGRect)itemWindFrame;
-(void)setItemWindFrame:(CGRect)arg1 ;
-(BOOL)canShowFullScreen;
-(CGRect)trackingWindFrame;
-(void)setTrackingWindFrame:(CGRect)arg1 ;
-(void)setMagnifiedYOffset:(double)arg1 ;
-(PUGridMagnifiedView *)magnifiedView;
-(void)setMagnifiedView:(PUGridMagnifiedView *)arg1 ;
-(void)setMagnifiedDragEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)magnifiedSize;
-(void)setMagnifiedSize:(CGSize)arg1 ;
-(CGSize)imageSize;
-(void)loadView;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)delegate;
-(UIEdgeInsets)magnifiedDragEdgeInsets;
-(void)prepareForRelease;
-(double)magnifiedYOffset;
@end
