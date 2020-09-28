/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPSAnalytics : NSObject

@property (nonatomic,readonly) BOOL shouldRecordAnalyticsEvents; 
+(id)sharedInstance;
-(BOOL)shouldRecordAnalyticsEvents;
-(void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2 ;
-(void)navigationStartedWithBundleIdentifier:(id)arg1 ;
-(void)audioAppMetadataThrottledWithBundleIdentifier:(id)arg1 ;
@end
