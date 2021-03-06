/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXMediaViewControllerEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCuratedLibraryEventTracker.h>

@protocol PXCuratedLibraryEventTracker <PXViewControllerEventTracker>
@required
-(void)logAnalysisProgress:(float)arg1;
-(void)logLibraryItemsCount:(long long)arg1;

@end


@class NSTimer, PXCuratedLibraryViewModel, PXCuratedLibraryLayout, NSString, PXSectionedObjectReference, NSMutableDictionary;

@interface PXCuratedLibraryEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXCuratedLibraryEventTracker> {

	BOOL _loggedFirstTimeExperience;
	NSTimer* _slowScrollRegimeTimer;
	float _analysisProgress;
	float _firstTimeExperienceAnalysisProgress;
	PXCuratedLibraryViewModel* _viewModel;
	PXCuratedLibraryLayout* _layout;
	unsigned long long _userEventSource;
	long long _currentlyViewedZoomLevel;
	long long _currentZoomLevelSignpost;
	NSString* _currentAllPhotosZoomStateName;
	long long _currentAllPhotosZoomStateSignpost;
	PXSectionedObjectReference* _dominantObjectReference;
	long long _libraryItemsCount;
	long long _firstTimeExperienceLibraryItemsCount;

}

@property (assign,nonatomic) unsigned long long userEventSource;                                //@synthesize userEventSource=_userEventSource - In the implementation block
@property (assign,nonatomic) long long currentlyViewedZoomLevel;                                //@synthesize currentlyViewedZoomLevel=_currentlyViewedZoomLevel - In the implementation block
@property (assign,nonatomic) long long currentZoomLevelSignpost;                                //@synthesize currentZoomLevelSignpost=_currentZoomLevelSignpost - In the implementation block
@property (nonatomic,retain) NSString * currentAllPhotosZoomStateName;                          //@synthesize currentAllPhotosZoomStateName=_currentAllPhotosZoomStateName - In the implementation block
@property (assign,nonatomic) long long currentAllPhotosZoomStateSignpost;                       //@synthesize currentAllPhotosZoomStateSignpost=_currentAllPhotosZoomStateSignpost - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * dominantObjectReference;              //@synthesize dominantObjectReference=_dominantObjectReference - In the implementation block
@property (assign,nonatomic) long long libraryItemsCount;                                       //@synthesize libraryItemsCount=_libraryItemsCount - In the implementation block
@property (assign,nonatomic) float analysisProgress;                                            //@synthesize analysisProgress=_analysisProgress - In the implementation block
@property (assign,nonatomic) float firstTimeExperienceAnalysisProgress;                         //@synthesize firstTimeExperienceAnalysisProgress=_firstTimeExperienceAnalysisProgress - In the implementation block
@property (assign,nonatomic) long long firstTimeExperienceLibraryItemsCount;                    //@synthesize firstTimeExperienceLibraryItemsCount=_firstTimeExperienceLibraryItemsCount - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryLayout * layout;                                 //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSMutableDictionary * payload; 
-(void)setCurrentlyViewedZoomLevel:(long long)arg1 ;
-(void)_invalidateFirstTimeExperienceReadinessLogging;
-(void)_updateFirstTimeExperienceReadinessLogging;
-(float)analysisProgress;
-(id)userEventTracker;
-(unsigned long long)userEventSource;
-(void)dealloc;
-(void)_invalidateCurrentlyViewedZoomLevel;
-(NSString *)currentAllPhotosZoomStateName;
-(void)_updateDominantObjectReference;
-(long long)currentAllPhotosZoomStateSignpost;
-(void)setUserEventSource:(unsigned long long)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(long long)firstTimeExperienceLibraryItemsCount;
-(void)setDominantObjectReference:(PXSectionedObjectReference *)arg1 ;
-(void)_invalidateDominantObjectReference;
-(PXCuratedLibraryLayout *)layout;
-(void)_updateCurrentAllPhotosZoomState;
-(void)setAnalysisProgress:(float)arg1 ;
-(PXSectionedObjectReference *)dominantObjectReference;
-(void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
-(void)setCurrentAllPhotosZoomStateName:(NSString *)arg1 ;
-(void)setFirstTimeExperienceLibraryItemsCount:(long long)arg1 ;
-(long long)currentlyViewedZoomLevel;
-(void)_logDidEndViewingZoomLevel:(long long)arg1 ;
-(void)logAnalysisProgress:(float)arg1 ;
-(void)_updateUserEventSource;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_invalidateCurrentAllPhotosZoomState;
-(void)_logDidStartViewingAllPhotosZoomStateName:(id)arg1 ;
-(long long)currentZoomLevelSignpost;
-(void)setLibraryItemsCount:(long long)arg1 ;
-(void)setCurrentAllPhotosZoomStateSignpost:(long long)arg1 ;
-(float)firstTimeExperienceAnalysisProgress;
-(void)setFirstTimeExperienceAnalysisProgress:(float)arg1 ;
-(void)logLibraryItemsCount:(long long)arg1 ;
-(id)initWithViewModel:(id)arg1 layout:(id)arg2 ;
-(long long)libraryItemsCount;
-(id)initWithViewName:(id)arg1 ;
-(void)_updateCurrentlyViewedZoomLevel;
-(void)_logDidStartViewingZoomLevel:(long long)arg1 ;
-(void)_invalidateUserEventSource;
-(void)_logDidEndViewingAllPhotosZoomStateName:(id)arg1 ;
-(void)setCurrentZoomLevelSignpost:(long long)arg1 ;
@end

