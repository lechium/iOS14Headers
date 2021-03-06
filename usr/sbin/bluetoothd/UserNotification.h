//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface UserNotification : NSObject
{
    struct __CFUserNotification *_notification;	// 8 = 0x8
    struct __CFRunLoopSource *_runLoopSource;	// 16 = 0x10
    int _type;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSUUID *_device;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100483890
@property(retain) NSUUID *device; // @synthesize device=_device;
@property int type; // @synthesize type=_type;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)setRunLoopSource:(struct __CFRunLoopSource *)arg1;	// IMP=0x00000001004837d0
- (struct __CFRunLoopSource *)runLoopSource;	// IMP=0x00000001004837c8
- (void)setNotification:(struct __CFUserNotification *)arg1;	// IMP=0x0000000100483774
- (struct __CFUserNotification *)notification;	// IMP=0x000000010048376c
- (void)dealloc;	// IMP=0x00000001004836c0
- (id)initWithType:(int)arg1 device:(id)arg2 bundleID:(id)arg3;	// IMP=0x00000001004835f0

@end

