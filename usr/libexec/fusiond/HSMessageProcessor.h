//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HSComponentCheck, HSSepUtil;

@interface HSMessageProcessor : NSObject
{
    HSSepUtil *_sepUtil;	// 8 = 0x8
    HSComponentCheck *_componentCheckUtil;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000bc50
- (int)processMessage:(id)arg1 response:(id *)arg2;	// IMP=0x000000010000b210
- (int)rebootDevice:(id *)arg1;	// IMP=0x000000010000b118
- (int)processMessagev1:(id)arg1 response:(id *)arg2;	// IMP=0x000000010000b000
- (id)init;	// IMP=0x000000010000af60

@end

