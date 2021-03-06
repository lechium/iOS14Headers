/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsFoundation/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(id)initWithReason:(long long)arg1 ;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setEnterTypeWithLaunchReason:(long long)arg1 ;
-(NSString *)referringAppName;
-(void)setReferringURL:(NSString *)arg1 ;
-(NSString *)referringURL;
@end

