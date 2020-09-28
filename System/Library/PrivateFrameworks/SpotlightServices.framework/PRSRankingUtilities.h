/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRSRankingUtilities : NSObject
+(void)computeDateCountsForDates:(id)arg1 countLastYear:(unsigned long long*)arg2 countLastMonth:(unsigned long long*)arg3 countLastWeek:(unsigned long long*)arg4 countLastDay:(unsigned long long*)arg5 currentTime:(double)arg6 ;
+(float)floatValue:(float)arg1 withSigFigs:(long long)arg2 ;
+(BOOL)userQueryHasOnlySingleCharacterTerms:(id)arg1 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 isEqualToString:(id)arg2 ;
+(BOOL)aToZInString:(id)arg1 ;
+(BOOL)multiWordString:(id)arg1 hasPrefix:(id)arg2 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 hasPrefix:(id)arg2 locale:(id)arg3 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 containsString:(id)arg2 locale:(id)arg3 ;
+(id)categoryForBundleID:(id)arg1 ;
+(id)bundleIDForCategory:(id)arg1 ;
@end
