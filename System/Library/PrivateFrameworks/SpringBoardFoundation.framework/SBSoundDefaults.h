/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isRingerMuted,nonatomic) BOOL ringerMuted; 
@property (nonatomic,retain) NSString * calendarAlarmPath; 
@property (nonatomic,readonly) BOOL vibrateWhenRinging; 
@property (nonatomic,readonly) BOOL vibrateWhenSilent; 
@property (nonatomic,readonly) BOOL playSoundOnDeviceWake; 
@property (nonatomic,readonly) BOOL debugEUVolumeLimit; 
-(void)setVibrateWhenRinging:(BOOL)arg1 ;
-(BOOL)vibrateWhenRinging;
-(void)setRingerMuted:(BOOL)arg1 ;
-(BOOL)isRingerMuted;
-(void)setVibrateWhenSilent:(BOOL)arg1 ;
-(BOOL)vibrateWhenSilent;
-(void)setCalendarAlarmPath:(NSString *)arg1 ;
-(NSString *)calendarAlarmPath;
-(void)setPlaySoundOnDeviceWake:(BOOL)arg1 ;
-(BOOL)playSoundOnDeviceWake;
-(void)setDebugEUVolumeLimit:(BOOL)arg1 ;
-(BOOL)debugEUVolumeLimit;
-(void)_bindAndRegisterDefaults;
@end
