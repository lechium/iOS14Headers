//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FieldTestModelNode, LogGenerator, NSDictionary, NSMutableDictionary, NSTimer;

@interface FieldTestModel : NSObject
{
    struct __CFMessagePort *_recvPort;	// 8 = 0x8
    struct __CFMessagePort *_sendPort;	// 16 = 0x10
    NSTimer *_displayUpdateTimer;	// 24 = 0x18
    _Bool _updated;	// 32 = 0x20
    LogGenerator *_logGenerator;	// 40 = 0x28
    NSMutableDictionary *_state;	// 48 = 0x30
    FieldTestModelNode *_nodes;	// 56 = 0x38
    NSDictionary *_nodesByPath;	// 64 = 0x40
}

- (id)getSaveContents;	// IMP=0x00000001000034f8
- (void)updateWithData:(id)arg1;	// IMP=0x00000001000034bc
- (id)nodeAtPath:(id)arg1;	// IMP=0x0000000100003474
- (void)refresh:(id)arg1;	// IMP=0x0000000100003468
- (void)refresh;	// IMP=0x00000001000033c0
- (id)topLevelNodes;	// IMP=0x0000000100003348
- (void)startMonitor;	// IMP=0x0000000100003034
- (void)restartMonitor;	// IMP=0x0000000100003000
- (void)configureGenerator;	// IMP=0x0000000100002e84
- (void)dealloc;	// IMP=0x0000000100002e18
- (id)init;	// IMP=0x0000000100002dc0
- (void)destroyPorts;	// IMP=0x0000000100002d3c
- (unsigned char)createPorts;	// IMP=0x0000000100002af8
- (_Bool)isConnected;	// IMP=0x0000000100002ad8

@end

