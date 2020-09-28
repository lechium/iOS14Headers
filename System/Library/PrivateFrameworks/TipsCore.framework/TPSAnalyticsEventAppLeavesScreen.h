/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSNumber;

@interface TPSAnalyticsEventAppLeavesScreen : TPSAnalyticsEvent {

	NSNumber* _previouslyUnseenTipViews;
	NSNumber* _collectionViews;
	NSNumber* _tipViewsThisSession;

}

@property (nonatomic,readonly) NSNumber * previouslyUnseenTipViewsInThisSession; 
@property (nonatomic,readonly) NSNumber * collectionViews; 
@property (nonatomic,readonly) NSNumber * tipViewsInThisSession; 
+(BOOL)supportsSecureCoding;
-(id)mutableAnalyticsEventRepresentation;
-(id)eventName;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)tipViewsInThisSession;
-(NSNumber *)previouslyUnseenTipViewsInThisSession;
-(NSNumber *)collectionViews;
-(void)encodeWithCoder:(id)arg1 ;
@end
