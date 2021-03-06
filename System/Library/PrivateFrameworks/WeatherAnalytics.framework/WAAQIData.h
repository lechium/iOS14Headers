/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber, NSString, WAProviderDataOrigination;

@interface WAAQIData : NSObject <AADataEventType> {

	NSNumber* _index;
	NSNumber* _category;
	NSString* _scale;
	WAProviderDataOrigination* _providerDataOrigination;

}

@property (nonatomic,readonly) NSNumber * index;                                                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSNumber * category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * scale;                                                 //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) WAProviderDataOrigination * providerDataOrigination;              //@synthesize providerDataOrigination=_providerDataOrigination - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSString *)scale;
-(NSNumber *)index;
-(NSNumber *)category;
-(WAProviderDataOrigination *)providerDataOrigination;
-(id)initWithIndex:(id)arg1 category:(id)arg2 scale:(id)arg3 providerDataOrigination:(id)arg4 ;
@end

