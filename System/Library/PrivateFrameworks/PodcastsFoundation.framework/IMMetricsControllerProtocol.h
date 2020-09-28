/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IMMetricsControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * topic; 
@required
-(NSString *)topic;
-(BOOL)shouldSuppressUserInfo;
-(void)recordEvent:(id)arg1;
-(void)flushImmediately;
-(BOOL)shouldIgnoreDNU;

@end
