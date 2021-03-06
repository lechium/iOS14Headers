/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@protocol ISVitalitySettings <NSObject>
@required
-(double)playbackRate;
-(double)preDuration;
-(double)maxVitalityDelay;
-(long long)behavior;
-(double)maximumDelayBeforePlayback;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)postDuration;
-(double)minimumPhotoTransitionDuration;

@end


@class ISVitalitySpecificSettings, NSString;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings> {

	BOOL _shouldPreroll;
	BOOL _useLegacyBehavior;
	ISVitalitySpecificSettings* _oneUpSettings;
	ISVitalitySpecificSettings* _shareViewSettings;
	ISVitalitySpecificSettings* _activityViewSettings;
	ISVitalitySpecificSettings* _orbPreviewSettings;

}

@property (assign,nonatomic) BOOL useLegacyBehavior;                                         //@synthesize useLegacyBehavior=_useLegacyBehavior - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * oneUpSettings;                     //@synthesize oneUpSettings=_oneUpSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * shareViewSettings;                 //@synthesize shareViewSettings=_shareViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * activityViewSettings;              //@synthesize activityViewSettings=_activityViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * orbPreviewSettings;                //@synthesize orbPreviewSettings=_orbPreviewSettings - In the implementation block
@property (assign,nonatomic) BOOL shouldPreroll;                                             //@synthesize shouldPreroll=_shouldPreroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(double)playbackRate;
-(void)setDefaultValues;
-(ISVitalitySpecificSettings *)activityViewSettings;
-(double)preDuration;
-(double)maxVitalityDelay;
-(long long)behavior;
-(BOOL)shouldPreroll;
-(double)maximumDelayBeforePlayback;
-(void)setShouldPreroll:(BOOL)arg1 ;
-(id)_defaultSettings;
-(ISVitalitySpecificSettings *)oneUpSettings;
-(double)endTimeOffset;
-(void)setShareViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(void)setOrbPreviewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(void)setUseLegacyBehavior:(BOOL)arg1 ;
-(double)minimumVisibilityFactor;
-(ISVitalitySpecificSettings *)orbPreviewSettings;
-(ISVitalitySpecificSettings *)shareViewSettings;
-(BOOL)useLegacyBehavior;
-(double)postDuration;
-(void)setActivityViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(double)minimumPhotoTransitionDuration;
-(void)setOneUpSettings:(ISVitalitySpecificSettings *)arg1 ;
@end

