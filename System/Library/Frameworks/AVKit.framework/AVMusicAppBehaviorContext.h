/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVBehaviorContextInternal.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext.h>
#import <AVKit/AVMetricsCollectionBehaviorContext.h>
#import <AVKit/AVBehaviorContext.h>

@class AVPlayerViewController, AVMusicAppBehavior, NSNumber, AVObservationController, AVPlayerController, NSString;

@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVMetricsCollectionBehaviorContext, AVBehaviorContext> {

	BOOL _showsSkipItemButtons;
	BOOL _skipToPreviousItemButtonEnabled;
	BOOL _skipToNextItemButtonEnabled;
	BOOL _scrubbing;
	AVPlayerViewController* _playerViewController;
	AVMusicAppBehavior* _behavior;
	NSNumber* _seekTargetTime;
	AVObservationController* _observationController;
	AVPlayerController* _playerController;

}

@property (assign,nonatomic,__weak) AVMusicAppBehavior * behavior;                                                       //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                          //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                      //@synthesize playerController=_playerController - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                          //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) NSNumber * seekTargetTime;                                                                  //@synthesize seekTargetTime=_seekTargetTime - In the implementation block
@property (assign,nonatomic) BOOL showsSkipItemButtons;                                                                  //@synthesize showsSkipItemButtons=_showsSkipItemButtons - In the implementation block
@property (assign,getter=isSkipToPreviousItemButtonEnabled,nonatomic) BOOL skipToPreviousItemButtonEnabled;              //@synthesize skipToPreviousItemButtonEnabled=_skipToPreviousItemButtonEnabled - In the implementation block
@property (assign,getter=isSkipToNextItemButtonEnabled,nonatomic) BOOL skipToNextItemButtonEnabled;                      //@synthesize skipToNextItemButtonEnabled=_skipToNextItemButtonEnabled - In the implementation block
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                                     //@synthesize playerViewController=_playerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVMusicAppBehavior *)behavior;
-(BOOL)isScrubbing;
-(AVObservationController *)observationController;
-(void)setBehavior:(AVMusicAppBehavior *)arg1 ;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(AVPlayerViewController *)playerViewController;
-(AVPlayerController *)playerController;
-(NSNumber *)seekTargetTime;
-(void)playerViewController:(id)arg1 didCollectMetricsEvent:(long long)arg2 ;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(BOOL)showsSkipItemButtons;
-(void)setSkipToNextItemButtonEnabled:(BOOL)arg1 ;
-(void)setSkipToPreviousItemButtonEnabled:(BOOL)arg1 ;
-(void)setShowsSkipItemButtons:(BOOL)arg1 ;
-(void)_updateSkipItemButtonsEnabled;
-(void)_updatePlaybackControlsInclusion;
-(BOOL)isSkipToPreviousItemButtonEnabled;
-(BOOL)isSkipToNextItemButtonEnabled;
-(void)setSeekTargetTime:(NSNumber *)arg1 ;
@end

