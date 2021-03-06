/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class NSArray;

@interface CPAnalyticsCompoundEventMatcher : CPAnalyticsEventMatcher {

	unsigned long long _type;
	NSArray* _subEventMatchers;

}

@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subEventMatchers;              //@synthesize subEventMatchers=_subEventMatchers - In the implementation block
+(id)andEventMatcherWithSubEventMatchers:(id)arg1 ;
+(id)orEventMatcherWithSubEventMatchers:(id)arg1 ;
+(id)notEventMatcherWithSubEventMatcher:(id)arg1 ;
-(id)init;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 subEventMatchers:(id)arg2 ;
-(NSArray *)subEventMatchers;
-(BOOL)doesMatch:(id)arg1 ;
@end

