/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface IDSHashPersistenceAWDLogging : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _AWDServerConnection;

}
+(id)sharedInstance;
-(id)_metricContainerForMetricType:(unsigned)arg1 ;
-(void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)shouldSubmit;
-(void)duplicateMessageEncounted;
@end
