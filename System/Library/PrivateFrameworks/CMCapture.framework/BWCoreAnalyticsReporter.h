/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface BWCoreAnalyticsReporter : NSObject {

	NSObject*<OS_dispatch_queue> _coreAnalyticsDispatchQueue;

}
+(id)sharedInstance;
+(void)initialize;
+(int)clientApplicationIDType:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

