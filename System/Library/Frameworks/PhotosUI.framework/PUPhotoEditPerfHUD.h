/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PXTimeInterval, PXHUDView, PXHUDVisualization, PXHUDBoxedValueVisualization, PXHUDTimeIntervalVisualization, NSString;

@interface PUPhotoEditPerfHUD : UIView {

	BOOL _firstSinceBoot;
	BOOL _firstSinceLaunch;
	PXTimeInterval* _enterEditTimeInterval;
	PXTimeInterval* _resourceCheckingInterval;
	PXTimeInterval* _resourceDownloadInterval;
	PXTimeInterval* _resourceLoadingInterval;
	PXTimeInterval* _autoCalcInterval;
	PXTimeInterval* _filterInterval;
	PXTimeInterval* _exitEditTimeInterval;
	PXHUDView* _hudView;
	PXHUDVisualization* _detailVisualization;
	PXHUDBoxedValueVisualization* _firstSinceBootVisualization;
	PXHUDBoxedValueVisualization* _firstSinceLaunchVisualization;
	PXHUDTimeIntervalVisualization* _enterEditVisualization;
	PXHUDTimeIntervalVisualization* _resourceLoadingVisualization;
	PXHUDTimeIntervalVisualization* _resourceCheckingVisualization;
	PXHUDTimeIntervalVisualization* _resourceDownloadVisualization;
	PXHUDTimeIntervalVisualization* _autoCalcVisualization;
	PXHUDTimeIntervalVisualization* _filterVisualization;
	PXHUDTimeIntervalVisualization* _exitEditVisualization;

}

@property (nonatomic,retain) PXHUDView * hudView;                                                         //@synthesize hudView=_hudView - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * detailVisualization;                                    //@synthesize detailVisualization=_detailVisualization - In the implementation block
@property (nonatomic,retain) PXHUDBoxedValueVisualization * firstSinceBootVisualization;                  //@synthesize firstSinceBootVisualization=_firstSinceBootVisualization - In the implementation block
@property (nonatomic,retain) PXHUDBoxedValueVisualization * firstSinceLaunchVisualization;                //@synthesize firstSinceLaunchVisualization=_firstSinceLaunchVisualization - In the implementation block
@property (nonatomic,retain) PXHUDTimeIntervalVisualization * enterEditVisualization;                     //@synthesize enterEditVisualization=_enterEditVisualization - In the implementation block
@property (nonatomic,retain) PXHUDTimeIntervalVisualization * resourceLoadingVisualization;               //@synthesize resourceLoadingVisualization=_resourceLoadingVisualization - In the implementation block
@property (nonatomic,retain) PXHUDTimeIntervalVisualization * resourceCheckingVisualization;              //@synthesize resourceCheckingVisualization=_resourceCheckingVisualization - In the implementation block
@property (nonatomic,retain) PXHUDTimeIntervalVisualization * resourceDownloadVisualization;              //@synthesize resourceDownloadVisualization=_resourceDownloadVisualization - In the implementation block
@property (nonatomic,retain) PXHUDTimeIntervalVisualization * autoCalcVisualization;                      //@synthesize autoCalcVisualization=_autoCalcVisualization - In the implementation block
@property (nonatomic,retain) PXHUDTimeIntervalVisualization * filterVisualization;                        //@synthesize filterVisualization=_filterVisualization - In the implementation block
@property (nonatomic,retain) PXHUDTimeIntervalVisualization * exitEditVisualization;                      //@synthesize exitEditVisualization=_exitEditVisualization - In the implementation block
@property (nonatomic,copy) NSString * detailText; 
@property (assign,getter=isFirstSinceBoot,nonatomic) BOOL firstSinceBoot;                                 //@synthesize firstSinceBoot=_firstSinceBoot - In the implementation block
@property (assign,getter=isFirstSinceLaunch,nonatomic) BOOL firstSinceLaunch;                             //@synthesize firstSinceLaunch=_firstSinceLaunch - In the implementation block
@property (nonatomic,retain) PXTimeInterval * enterEditTimeInterval;                                      //@synthesize enterEditTimeInterval=_enterEditTimeInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * resourceCheckingInterval;                                   //@synthesize resourceCheckingInterval=_resourceCheckingInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * resourceDownloadInterval;                                   //@synthesize resourceDownloadInterval=_resourceDownloadInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * resourceLoadingInterval;                                    //@synthesize resourceLoadingInterval=_resourceLoadingInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * autoCalcInterval;                                           //@synthesize autoCalcInterval=_autoCalcInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * filterInterval;                                             //@synthesize filterInterval=_filterInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * exitEditTimeInterval;                                       //@synthesize exitEditTimeInterval=_exitEditTimeInterval - In the implementation block
-(PXHUDView *)hudView;
-(PXTimeInterval *)autoCalcInterval;
-(void)setFilterInterval:(PXTimeInterval *)arg1 ;
-(void)setEnterEditTimeInterval:(PXTimeInterval *)arg1 ;
-(void)setResourceCheckingInterval:(PXTimeInterval *)arg1 ;
-(void)setResourceDownloadInterval:(PXTimeInterval *)arg1 ;
-(void)setResourceLoadingInterval:(PXTimeInterval *)arg1 ;
-(void)setAutoCalcInterval:(PXTimeInterval *)arg1 ;
-(void)setExitEditTimeInterval:(PXTimeInterval *)arg1 ;
-(PXTimeInterval *)enterEditTimeInterval;
-(PXTimeInterval *)resourceCheckingInterval;
-(PXTimeInterval *)resourceDownloadInterval;
-(PXTimeInterval *)resourceLoadingInterval;
-(PXTimeInterval *)filterInterval;
-(PXTimeInterval *)exitEditTimeInterval;
-(PXHUDVisualization *)detailVisualization;
-(void)setDetailVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDBoxedValueVisualization *)firstSinceBootVisualization;
-(PXHUDTimeIntervalVisualization *)enterEditVisualization;
-(void)setFirstSinceBootVisualization:(PXHUDBoxedValueVisualization *)arg1 ;
-(PXHUDBoxedValueVisualization *)firstSinceLaunchVisualization;
-(void)setFirstSinceLaunchVisualization:(PXHUDBoxedValueVisualization *)arg1 ;
-(void)setEnterEditVisualization:(PXHUDTimeIntervalVisualization *)arg1 ;
-(PXHUDTimeIntervalVisualization *)resourceLoadingVisualization;
-(void)setResourceLoadingVisualization:(PXHUDTimeIntervalVisualization *)arg1 ;
-(PXHUDTimeIntervalVisualization *)autoCalcVisualization;
-(PXHUDTimeIntervalVisualization *)resourceCheckingVisualization;
-(void)setResourceCheckingVisualization:(PXHUDTimeIntervalVisualization *)arg1 ;
-(PXHUDTimeIntervalVisualization *)resourceDownloadVisualization;
-(void)setResourceDownloadVisualization:(PXHUDTimeIntervalVisualization *)arg1 ;
-(void)setAutoCalcVisualization:(PXHUDTimeIntervalVisualization *)arg1 ;
-(PXHUDTimeIntervalVisualization *)filterVisualization;
-(void)setFilterVisualization:(PXHUDTimeIntervalVisualization *)arg1 ;
-(PXHUDTimeIntervalVisualization *)exitEditVisualization;
-(void)setExitEditVisualization:(PXHUDTimeIntervalVisualization *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)detailText;
-(BOOL)isFirstSinceBoot;
-(void)setFirstSinceBoot:(BOOL)arg1 ;
-(BOOL)isFirstSinceLaunch;
-(void)setFirstSinceLaunch:(BOOL)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHudView:(PXHUDView *)arg1 ;
@end
