//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UMUserSwitchBlockingTask;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
    UMUserSwitchBlockingTask *_blockingTask;	// 24 = 0x18
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x000000010006f358
- (void).cxx_destruct;	// IMP=0x000000010006fb14
@property(retain, nonatomic) UMUserSwitchBlockingTask *blockingTask; // @synthesize blockingTask=_blockingTask;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x000000010006f988
- (void)_retain;	// IMP=0x000000010006f798
- (void)unpark;	// IMP=0x000000010006f698
- (void)park;	// IMP=0x000000010006f598
- (void)stayAliveThroughHereAtLeast;	// IMP=0x000000010006f594
- (void)dealloc;	// IMP=0x000000010006f4ec
- (id)initForOperation:(id)arg1;	// IMP=0x000000010006f400

@end
