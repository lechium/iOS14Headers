/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface WFNetworkBehaviorMonitor : NSObject {

	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)logNetworkEvent:(id)arg1 ;
@end
