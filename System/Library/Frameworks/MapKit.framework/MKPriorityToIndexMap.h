/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface MKPriorityToIndexMap : NSObject {

	NSMutableArray* _priorities;
	NSMutableDictionary* _prioritiesToIndexes;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(long long)indexOfPriority:(double)arg1 ;
-(BOOL)addPriorities:(id)arg1 ;
-(id)initWithPriorities:(id)arg1 ;
-(id)init;
-(BOOL)contains:(id)arg1 ;
-(void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(double)priorityOfIndex:(unsigned long long)arg1 ;
-(BOOL)containsPriority:(double)arg1 ;
-(void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
@end

