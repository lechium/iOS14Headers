/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {

	NSCountedSet* _countedKeys;
	NSMutableDictionary* _map;

}
-(BOOL)containsValue:(id)arg1 ;
-(id)init;
-(BOOL)checkinValue:(id)arg1 ;
-(void)checkinValues:(id)arg1 ;
-(id)checkoutValueForKey:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)description;
@end

