/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPictureInPicturePlayerLayerView.h>

@class AVSampleBufferDisplayLayer, AVObservationController, AVSampleBufferDisplayLayerPlayerController, AVPictureInPictureIndicatorLayer, AVPictureInPictureSampleBufferDisplayLayerHostView, CALayerHost;

@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView {

	BOOL _PIPModeEnabled;
	unsigned _sourceContextId;
	AVSampleBufferDisplayLayer* _sourceLayer;
	AVObservationController* _observationController;
	AVSampleBufferDisplayLayerPlayerController* _playerController;
	AVPictureInPictureIndicatorLayer* _placeholderLayer;
	AVPictureInPictureSampleBufferDisplayLayerHostView* _sbdlHostView;
	CALayerHost* _sourceLayerHost;
	CGSize _lastKnownRenderSize;
	CGSize _imageQueueSize;

}

@property (nonatomic,retain) AVObservationController * observationController;                                //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVSampleBufferDisplayLayerPlayerController * playerController;                  //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,retain) AVPictureInPictureIndicatorLayer * placeholderLayer;                            //@synthesize placeholderLayer=_placeholderLayer - In the implementation block
@property (nonatomic,retain) AVPictureInPictureSampleBufferDisplayLayerHostView * sbdlHostView;              //@synthesize sbdlHostView=_sbdlHostView - In the implementation block
@property (assign,nonatomic,__weak) CALayerHost * sourceLayerHost;                                           //@synthesize sourceLayerHost=_sourceLayerHost - In the implementation block
@property (assign,nonatomic) unsigned sourceContextId;                                                       //@synthesize sourceContextId=_sourceContextId - In the implementation block
@property (assign,nonatomic) CGSize lastKnownRenderSize;                                                     //@synthesize lastKnownRenderSize=_lastKnownRenderSize - In the implementation block
@property (assign,nonatomic) CGSize imageQueueSize;                                                          //@synthesize imageQueueSize=_imageQueueSize - In the implementation block
@property (nonatomic,readonly) AVSampleBufferDisplayLayer * sourceLayer;                                     //@synthesize sourceLayer=_sourceLayer - In the implementation block
@property (assign,getter=isPIPModeEnabled,nonatomic) BOOL PIPModeEnabled;                                    //@synthesize PIPModeEnabled=_PIPModeEnabled - In the implementation block
-(void)_updateGeometry;
-(AVSampleBufferDisplayLayer *)sourceLayer;
-(unsigned)sourceContextId;
-(AVObservationController *)observationController;
-(void)setPlayerController:(AVSampleBufferDisplayLayerPlayerController *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)imageQueueSize;
-(void)setImageQueueSize:(CGSize)arg1 ;
-(AVSampleBufferDisplayLayerPlayerController *)playerController;
-(BOOL)isPIPModeEnabled;
-(void)setPIPModeEnabled:(BOOL)arg1 ;
-(id)initWithSourceLayer:(id)arg1 playerController:(id)arg2 ;
-(void)setLastKnownRenderSize:(CGSize)arg1 ;
-(id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
-(AVPictureInPictureIndicatorLayer *)placeholderLayer;
-(void)setPlaceholderLayer:(AVPictureInPictureIndicatorLayer *)arg1 ;
-(AVPictureInPictureSampleBufferDisplayLayerHostView *)sbdlHostView;
-(void)setSbdlHostView:(AVPictureInPictureSampleBufferDisplayLayerHostView *)arg1 ;
-(CALayerHost *)sourceLayerHost;
-(void)setSourceLayerHost:(CALayerHost *)arg1 ;
-(CGSize)lastKnownRenderSize;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
@end

