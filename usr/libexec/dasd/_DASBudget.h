//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface _DASBudget : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _allocationType;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    double _capacity;	// 24 = 0x18
    double _balance;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
    double _maxBudgetValue;	// 48 = 0x30
    double _minBudgetValue;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000050b0
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;	// IMP=0x0000000100004d2c
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;	// IMP=0x0000000100004cb0
- (void).cxx_destruct;	// IMP=0x00000001000052f0
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(nonatomic) double minBudgetValue; // @synthesize minBudgetValue=_minBudgetValue;
@property(nonatomic) double maxBudgetValue; // @synthesize maxBudgetValue=_maxBudgetValue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) double balance; // @synthesize balance=_balance;
@property(readonly, nonatomic) unsigned char allocationType; // @synthesize allocationType=_allocationType;
@property(readonly, nonatomic) double capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100005288
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100005160
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000050b8
- (id)description;	// IMP=0x0000000100005064
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100004fb8
- (unsigned long long)hash;	// IMP=0x0000000100004fa8
- (void)setCapacity:(double)arg1;	// IMP=0x0000000100004f38
- (void)setBalance:(double)arg1;	// IMP=0x0000000100004eb0
- (void)incrementBy:(double)arg1;	// IMP=0x0000000100004ea0
- (void)decrementBy:(double)arg1;	// IMP=0x0000000100004e1c
- (_Bool)unlockedDecrementBy:(double)arg1;	// IMP=0x0000000100004de4
- (_Bool)isPositive;	// IMP=0x0000000100004dd4
- (void)registerSignificantBudgetChangeCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004da4
- (id)initWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;	// IMP=0x0000000100004c00

@end

