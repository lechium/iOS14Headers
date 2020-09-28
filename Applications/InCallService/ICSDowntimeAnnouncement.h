//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ICSCallAnnouncement.h"

@class VSSpeechRequest, VSSpeechSynthesizer;

@interface ICSDowntimeAnnouncement : ICSCallAnnouncement
{
    VSSpeechRequest *_speechRequest;	// 8 = 0x8
    VSSpeechSynthesizer *_speechSynthesizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003d15c
@property(retain, nonatomic) VSSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(retain, nonatomic) VSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
- (id)text;	// IMP=0x000000010003d0b0
- (void)stop;	// IMP=0x000000010003d064
- (void)start;	// IMP=0x000000010003ce0c

@end
