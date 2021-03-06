/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@class AFAnalyticsObserverConnection, NSSet, NSString;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating> {

	AFAnalyticsObserverConnection* _observerConnection;
	NSSet* _filteredTagIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithObservation:(/*^block*/id)arg1 filterByInstrumentationTypes:(id)arg2 ;
-(id)initWithObservation:(/*^block*/id)arg1 ;
-(void)waitUntilInvalidated;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
@end

