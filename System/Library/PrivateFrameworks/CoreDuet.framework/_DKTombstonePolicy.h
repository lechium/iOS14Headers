/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {

	NSArray* _requirements;
	NSPredicate* _predicateForEventsRequiredToBeTombstoned;
	NSPredicate* _eventPredicateForEventsRequiredToBeTombstoned;
	NSArray* _propertiesToFetchForTombstones;

}

@property (nonatomic,readonly) NSArray * requirements; 
@property (nonatomic,readonly) NSPredicate * predicateForEventsRequiredToBeTombstoned; 
@property (nonatomic,readonly) NSArray * propertiesToFetchForTombstones; 
+(id)defaultPolicy;
-(NSArray *)requirements;
-(id)init;
-(id)initWithRequirements:(id)arg1 ;
-(NSArray *)propertiesToFetchForTombstones;
-(NSPredicate *)predicateForEventsRequiredToBeTombstoned;
-(id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
@end

