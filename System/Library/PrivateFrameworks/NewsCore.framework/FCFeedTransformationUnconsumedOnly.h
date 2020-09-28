/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming> {

	id<FCFeedTransforming> _innerFilter;

}

@property (nonatomic,retain) id<FCFeedTransforming> innerFilter;              //@synthesize innerFilter=_innerFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(/*^block*/id)arg5 dateOfArticleIDConsumptionProvider:(/*^block*/id)arg6 maxVersionConsumedProvider:(/*^block*/id)arg7 dateOfMaxVersionConsumptionProvider:(/*^block*/id)arg8 ;
-(id)init;
-(id<FCFeedTransforming>)innerFilter;
-(void)setInnerFilter:(id<FCFeedTransforming>)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end
