/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {

	NSMutableSet* _set;
	NSMutableDictionary* _recentTouches;
	double _secondsToExpire;

}
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)dealloc;
-(void)_touch:(id)arg1 ;
-(id)initWithSecondsToExpire:(double)arg1 ;
-(BOOL)_didExpireObject:(id)arg1 ;
@end
