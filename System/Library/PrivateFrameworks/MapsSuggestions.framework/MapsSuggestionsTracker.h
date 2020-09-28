/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, MapsSuggestionsTimer, MapsSuggestionsNetworkRequester;
@class NSObject, MapsSuggestionsETARequirements, MapsSuggestionsManager, NSMutableDictionary, MapsSuggestionsETARequester, MapsSuggestionsDonater, MapsSuggestionsCanKicker, MapsSuggestionsVirtualGarage, MapsSuggestionsFlightUpdater, GEOAutomobileOptions, CLLocation, MapsSuggestionsMutableWeakEntries, MapsSuggestionsPredictor, NSString;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsETARequirements* _requirements;
	id<MapsSuggestionsTimer> _refreshTimer;
	double _refreshInterval;
	double _refreshLeeway;
	double _refreshDeferTime;
	int _transportType;
	MapsSuggestionsManager* _manager;
	NSMutableDictionary* _etaTitleFormatters;
	NSMutableDictionary* _distanceTitleFormatters;
	NSMutableDictionary* _etaChargeTitleFormatters;
	BOOL _shouldBeRunning;
	MapsSuggestionsETARequester* _etaRequester;
	MapsSuggestionsDonater* _donater;
	MapsSuggestionsCanKicker* _currentLocationWiper;
	NSMutableDictionary* _previousETAs;
	id _transportTypeChangedListener;
	MapsSuggestionsVirtualGarage* _virtualGarage;
	MapsSuggestionsFlightUpdater* _flightUpdater;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;
	CLLocation* _currentLocation;
	MapsSuggestionsMutableWeakEntries* _trackedEntries;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	MapsSuggestionsPredictor* _predictor;

}

@property (retain) CLLocation * currentLocation;                                                //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) MapsSuggestionsMutableWeakEntries * trackedEntries;                //@synthesize trackedEntries=_trackedEntries - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsNetworkRequester> networkRequester;              //@synthesize networkRequester=_networkRequester - In the implementation block
@property (nonatomic,retain) MapsSuggestionsPredictor * predictor;                              //@synthesize predictor=_predictor - In the implementation block
@property (assign,nonatomic) int mapType;                                                       //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                          //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(CLLocation *)currentLocation;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(NSString *)uniqueName;
-(void)dealloc;
-(void)scheduleRefresh;
-(void)setLocation:(id)arg1 ;
-(id)initWithManager:(id)arg1 requirements:(id)arg2 network:(id)arg3 flightUpdater:(id)arg4 virtualGarage:(id)arg5 ;
-(void)setPredictor:(MapsSuggestionsPredictor *)arg1 ;
-(id<MapsSuggestionsNetworkRequester>)networkRequester;
-(void)setTrackedEntries:(MapsSuggestionsMutableWeakEntries *)arg1 ;
-(MapsSuggestionsMutableWeakEntries *)trackedEntries;
-(void)setTitleFormatter:(id)arg1 forType:(long long)arg2 ;
-(void)unschedule;
-(MapsSuggestionsPredictor *)predictor;
-(void)resetAllTitleFormatting;
-(void)clearLocationAndETAs;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)trackSuggestionEntries:(id)arg1 transportType:(int)arg2 ;
-(void)setNetworkRequester:(id<MapsSuggestionsNetworkRequester>)arg1 ;
@end
