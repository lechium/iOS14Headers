/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject {

	TBDataSourceMediator* _dataSourceMediator;

}

@property (nonatomic,retain) TBDataSourceMediator * dataSourceMediator;              //@synthesize dataSourceMediator=_dataSourceMediator - In the implementation block
-(id)initWithDataSourceMediator:(id)arg1 ;
-(TBDataSourceMediator *)dataSourceMediator;
-(void)setDataSourceMediator:(TBDataSourceMediator *)arg1 ;
-(void)_scheduleXPCActivity;
-(void)_submitCacheAvailabilityMetric;
@end
