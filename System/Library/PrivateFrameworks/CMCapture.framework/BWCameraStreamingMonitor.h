/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class STMediaStatusDomainPublisher, NSObject;

@interface BWCameraStreamingMonitor : NSObject {

	unsigned _cameraTypeBitMask;
	STMediaStatusDomainPublisher* _mediaStatusDomainPublisher;
	NSObject*<OS_dispatch_queue> _cameraStreamingMonitorQueue;
	BOOL _msnReportingEnabled;

}
+(void)initialize;
+(id)sharedCameraStreamingMonitor;
-(void)dealloc;
-(id)_init;
-(void)setStreaming:(BOOL)arg1 portType:(id)arg2 clientAuditToken:(SCD_Struct_Fi79)arg3 ;
@end

