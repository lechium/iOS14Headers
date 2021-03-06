/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableDictionary, NSString;

@interface SGContactPipelineHelper : NSObject {

	NSMutableDictionary* _lengthsCounts;
	unsigned long long _phonesSeenInContacts;
	NSString* _mostCommonCountryCode;
	opaque_pthread_mutex_t _helperLock;

}
+(id)sharedInstance;
+(id)normalizedDigits:(id)arg1 ;
+(id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2 ;
+(id)findContactsForDetailType:(unsigned long long)arg1 andValue:(id)arg2 ;
+(BOOL)personExistsInContacts:(id)arg1 name:(id)arg2 handle:(id)arg3 ;
-(BOOL)numberMatchesContactsForm:(id)arg1 ;
-(void)dealloc;
-(BOOL)numberMatchesContactsForm:(id)arg1 amongContactsWithIdentifiers:(id)arg2 ;
-(id)init;
@end

