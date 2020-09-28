/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@protocol CKMessageEntryRecordedAudioViewDelegate;
@class CKAudioMediaObject, UIButton, UIVisualEffectView, UIImageView, CKAudioController, UILabel, UIImage, NSString;

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate> {

	CKAudioMediaObject* _audioMediaObject;
	UIButton* _playPauseDeleteButton;
	id<CKMessageEntryRecordedAudioViewDelegate> _delegate;
	UIVisualEffectView* _blurView;
	UIImageView* _balloonImageView;
	CKAudioController* _audioController;
	UILabel* _timeLabel;
	UIImage* _waveformImage;
	UIImageView* _waveformImageView;
	double _time;
	NSString* _timeFormat;

}

@property (nonatomic,retain) UIButton * playPauseDeleteButton;                                         //@synthesize playPauseDeleteButton=_playPauseDeleteButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                            //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * balloonImageView;                                           //@synthesize balloonImageView=_balloonImageView - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                                      //@synthesize audioController=_audioController - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                      //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImage * waveformImage;                                                  //@synthesize waveformImage=_waveformImage - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;                                          //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (assign,nonatomic) double time;                                                              //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * timeFormat;                                                      //@synthesize timeFormat=_timeFormat - In the implementation block
@property (nonatomic,retain) CKAudioMediaObject * audioMediaObject;                                    //@synthesize audioMediaObject=_audioMediaObject - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic,__weak) id<CKMessageEntryRecordedAudioViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(UILabel *)timeLabel;
-(void)play;
-(BOOL)isPlaying;
-(double)time;
-(void)updateTimeString;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(void)pause;
-(void)setTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateProgress;
-(NSString *)timeFormat;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<CKMessageEntryRecordedAudioViewDelegate>)arg1 ;
-(CKAudioController *)audioController;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(id<CKMessageEntryRecordedAudioViewDelegate>)delegate;
-(void)setTimeFormat:(NSString *)arg1 ;
-(void)setAudioMediaObject:(CKAudioMediaObject *)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(void)audioControllerPlayingDidChange:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(UIImageView *)balloonImageView;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(UIImageView *)waveformImageView;
-(CKAudioMediaObject *)audioMediaObject;
-(UIImage *)waveformImage;
-(void)updatePlayPauseDeleteButton;
-(void)handlePlayPauseDelete:(id)arg1 ;
-(void)setWaveformImage:(UIImage *)arg1 ;
-(UIButton *)playPauseDeleteButton;
-(void)setPlayPauseDeleteButton:(UIButton *)arg1 ;
@end
