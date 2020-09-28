/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface NTAWorldCitiesChangedListener : NSObject {

	BOOL _active;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) NSMutableSet * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL active;                           //@synthesize active=_active - In the implementation block
+(id)sharedListener;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(NSMutableSet *)observers;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)deactivate;
-(void)activate;
-(id)addObserverOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_notifyPrefsChanged;
@end
