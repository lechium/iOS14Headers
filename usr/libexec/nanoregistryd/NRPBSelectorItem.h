//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRPBSelectorItem : NSObject
{
    _Bool _connected;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    CDUnknownFunctionPointerType _method;	// 24 = 0x18
}

@property(nonatomic) CDUnknownFunctionPointerType method; // @synthesize method=_method;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;

@end
