//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "supdProtocol-Protocol.h"

@class NSArray, NSDictionary, SFAnalyticsReporter;
@protocol OS_dispatch_queue;

@interface supd : NSObject <supdProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_analyticsTopics;	// 16 = 0x10
    SFAnalyticsReporter *_reporter;	// 24 = 0x18
    NSDictionary *_topicsSamplingRates;	// 32 = 0x20
}

+ (void)removeInstance;	// IMP=0x000000010000f394
+ (id)instance;	// IMP=0x000000010000f350
+ (void)instantiate;	// IMP=0x000000010000f328
- (void).cxx_destruct;	// IMP=0x000000010000f124
@property(retain) NSDictionary *topicsSamplingRates; // @synthesize topicsSamplingRates=_topicsSamplingRates;
@property(readonly) SFAnalyticsReporter *reporter; // @synthesize reporter=_reporter;
@property(readonly) NSArray *analyticsTopics; // @synthesize analyticsTopics=_analyticsTopics;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)forceUploadWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ef60
- (void)createChunkedLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ec18
- (void)createLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e8d0
- (void)getSysdiagnoseDumpWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e860
- (id)stringForEventClass:(long long)arg1;	// IMP=0x000000010000e808
- (void)clientStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e4c8
- (void)setUploadDateWith:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e330
- (id)getSysdiagnoseDump;	// IMP=0x000000010000df18
- (id)sysdiagnoseStringForEventRecord:(id)arg1;	// IMP=0x000000010000dc08
- (_Bool)uploadAnalyticsWithError:(id *)arg1 force:(_Bool)arg2;	// IMP=0x000000010000d174
- (id)serializeLoggingEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000cf60
- (void)performRegularlyScheduledUpload;	// IMP=0x000000010000cdd8
- (void)sendNotificationForOncePerReportSamplers;	// IMP=0x000000010000cda4
- (id)init;	// IMP=0x000000010000cd54
- (id)initWithReporter:(id)arg1;	// IMP=0x000000010000cc5c
- (void)setupSamplingRates;	// IMP=0x000000010000c788
- (void)setupTopics;	// IMP=0x000000010000c4dc

@end

