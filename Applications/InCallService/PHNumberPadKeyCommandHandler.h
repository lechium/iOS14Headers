//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHNumberPadKeyCommandHandler : NSObject
{
}

- (long long)numberPadCharacterForString:(id)arg1;	// IMP=0x000000010003a504
- (BOOL)characterForNumberPadCharacter:(long long)arg1;	// IMP=0x000000010003a480
- (void)handleKeyCommand:(id)arg1 receivedCharacterBlock:(CDUnknownBlockType)arg2 receivedSpecialCharacterBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010003a17c
- (id)initWithViewController:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000100039e80
- (id)init;	// IMP=0x0000000100039e68

@end

