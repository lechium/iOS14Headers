//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHRingtoneController;

@interface PHAudioInterruptionController : NSObject
{
    PHRingtoneController *_ringtoneController;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010000614c
- (void).cxx_destruct;	// IMP=0x0000000100039e5c
@property(readonly, nonatomic) PHRingtoneController *ringtoneController; // @synthesize ringtoneController=_ringtoneController;
- (id)bundleIdentifierForCall:(id)arg1;	// IMP=0x0000000100039d54
- (id)handlesForCall:(id)arg1;	// IMP=0x000000010003992c
- (void)_playDowntimeStartingAnnouncementForCallIfNecessary;	// IMP=0x000000010003952c
- (void)_playAnnouncementForIncomingCallIfNecessary;	// IMP=0x00000001000391ec
- (void)_callShouldSuppressRingtoneChanged:(id)arg1;	// IMP=0x00000001000390a4
- (void)_updateAudioInterruptionsForCall:(id)arg1;	// IMP=0x00000001000069cc
- (void)handleCommunicationPolicyChangedNotification;	// IMP=0x0000000100039098
- (void)_callStatusChanged:(id)arg1;	// IMP=0x000000010000697c
- (void)dealloc;	// IMP=0x0000000100039020
- (id)init;	// IMP=0x00000001000061b8

@end

