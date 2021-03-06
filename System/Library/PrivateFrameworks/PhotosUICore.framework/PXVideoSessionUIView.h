/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXVideoViewDelegate.h>

@protocol PXVideoSessionUIViewDelegate;
@class UIView, PXVideoView, UIImageView, PXVideoSession, UIImage, NSString;

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate> {

	UIView* _videoContainerView;
	PXVideoView* _videoView;
	PXVideoView* _adoptedVideoView;
	PXVideoView* _activeVideoView;
	UIImageView* _placeholderImageView;
	BOOL _placeholderVisible;
	BOOL _allowsEdgeAntialiasing;
	PXVideoSession* _videoSession;
	UIImage* _placeholderImage;
	id<PXVideoSessionUIViewDelegate> _delegate;
	NSString* _videoGravity;
	CGRect _contentsRect;

}

@property (assign,nonatomic) BOOL placeholderVisible;                                       //@synthesize placeholderVisible=_placeholderVisible - In the implementation block
@property (nonatomic,retain) PXVideoSession * videoSession;                                 //@synthesize videoSession=_videoSession - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                    //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) BOOL isVideoLayerReadyForDisplay; 
@property (assign,nonatomic,__weak) id<PXVideoSessionUIViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                                           //@synthesize contentsRect=_contentsRect - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                   //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
@property (nonatomic,copy) NSString * videoGravity;                                         //@synthesize videoGravity=_videoGravity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentsRect:(CGRect)arg1 ;
-(NSString *)videoGravity;
-(CGRect)contentsRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)layoutSubviews;
-(BOOL)allowsEdgeAntialiasing;
-(UIImage *)placeholderImage;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(PXVideoSession *)videoSession;
-(void)_updateEdgeAntialiasing;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)placeholderVisible;
-(void)setPlaceholderVisible:(BOOL)arg1 ;
-(BOOL)isVideoLayerReadyForDisplay;
-(void)setDelegate:(id<PXVideoSessionUIViewDelegate>)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id<PXVideoSessionUIViewDelegate>)delegate;
-(void)_updatePlaceholderVisibility;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(void)_updateVideoViewFrame;
-(void)videoViewReadinessDidChange:(id)arg1 ;
-(id)generateSnapshotImage;
@end

