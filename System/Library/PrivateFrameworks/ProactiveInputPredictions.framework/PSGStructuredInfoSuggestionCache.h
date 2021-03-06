/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASTuple2, NSString, NSDate;

@interface PSGStructuredInfoSuggestionCache : NSObject {

	_PASTuple2* _cachedSuggestions;
	NSString* _localeIdentifier;
	NSDate* _startTime;
	double _ttlSeconds;

}
+(id)sharedInstance;
+(id)emptySuggestionsPlaceholder;
+(BOOL)_matchesPredictedValue:(id)arg1 prefixValue:(id)arg2 ;
-(void)invalidate;
-(void)addEmptyPlaceholderForTrigger:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)addStructuredInfoSuggestions:(id)arg1 localeIdentifier:(id)arg2 ;
-(BOOL)_maybeClearCache;
-(id)searchWithTrigger:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3 ;
-(BOOL)_isCacheEmpty;
-(id)searchWithContext:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3 ;
-(id)initWithTTLSeconds:(double)arg1 ;
@end

