/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_TPSXPCExportable.h>

@class TPSDuetDataProvider, TPSAnalyticsDataProvider, _TPSXPCConnection, NSString;

@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable> {

	TPSDuetDataProvider* _duetDataProvider;
	TPSAnalyticsDataProvider* _dataProvider;
	_TPSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> analyticsQueue; 
@property (nonatomic,retain) _TPSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) TPSAnalyticsDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)callerIsTipsd;
-(void)setXpcConnection:(_TPSXPCConnection *)arg1 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)logAnalyticsEventsFromTipsd:(id)arg1 ;
-(_TPSXPCConnection *)xpcConnection;
-(id)exportedInterface;
-(void)logAnalyticsEvents:(id)arg1 ;
-(id)remoteInterface;
-(void)logAnalyticsEventFromTipsd:(id)arg1 ;
-(id)duetDataProvider;
-(void)_destroyXPCConnection;
-(void)setDataProvider:(TPSAnalyticsDataProvider *)arg1 ;
-(TPSAnalyticsDataProvider *)dataProvider;
-(void)sendToCoreAnalytics:(id)arg1 eventName:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(void)logAnalyticsEvent:(id)arg1 ;
@end
