//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_source;

@interface FMDFSWatcher : NSObject
{
    _Bool _triggered;	// 8 = 0x8
    int _fd;	// 12 = 0xc
    NSURL *_directoryURL;	// 16 = 0x10
    NSString *_targetFilename;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_dispatchSourceChange;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_dispatchSourceAbort;	// 48 = 0x30
}

+ (id)monitorURL:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000100089574
- (void).cxx_destruct;	// IMP=0x0000000100089de8
@property(nonatomic) _Bool triggered; // @synthesize triggered=_triggered;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceAbort; // @synthesize dispatchSourceAbort=_dispatchSourceAbort;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceChange; // @synthesize dispatchSourceChange=_dispatchSourceChange;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *targetFilename; // @synthesize targetFilename=_targetFilename;
@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void)cancel;	// IMP=0x0000000100089bec
- (void)fileDiscovered;	// IMP=0x0000000100089ac8
- (void)directoryChanged;	// IMP=0x00000001000896b8
- (_Bool)start;	// IMP=0x0000000100088cac
- (id)initWithURL:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000100088af8
- (id)init;	// IMP=0x0000000100088ac0

@end

