/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:32 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>

@class AVPlayerViewController, PMTitleSubtitleView, UIView;

@interface PMRotationViewController : UIViewController {

	BOOL _zoomedToFill;
	BOOL _preventRotation;
	AVPlayerViewController* _playerViewController;
	PMTitleSubtitleView* _titleView;
	double _screenHorizontalAspect;
	/*^block*/id _playerDidSwapBlock;
	double _orientationSwitchTime;
	id _proVideoPeriodicCaller;
	UIView* _playerRotationView;
	CGSize _playerSize;
	CGSize _screenSize;

}

@property (assign,nonatomic) BOOL preventRotation;                                       //@synthesize preventRotation=_preventRotation - In the implementation block
@property (assign,nonatomic) CGSize playerSize;                                          //@synthesize playerSize=_playerSize - In the implementation block
@property (assign,nonatomic) CGSize screenSize;                                          //@synthesize screenSize=_screenSize - In the implementation block
@property (assign,nonatomic) double screenHorizontalAspect;                              //@synthesize screenHorizontalAspect=_screenHorizontalAspect - In the implementation block
@property (copy) id playerDidSwapBlock;                                                  //@synthesize playerDidSwapBlock=_playerDidSwapBlock - In the implementation block
@property (assign,nonatomic) double orientationSwitchTime;                               //@synthesize orientationSwitchTime=_orientationSwitchTime - In the implementation block
@property (nonatomic,retain) id proVideoPeriodicCaller;                                  //@synthesize proVideoPeriodicCaller=_proVideoPeriodicCaller - In the implementation block
@property (nonatomic,retain) UIView * playerRotationView;                                //@synthesize playerRotationView=_playerRotationView - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) PMTitleSubtitleView * titleView;                            //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) BOOL zoomedToFill;                                          //@synthesize zoomedToFill=_zoomedToFill - In the implementation block
-(void)setTitleView:(PMTitleSubtitleView *)arg1 ;
-(void)dealloc;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)viewDidLoad;
-(AVPlayerViewController *)playerViewController;
-(PMTitleSubtitleView *)titleView;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)screenSize;
-(id)playerItem;
-(void)setZoomedToFill:(BOOL)arg1 ;
-(void)externalClientMessedWithPlayerItem;
-(void)gentleRebuild;
-(BOOL)zoomedToFill;
-(void)extremeRebuild;
-(void)setPreventRotation:(BOOL)arg1 ;
-(void)mediaServicesReset;
-(void)ImAfraidOfStuckBlur;
-(void)signalCustomCompositorScheduler;
-(void)signalCustomCompositorScheduler:(SCD_Struct_Mi3)arg1 playerRate:(float)arg2 ;
-(BOOL)preventRotation;
-(void)setScreenHorizontalAspect:(double)arg1 ;
-(void)setPlayerRotationView:(UIView *)arg1 ;
-(UIView *)playerRotationView;
-(void)createAVPlayer;
-(void)destroyAVPlayer;
-(id)_snapshotPlayer;
-(SCD_Struct_Mi3)currentPlayerTime;
-(void)setOrientationSwitchTime:(double)arg1 ;
-(void)setPlayerSize:(CGSize)arg1 ;
-(void)refreshCompositionIfNotPlaying;
-(id)playerDidSwapBlock;
-(double)orientationSwitchTime;
-(void)adjustPlayerSizeAndViewTransform:(CGSize)arg1 ;
-(void)setPlayerDidSwapBlock:(id)arg1 ;
-(double)scaleForFullscreen:(CGSize)arg1 ;
-(double)screenHorizontalAspect;
-(id)_snapshotPlayerWithAspect:(double)arg1 ;
-(void)addProVideoTimeObserver;
-(void)removeProVideoTimeObserver;
-(id)proVideoPeriodicCaller;
-(void)setProVideoPeriodicCaller:(id)arg1 ;
-(void)effectRenderedTime:(SCD_Struct_Mi3)arg1 ;
-(CGSize)playerSize;
@end

