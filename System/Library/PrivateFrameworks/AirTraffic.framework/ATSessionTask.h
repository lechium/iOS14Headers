/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSArray, NSDictionary, NSError, ATSession;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying> {

	BOOL _finished;
	BOOL _running;
	BOOL _cancelled;
	BOOL _suspended;
	NSString* _sessionTaskIdentifier;
	NSString* _sessionGroupingKey;
	NSString* _localizedDescription;
	NSString* _dataClass;
	double _progress;
	unsigned long long _totalItemCount;
	unsigned long long _completedItemCount;
	NSNumber* _totalBytesToTransfer;
	NSNumber* _totalBytesTransferred;
	NSArray* _currentItemDescriptions;
	NSArray* _currentItems;
	NSArray* _recentlyFailedAssets;
	NSDictionary* _properties;
	NSError* _error;
	ATSession* _session;
	double _startTime;
	double _finishTime;

}

@property (getter=isRunning) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (getter=isFinished) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isSuspended) BOOL suspended;                         //@synthesize suspended=_suspended - In the implementation block
@property (__weak) ATSession * session;                                //@synthesize session=_session - In the implementation block
@property (copy) NSString * sessionTaskIdentifier;                     //@synthesize sessionTaskIdentifier=_sessionTaskIdentifier - In the implementation block
@property (copy) NSString * localizedDescription;                      //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * sessionGroupingKey;                        //@synthesize sessionGroupingKey=_sessionGroupingKey - In the implementation block
@property (copy) NSString * dataClass;                                 //@synthesize dataClass=_dataClass - In the implementation block
@property (assign) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long totalItemCount;                  //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign) unsigned long long completedItemCount;              //@synthesize completedItemCount=_completedItemCount - In the implementation block
@property (copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (copy) NSArray * currentItemDescriptions;                    //@synthesize currentItemDescriptions=_currentItemDescriptions - In the implementation block
@property (copy) NSArray * currentItems;                               //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSArray * recentlyFailedAssets;                       //@synthesize recentlyFailedAssets=_recentlyFailedAssets - In the implementation block
@property (copy) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (copy) NSNumber * totalBytesToTransfer;                      //@synthesize totalBytesToTransfer=_totalBytesToTransfer - In the implementation block
@property (copy) NSNumber * totalBytesTransferred;                     //@synthesize totalBytesTransferred=_totalBytesTransferred - In the implementation block
@property (assign) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign) double finishTime;                                  //@synthesize finishTime=_finishTime - In the implementation block
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
-(NSString *)localizedDescription;
-(void)cancel;
-(BOOL)isRunning;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(void)setProperties:(NSDictionary *)arg1 ;
-(unsigned long long)totalItemCount;
-(void)setRunning:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setSession:(ATSession *)arg1 ;
-(double)duration;
-(ATSession *)session;
-(void)_start;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(NSString *)sessionTaskIdentifier;
-(NSString *)sessionGroupingKey;
-(id)baseClassRepresentation;
-(double)finishTime;
-(void)setFinishTime:(double)arg1 ;
-(id)initWithDataClass:(id)arg1 ;
-(void)setSessionTaskIdentifier:(NSString *)arg1 ;
-(void)setSessionGroupingKey:(NSString *)arg1 ;
-(unsigned long long)completedItemCount;
-(void)setCompletedItemCount:(unsigned long long)arg1 ;
-(NSArray *)currentItemDescriptions;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(void)setCurrentItemDescriptions:(NSArray *)arg1 ;
-(NSArray *)recentlyFailedAssets;
-(void)setRecentlyFailedAssets:(NSArray *)arg1 ;
-(NSNumber *)totalBytesTransferred;
-(void)setTotalBytesTransferred:(NSNumber *)arg1 ;
-(NSNumber *)totalBytesToTransfer;
-(void)setTotalBytesToTransfer:(NSNumber *)arg1 ;
-(double)startTime;
-(BOOL)isSuspended;
-(void)setStartTime:(double)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)dataClass;
-(void)start;
-(void)setProgress:(double)arg1 ;
-(id)init;
-(NSDictionary *)properties;
-(BOOL)isCancelled;
-(NSArray *)currentItems;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)progress;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setDataClass:(NSString *)arg1 ;
-(id)description;
@end

