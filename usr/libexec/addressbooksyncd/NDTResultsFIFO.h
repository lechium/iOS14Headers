//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NDTResultsFIFO : NSObject
{
    _Bool _finished;	// 8 = 0x8
    _Bool _terminated;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    long long _length;	// 32 = 0x20
    NSCondition *_condition;	// 40 = 0x28
    NSMutableArray *_fifo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100031d64
@property(nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(retain, nonatomic) NSMutableArray *fifo; // @synthesize fifo=_fifo;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (void)terminate;	// IMP=0x0000000100031c34
- (id)pop;	// IMP=0x0000000100031b28
- (void)conditionalPop:(CDUnknownBlockType)arg1;	// IMP=0x000000010003188c
- (void)finish;	// IMP=0x00000001000317d0
- (_Bool)push:(id)arg1;	// IMP=0x0000000100031568
- (id)initWithFIFOLength:(long long)arg1 name:(id)arg2;	// IMP=0x0000000100031488
- (id)init;	// IMP=0x0000000100031474

@end
