/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKRPWatchAppInstallabilityDataSource;
@interface HKRPWatchAppInstallability : NSObject {

	id<HKRPWatchAppInstallabilityDataSource> _dataSource;

}

@property (nonatomic,readonly) BOOL shouldInstallWatchApp; 
-(BOOL)shouldInstallWatchApp;
-(id)initWithDataSource:(id)arg1 ;
-(id)init;
-(id)initWithDevice:(id)arg1 ;
@end

