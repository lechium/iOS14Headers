/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNLocationManagerObserver.h>

@class NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface MNSuggestionsManager : NSObject <MNLocationManagerObserver> {

	BOOL _locationsAvailable;
	BOOL _changingState;
	unsigned long long _state;
	NSMutableDictionary* _suggestionsStorage;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableDictionary * suggestionsStorage;              //@synthesize suggestionsStorage=_suggestionsStorage - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL changingState;                                    //@synthesize changingState=_changingState - In the implementation block
@property (assign,nonatomic) unsigned long long state;                              //@synthesize state=_state - In the implementation block
@property (readonly) NSArray * allSuggestions; 
@property (assign,nonatomic) BOOL locationsAvailable;                               //@synthesize locationsAvailable=_locationsAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)dealloc;
-(void)setState:(unsigned long long)arg1 ;
-(id)init;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(unsigned long long)state;
-(void)addSuggestions:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)_startListenForDebugTestNotifications;
-(void)_stopListenForDebugTestNotifications;
-(void)_verifyHaveObservers;
-(BOOL)changingState;
-(NSMutableDictionary *)suggestionsStorage;
-(void)_notifyObserversDidAddSuggestion:(id)arg1 ;
-(void)_notifyObserversDidUpdateSuggestions;
-(void)setSuggestionsStorage:(NSMutableDictionary *)arg1 ;
-(void)setChangingState:(BOOL)arg1 ;
-(void)setLocationsAvailable:(BOOL)arg1 ;
-(void)_updateLocationsAvailable;
-(BOOL)refreshSuggestions;
-(NSArray *)allSuggestions;
-(void)_addFakeSuggestion:(id)arg1 ;
-(BOOL)locationsAvailable;
@end
