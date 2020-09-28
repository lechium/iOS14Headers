/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet, NSMutableDictionary, NSNumber, NSIndexSet;

@interface TSCH3DActiveLabelsTypeBounds : NSObject {

	NSMutableIndexSet* _activeIndices;
	NSMutableDictionary* _map;
	NSNumber* _activeType;

}

@property (nonatomic,copy,readonly) NSNumber * activeType;                     //@synthesize activeType=_activeType - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * activeIndices; 
-(id)active;
-(void)dealloc;
-(id)init;
-(void)addBounds:(id)arg1 ;
-(NSNumber *)activeType;
-(BOOL)setActiveType:(NSNumber *)arg1 ;
-(id)arrayAtIndex:(long long)arg1 ;
-(BOOL)hasCachedBoundsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAnyCachedBoundsAtIndices:(id)arg1 ;
-(NSIndexSet *)activeIndices;
-(BOOL)resetIndex:(long long)arg1 ;
@end
