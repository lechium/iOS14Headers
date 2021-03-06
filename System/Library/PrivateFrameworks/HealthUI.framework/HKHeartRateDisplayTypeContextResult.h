/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject {

	long long _context;
	HKStatistics* _statistics;

}

@property (assign,nonatomic) long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HKStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
-(HKStatistics *)statistics;
-(void)setStatistics:(HKStatistics *)arg1 ;
-(id)debugDescription;
-(void)setContext:(long long)arg1 ;
-(long long)context;
-(id)initWithContext:(long long)arg1 statistics:(id)arg2 ;
@end

