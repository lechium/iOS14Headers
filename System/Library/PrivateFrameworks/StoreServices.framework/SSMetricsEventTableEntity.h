/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {

	NSDictionary* _reportingDictionary;

}
+(id)databaseTable;
-(void)dealloc;
-(id)reportingDictionary;
-(id)reportingCanaryIdentifier;
-(id)reportingJSON;
@end

