//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSFileHandle, NSMutableArray, NSString, NSURL, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue, W5XPCConnectionDelegate;

@interface W5XPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_mutableActiveRequests;	// 16 = 0x10
    NSMutableArray *_mutableEventIDs;	// 24 = 0x18
    _Bool _browsing;	// 32 = 0x20
    _Bool _advertising;	// 33 = 0x21
    NSUUID *_uuid;	// 40 = 0x28
    NSURL *_additionalLogURL;	// 48 = 0x30
    NSFileHandle *_fileHandle;	// 56 = 0x38
    NSDateFormatter *_formatter;	// 64 = 0x40
    id <W5XPCConnectionDelegate> _delegate;	// 72 = 0x48
    NSXPCConnection *_connection;	// 80 = 0x50
    NSString *_processName;	// 88 = 0x58
}

@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) id <W5XPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)log:(id)arg1 timestamp:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100064d54
- (void)cancelAllRequestsAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100064aa0
- (void)cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100064954
- (void)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100064660
- (void)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 uuid:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100064418
- (void)collectLogs:(id)arg1 configuration:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100064034
- (void)runDiagnostics:(id)arg1 configuration:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100063cf4
- (void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100063c58
- (void)queryDebugConfigurationForPeer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063bbc
- (void)queryStatusForPeer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063b20
- (void)queryLocalPeerAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100063a8c
- (void)stopMonitoringEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000638c4
- (void)startMonitoringEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000636fc
- (void)__logMessage:(id)arg1 timestamped:(_Bool)arg2;	// IMP=0x0000000100063370
- (id)__activeRequestWithUUID:(id)arg1;	// IMP=0x000000010006321c
@property(readonly, copy, nonatomic) NSURL *additionalLog;
@property(readonly, nonatomic) _Bool isAdvertising;
@property(readonly, nonatomic) _Bool isBrowsing;
@property(readonly, copy, nonatomic) NSArray *eventIDs;
@property(readonly, copy, nonatomic) NSArray *activeRequests;
- (void)dealloc;	// IMP=0x0000000100062cc4
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100062b24

@end

