/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoSkipHandling.h>

@protocol SVVideoQueueProviding, SVVisibilityReporting, SVVideoVisiblePercentageManager;
@class NSString;

@interface SVVideoSkipHandler : NSObject <SVVideoSkipHandling> {

	id<SVVideoQueueProviding> _queueProvider;
	id<SVVisibilityReporting> _visiblityReporter;
	id<SVVideoVisiblePercentageManager> _visiblePercentageManager;

}

@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                                   //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) id<SVVisibilityReporting> visiblityReporter;                               //@synthesize visiblityReporter=_visiblityReporter - In the implementation block
@property (nonatomic,readonly) id<SVVideoVisiblePercentageManager> visiblePercentageManager;              //@synthesize visiblePercentageManager=_visiblePercentageManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoQueueProviding>)queueProvider;
-(id<SVVideoVisiblePercentageManager>)visiblePercentageManager;
-(id<SVVisibilityReporting>)visiblityReporter;
-(void)skipToVideo:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3 ;
@end
