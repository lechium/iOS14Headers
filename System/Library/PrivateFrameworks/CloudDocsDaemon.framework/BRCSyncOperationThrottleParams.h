/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCSyncOperationThrottleParams : NSObject {

	double minWait;
	double maxWait;
	double ratioOnSuccess;
	double ratioOnFailure;
	double ratioOnQuotaErrorClear;
	double inactivityKickbackDelay;
	double inactivityKickbackRatio;

}

@property (assign,nonatomic) double minWait; 
@property (assign,nonatomic) double maxWait; 
@property (assign,nonatomic) double ratioOnSuccess; 
@property (assign,nonatomic) double ratioOnQuotaErrorClear; 
@property (assign,nonatomic) double ratioOnFailure; 
@property (assign,nonatomic) double inactivityKickbackDelay; 
@property (assign,nonatomic) double inactivityKickbackRatio; 
-(BOOL)check;
-(BOOL)isEqual:(id)arg1 ;
-(double)minWait;
-(double)maxWait;
-(unsigned long long)hash;
-(double)inactivityKickbackDelay;
-(double)inactivityKickbackRatio;
-(double)ratioOnSuccess;
-(double)ratioOnQuotaErrorClear;
-(double)ratioOnFailure;
-(double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3 ;
-(void)setupWithParams:(id)arg1 defaults:(id)arg2 ;
-(id)paramsToDictionary;
-(id)initWithParams:(id)arg1 defaults:(id)arg2 ;
-(void)setMinWait:(double)arg1 ;
-(void)setMaxWait:(double)arg1 ;
-(void)setRatioOnSuccess:(double)arg1 ;
-(void)setRatioOnFailure:(double)arg1 ;
-(void)setRatioOnQuotaErrorClear:(double)arg1 ;
-(void)setInactivityKickbackDelay:(double)arg1 ;
-(void)setInactivityKickbackRatio:(double)arg1 ;
@end

