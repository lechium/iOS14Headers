//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FMDDispatchTimer : NSObject
{
    double _leewayTimeInterval;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    double _timeout;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timerSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100027bcc
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double leewayTimeInterval; // @synthesize leewayTimeInterval=_leewayTimeInterval;
- (void)cancel;	// IMP=0x0000000100027ae4
- (void)start;	// IMP=0x00000001000278a0
- (void)dealloc;	// IMP=0x0000000100027854
- (id)initWithQueue:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002776c

@end

