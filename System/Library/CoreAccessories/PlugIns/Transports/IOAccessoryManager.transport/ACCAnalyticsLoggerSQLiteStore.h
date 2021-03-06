/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOAccessoryManager/ACCSQLite.h>

@class NSArray, NSDate;

@interface ACCAnalyticsLoggerSQLiteStore : ACCSQLite

@property (readonly) NSArray * allEvents; 
@property (retain) NSDate * uploadDate; 
+(id)storeWithPath:(id)arg1 schema:(id)arg2 ;
-(NSArray *)allEvents;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 ;
-(void)dealloc;
-(NSDate *)uploadDate;
-(void)clearAllData;
-(id)summaryCounts;
-(long long)successCount;
-(void)setUploadDate:(NSDate *)arg1 ;
-(BOOL)tryToOpenDatabase;
-(void)incrementSuccessCount;
-(void)incrementWrapFailureCount;
-(long long)wrapFailureCount;
@end

