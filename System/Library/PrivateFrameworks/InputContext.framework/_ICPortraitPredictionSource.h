/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICPredictionSourcing.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@class NSCondition, NSString, PPQuickTypeBroker;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting> {

	NSCondition* _ppBrokerLoadedCondition;
	NSString* _name;
	PPQuickTypeBroker* _ppBroker;

}

@property (retain) PPQuickTypeBroker * ppBroker;              //@synthesize ppBroker=_ppBroker - In the implementation block
-(void)warmUp;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)hibernate;
-(id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3 ;
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)propogateMetrics:(id)arg1 data:(id)arg2 ;
-(id)init;
-(id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5 ;
-(void)setPpBroker:(PPQuickTypeBroker *)arg1 ;
-(id)getPPBroker;
-(BOOL)doesSupportTriggerSourceType:(unsigned char)arg1 ;
-(id)name;
-(BOOL)_populateError:(id*)arg1 withExplanations:(id)arg2 ;
-(id)_makePPQuickTypeBroker;
-(PPQuickTypeBroker *)ppBroker;
@end

