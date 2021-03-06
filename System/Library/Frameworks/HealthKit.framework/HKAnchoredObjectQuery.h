/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKAnchoredObjectQueryClientInterface.h>

@class NSMutableArray, HKQueryAnchor, NSString;

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface> {

	BOOL _initialHandlerCalled;
	NSMutableArray* _samplesPendingDelivery;
	NSMutableArray* _deletedObjectsPendingDelivery;
	AB _includeDeletedObjects;
	HKQueryAnchor* _currentAnchor;
	BOOL _includeAutomaticTimeZones;
	BOOL _includeContributorInformation;
	/*^block*/id _updateHandler;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) HKQueryAnchor * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double collectionInterval;                       //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,readonly) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL ignoreDeletedObjects; 
@property (assign,nonatomic) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
@property (nonatomic,copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(BOOL)includeContributorInformation;
-(HKQueryAnchor *)anchor;
-(double)collectionInterval;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)setCollectionInterval:(double)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)setUpdateHandler:(id)arg1 ;
-(void)queue_validate;
-(id)updateHandler;
-(void)queue_populateConfiguration:(id)arg1 ;
-(BOOL)ignoreDeletedObjects;
-(void)setIgnoreDeletedObjects:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 query:(id)arg6 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(void)setIncludeContributorInformation:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
-(id)completionHandler;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
@end

