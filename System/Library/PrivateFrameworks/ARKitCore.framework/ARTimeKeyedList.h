/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {

	unsigned long long _maxSize;
	NSMutableArray* _times;
	NSMutableArray* _objects;

}
-(void)clear;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(void)appendObject:(id)arg1 forTime:(double)arg2 ;
-(id)nearestObjectForTime:(double)arg1 ;
-(unsigned long long)insertionIndexForTime:(id)arg1 ;
@end

