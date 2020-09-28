/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoAdProviderFactory.h>

@protocol NUVideoAdProviderFactory <NSObject>
@required
-(id)createVideoAdProviderWithContextProviderForVideoBefore:(id)arg1 contextProviderForVideoAfter:(id)arg2;

@end


@protocol NUAdProvider, NUVideoAdEventTracker, SVVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory, NUVideoPlaybackCounter, SVModalPresentationViewControllerProviding;
@class NSArray, NSString;

@interface NUVideoAdProviderFactory : NSObject <NUVideoAdProviderFactory> {

	id<NUAdProvider> _adProvider;
	NSArray* _contextProviders;
	id<NUVideoAdEventTracker> _eventTracker;
	id<SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
	id<SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
	id<NUVideoPlaybackCounter> _playbackCounter;
	id<SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;

}

@property (nonatomic,readonly) id<NUAdProvider> adProvider;                                                                         //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contextProviders;                                                                     //@synthesize contextProviders=_contextProviders - In the implementation block
@property (nonatomic,readonly) id<NUVideoAdEventTracker> eventTracker;                                                              //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) id<SVVisibilityMonitoring> videoPlayerVisibilityMonitor;                                             //@synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;                                       //@synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory - In the implementation block
@property (nonatomic,readonly) id<NUVideoPlaybackCounter> playbackCounter;                                                          //@synthesize playbackCounter=_playbackCounter - In the implementation block
@property (nonatomic,readonly) id<SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider;              //@synthesize modalPresentationViewControllerProvider=_modalPresentationViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUVideoAdEventTracker>)eventTracker;
-(id<NUAdProvider>)adProvider;
-(id<SXVASTAnalyticsEventInfoFactory>)analyticsEventInfoFactory;
-(id<SVVisibilityMonitoring>)videoPlayerVisibilityMonitor;
-(NSArray *)contextProviders;
-(id<NUVideoPlaybackCounter>)playbackCounter;
-(id<SVModalPresentationViewControllerProviding>)modalPresentationViewControllerProvider;
-(id)createVideoAdProviderWithContextProviderForVideoBefore:(id)arg1 contextProviderForVideoAfter:(id)arg2 ;
-(id)initWithAdProvider:(id)arg1 contextProviders:(id)arg2 eventTracker:(id)arg3 videoPlayerVisibilityMonitor:(id)arg4 analyticsEventInfoFactory:(id)arg5 playbackCounter:(id)arg6 modalPresentationViewControllerProvider:(id)arg7 ;
@end
