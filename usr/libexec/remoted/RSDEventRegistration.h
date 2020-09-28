//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OS_remote_device_browser;

@interface RSDEventRegistration : NSObject
{
    _Bool _dontRestartBrowse;	// 8 = 0x8
    unsigned long long _token;	// 16 = 0x10
    char *_name;	// 24 = 0x18
    OS_remote_device_browser *_browser;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100014ab4
@property(retain, nonatomic) OS_remote_device_browser *browser; // @synthesize browser=_browser;
@property(nonatomic) _Bool dontRestartBrowse; // @synthesize dontRestartBrowse=_dontRestartBrowse;
@property(nonatomic) char *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long token; // @synthesize token=_token;
- (void)dealloc;	// IMP=0x0000000100014a28
- (void)fire:(id)arg1;	// IMP=0x00000001000148a0
- (void)cancelBrowsing;	// IMP=0x0000000100014778
- (void)startBrowsing:(id)arg1;	// IMP=0x0000000100014570
- (id)initWithToken:(unsigned long long)arg1 name:(char *)arg2;	// IMP=0x00000001000144f0

@end
