/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDInteractionRanking
@property (assign,nonatomic) unsigned long long rankAggregationMethod; 
@required
-(BOOL)contactIsAllowed:(id)arg1;
-(BOOL)canRankContacts;
-(double)rankContact:(id)arg1;
-(unsigned long long)rankAggregationMethod;
-(void)setRankAggregationMethod:(unsigned long long)arg1;
-(id)rankInteraction:(id)arg1;

@end
