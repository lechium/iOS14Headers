/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTMetricsDataPredicate, MTTreatmentAction, NSDictionary;

@interface MTTreatment : NSObject {

	MTMetricsDataPredicate* _predicate;
	MTTreatmentAction* _eventAction;
	NSDictionary* _fieldActions;

}

@property (nonatomic,retain) MTMetricsDataPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) MTTreatmentAction * eventAction;                 //@synthesize eventAction=_eventAction - In the implementation block
@property (nonatomic,retain) NSDictionary * fieldActions;                     //@synthesize fieldActions=_fieldActions - In the implementation block
+(id)performAction:(id)arg1 data:(id)arg2 keypath:(id)arg3 keyIndex:(long long)arg4 context:(id)arg5 ;
+(id)treatmentWithConfigData:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(MTMetricsDataPredicate *)predicate;
-(void)setPredicate:(MTMetricsDataPredicate *)arg1 ;
-(void)setEventAction:(MTTreatmentAction *)arg1 ;
-(void)setFieldActions:(NSDictionary *)arg1 ;
-(MTTreatmentAction *)eventAction;
-(NSDictionary *)fieldActions;
-(id)performTreatment:(id)arg1 ;
@end

