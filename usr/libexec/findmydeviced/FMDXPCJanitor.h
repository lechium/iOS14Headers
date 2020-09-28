//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMDXPCJanitor : NSObject
{
    double _gracePeriod;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    CDUnknownBlockType _cleanupTask;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100087774
@property(copy, nonatomic) CDUnknownBlockType cleanupTask; // @synthesize cleanupTask=_cleanupTask;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double gracePeriod; // @synthesize gracePeriod=_gracePeriod;
- (void)performWork;	// IMP=0x0000000100087668
- (void)handleActivity;	// IMP=0x00000001000875d0
- (CDUnknownBlockType)activityHandler;	// IMP=0x00000001000873c0
- (void)deactivate;	// IMP=0x0000000100087254
- (void)schedule:(id)arg1 requireClass:(unsigned long long)arg2;	// IMP=0x0000000100086fdc
- (void)schedule:(id)arg1;	// IMP=0x0000000100086fcc
- (id)initWithName:(id)arg1 gracePeriod:(double)arg2 cleanupTask:(CDUnknownBlockType)arg3;	// IMP=0x0000000100086ec8

@end
