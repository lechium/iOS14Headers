/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalendarEventLoaderDelegate.h>

@protocol OccurrenceCacheDataSourceProtocol;
@class EKEventStore, CalendarEventLoader, NSLock, NSArray, _EKNotificationMonitor, NSMutableDictionary, EKCalendarDate, CalendarModelSceneState, NSSet, NSString, NSCalendar, EKEvent, EKSource;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {

	BOOL _modelLocked;
	BOOL _notificationMonitorSetUp;
	EKEventStore* _eventStore;
	CalendarEventLoader* _eventLoader;
	NSLock* _filterLock;
	NSArray* _visibleCalendars;
	long long _readWriteCalendarCount;
	NSArray* _delegateSources;
	long long _invitationBearingStoresExist;
	_EKNotificationMonitor* _notificationMonitor;
	id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
	id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheFilteredDataSource;
	long long _cachedFakeTodayIndex;
	NSMutableDictionary* _displayableAccountErrorCounts;
	long long _initialAccountSyncCount;
	BOOL _suspendSelectedDateChanges;
	EKCalendarDate* _suspendedSelectedDate;
	CalendarModelSceneState* _persistedSceneState;
	BOOL _autoStartNotificationMonitor;
	NSSet* _selectedCalendars;
	NSString* _searchString;
	NSCalendar* _calendar;
	EKCalendarDate* _selectedDate;
	unsigned long long _firstVisibleSecond;
	EKEvent* _selectedOccurrence;
	EKSource* _sourceForSelectedIdentity;
	NSArray* _sortedEnabledDelegates;
	NSString* _sceneIdentifier;

}

@property (nonatomic,readonly) EKEventStore * eventStore;                                //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                        //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) EKCalendarDate * selectedDate;                                //@synthesize selectedDate=_selectedDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * selectedDay; 
@property (nonatomic,readonly) long long readWriteCalendarCount; 
@property (nonatomic,readonly) long long accountsInInitialSyncCount; 
@property (nonatomic,readonly) BOOL currentlyLocked; 
@property (assign,nonatomic) unsigned long long firstVisibleSecond;                      //@synthesize firstVisibleSecond=_firstVisibleSecond - In the implementation block
@property (nonatomic,retain) EKEvent * selectedOccurrence;                               //@synthesize selectedOccurrence=_selectedOccurrence - In the implementation block
@property (nonatomic,retain) NSSet * selectedCalendars;                                  //@synthesize selectedCalendars=_selectedCalendars - In the implementation block
@property (nonatomic,copy) NSSet * unselectedCalendars; 
@property (nonatomic,retain) NSString * searchString;                                    //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL showDayAsList; 
@property (assign,nonatomic) BOOL showMonthAsDivided; 
@property (nonatomic,retain,readonly) EKSource * sourceForSelectedIdentity;              //@synthesize sourceForSelectedIdentity=_sourceForSelectedIdentity - In the implementation block
@property (nonatomic,retain) NSArray * sortedEnabledDelegates;                           //@synthesize sortedEnabledDelegates=_sortedEnabledDelegates - In the implementation block
@property (nonatomic,readonly) BOOL containsDelegateSources; 
@property (nonatomic,copy) NSString * sceneIdentifier;                                   //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL autoStartNotificationMonitor;                          //@synthesize autoStartNotificationMonitor=_autoStartNotificationMonitor - In the implementation block
@property (assign,nonatomic) BOOL allowEventLocationPrediction; 
+(id)calendarModelWithDataPath:(id)arg1 ;
+(id)calendarModelWithEventStore:(id)arg1 ;
+(id)sortedEnabledDelegateSourcesFromStore:(id)arg1 ;
+(void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)arg1 ;
+(unsigned long long)errorForSource:(id)arg1 ;
+(void)temporarilyIgnoreInsecureConnectionErrorsForCalendars:(id)arg1 ;
+(unsigned long long)errorForSubscribedCalendarChildrenOfSource:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)setSelectedCalendars:(NSSet *)arg1 ;
-(EKEventStore *)eventStore;
-(BOOL)autoStartNotificationMonitor;
-(void)setFirstVisibleSecond:(unsigned long long)arg1 ;
-(NSSet *)unselectedCalendars;
-(void)checkLocationAuthorizationAndAllowEventLocationPrediction;
-(unsigned long long)firstVisibleSecond;
-(void)addRespondedNotificationObjectID:(id)arg1 ;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(NSCalendar *)calendar;
-(void)setSelectedDate:(EKCalendarDate *)arg1 ;
-(BOOL)_setSelectedCalendars:(id)arg1 ;
-(void)postSelectedCalendarsChanged;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(unsigned long long)allEventNotificationsCount;
-(void)_invalidateCachedOccurrences;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(BOOL)arg2 ;
-(id)allEventNotificationReferences;
-(void)updateSourceForSelectedIdentity:(id)arg1 selectedCalendars:(id)arg2 ;
-(NSString *)sceneIdentifier;
-(BOOL)searchingOccurrences;
-(id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(id)refreshCalendarDataIfNeeded:(BOOL)arg1 ;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)addOccurrenceAwaitingDeletion:(id)arg1 ;
-(void)_tzSupportTodayRolledOver;
-(void)setUnselectedCalendars:(NSSet *)arg1 ;
-(void)_finishedFirstLoad;
-(void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)dealloc;
-(void)_sceneEnteredBackground:(id)arg1 ;
-(unsigned long long)eventNotificationsForCurrentIdentityCount;
-(long long)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)arg1 ;
-(void)setSelectedDateChangesDelayedUntilAfterTransition:(BOOL)arg1 ;
-(void)_loadVisibleCalendarsIfNeeded;
-(id)eventNotificationReferencesForIdentity:(id)arg1 ;
-(id)_notificationMonitor;
-(void)setAutoStartNotificationMonitor:(BOOL)arg1 ;
-(void)simulateFirstLoadFinished;
-(void)_reloadIfTodayDetermined;
-(void)ensureCalendarVisibleWithId:(id)arg1 ;
-(NSString *)searchString;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setDesiredPaddingDays:(unsigned)arg1 ;
-(id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL*)arg2 ;
-(void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 wasEmptyLoad:(BOOL)arg4 ;
-(long long)accountsInInitialSyncCount;
-(NSArray *)sortedEnabledDelegates;
-(void)startNotificationMonitor;
-(void)_systemWake;
-(id)_calendarsForCurrentIdentityFromCalendars:(id)arg1 lock:(BOOL)arg2 ;
-(id)initWithDataPath:(id)arg1 ;
-(void)setSourceForSelectedIdentity:(EKSource *)arg1 ;
-(double)_tomorrow;
-(void)_invalidateOccurrenceCacheDataSources;
-(id)persistedSceneState;
-(BOOL)containsDelegateSources;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(id)init;
-(void)_notificationsExpired:(id)arg1 ;
-(void)_ignoredErrorsChanged;
-(void)addOccurrenceAwaitingRefresh:(id)arg1 ;
-(void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3 checkSources:(BOOL)arg4 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 ;
-(long long)cachedFakeTodayIndex;
-(void)setSortedEnabledDelegates:(NSArray *)arg1 ;
-(id)eventNotificationReferencesForCurrentIdentity;
-(id)refreshAccountListIfNeeded:(BOOL)arg1 ;
-(BOOL)countSourcesWithErrors;
-(BOOL)_eventBelongsToCurrentIdentity:(id)arg1 ;
-(EKSource *)sourceForSelectedIdentity;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 usingFilter:(BOOL)arg3 ;
-(EKCalendarDate *)selectedDay;
-(NSSet *)selectedCalendars;
-(void)_sceneEnteredForeground:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(long long)numberOfDaysWithCachedOccurrences;
-(void)_performCommonInitialization;
-(void)setSelectedOccurrence:(EKEvent *)arg1 ;
-(void)setComponentForExpandingRequests:(unsigned long long)arg1 ;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 ;
-(EKCalendarDate *)selectedDate;
-(void)setShowMonthAsDivided:(BOOL)arg1 ;
-(void)updateAfterAppResume;
-(void)_searchResultsAvailable:(id)arg1 ;
-(BOOL)allowEventLocationPrediction;
-(long long)displayableAccountErrorsForSource:(id)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 ;
-(void)setAllowEventLocationPrediction:(BOOL)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(void)_checkSources;
-(void)_occurrenceCacheChanged;
-(id)initWithEventStore:(id)arg1 ;
-(BOOL)currentlyLocked;
-(void)setSelectedCalendarsAndRequestPreferenceSave:(id)arg1 ;
-(void)setComponentForExpandingPadding:(unsigned long long)arg1 ;
-(id)calendarsForCurrentIdentityFromCalendars:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 ;
-(BOOL)invitationBearingStoresExistForEvents;
-(BOOL)selectedOccurrenceIsSearchMatch;
-(void)_recreateOccurrenceCacheDataSources;
-(void)setMaxCachedDays:(unsigned)arg1 ;
-(long long)countAccountsInInitialSync;
-(void)_notificationBlacklisted;
-(BOOL)isCalendarVisibleWithID:(id)arg1 ;
-(id)closestOccurrenceToTomorrowForEventUID:(int)arg1 ;
-(BOOL)removeEvent:(id)arg1 withSpan:(long long)arg2 error:(id*)arg3 ;
-(void)_notificationCountExpired:(id)arg1 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(BOOL)arg2 ;
-(void)locationPrecisionDeterminedNotification:(id)arg1 ;
-(id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2 ;
-(long long)readWriteCalendarCount;
-(void)_createOccurrenceCacheDataSources;
-(id)defaultCalendarForNewEvents;
-(void)prepareForAppSuspend;
-(void)setShowDayAsList:(BOOL)arg1 ;
-(EKEvent *)selectedOccurrence;
-(BOOL)cachedOccurrencesAreLoaded;
-(void)updateSelectedDateTimeZone;
-(id)_dataSourceUsingFilter:(BOOL)arg1 ;
-(BOOL)showMonthAsDivided;
-(BOOL)showDayAsList;
@end
