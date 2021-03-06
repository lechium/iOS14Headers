/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>
#import <MapsSuggestions/MapsSuggestionsMeCardReader.h>

@protocol MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;
@class MapsSuggestionsRoutine, MapsSuggestionsContacts, NSMutableArray, MapsSuggestionsMeCard, MapsSuggestionsObservers, NSArray, NSString;

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader> {

	Queue _queue;
	id<MapsSuggestionsShortcutStorage> _storage;
	id<MapsSuggestionsShortcutSuggestor> _suggestor;
	MapsSuggestionsRoutine* _routine;
	MapsSuggestionsContacts* _contacts;
	NSMutableArray* _hiddenShortcuts;
	MapsSuggestionsMeCard* _rawMeCard;
	MapsSuggestionsObservers* _meCardObservers;
	MapsSuggestionsMeCard* _currCorrectedMeCard;
	NSArray* _rawHomeAddressStrings;
	NSArray* _rawWorkAddressStrings;
	NSArray* _rawSchoolAddressStrings;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(id)storage;
-(char)moveShortcut:(id)arg1 toIndex:(long long)arg2 withSnapshot:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initFromResourceDepot:(id)arg1 ;
-(id)suggestor;
-(NSString *)uniqueName;
-(id)test_setUpPlaceholdersIfNeeded:(id)arg1 overlays:(id)arg2 ;
-(char)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)routine;
-(char)readMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(char)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithStorage:(id)arg1 suggestor:(id)arg2 contacts:(id)arg3 routine:(id)arg4 ;
-(void)addMeCardObserver:(id)arg1 ;
-(char)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)test_sortMapsSuggestionsShortcuts:(id)arg1 ;
-(void)removeMeCardObserver:(id)arg1 ;
-(char)proposeAdditionalShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

