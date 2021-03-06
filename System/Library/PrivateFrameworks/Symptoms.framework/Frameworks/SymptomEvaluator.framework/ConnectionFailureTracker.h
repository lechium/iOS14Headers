/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSMutableArray;

@interface ConnectionFailureTracker : NSObject {

	BOOL _isIPv6;
	int _numConsecutiveFailures;
	unsigned _ifIndex;
	double _firstConnectionFailTime;
	double _lastConnectionFailTime;
	NSString* _processName;
	long long _ifType;
	NSData* _destinationAddress;
	NSMutableArray* _failedFlows;

}

@property (assign,nonatomic) int numConsecutiveFailures;                  //@synthesize numConsecutiveFailures=_numConsecutiveFailures - In the implementation block
@property (assign,nonatomic) double firstConnectionFailTime;              //@synthesize firstConnectionFailTime=_firstConnectionFailTime - In the implementation block
@property (assign,nonatomic) double lastConnectionFailTime;               //@synthesize lastConnectionFailTime=_lastConnectionFailTime - In the implementation block
@property (nonatomic,retain) NSString * processName;                      //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL isIPv6;                                 //@synthesize isIPv6=_isIPv6 - In the implementation block
@property (assign,nonatomic) unsigned ifIndex;                            //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign,nonatomic) long long ifType;                            //@synthesize ifType=_ifType - In the implementation block
@property (nonatomic,retain) NSData * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedFlows;                //@synthesize failedFlows=_failedFlows - In the implementation block
-(long long)ifType;
-(void)setIsIPv6:(BOOL)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setIfIndex:(unsigned)arg1 ;
-(void)_logFailure;
-(BOOL)noteInitialSnapshot:(id)arg1 ;
-(void)setIfType:(long long)arg1 ;
-(void)setLastConnectionFailTime:(double)arg1 ;
-(double)lastConnectionFailTime;
-(NSString *)processName;
-(NSData *)destinationAddress;
-(void)setFirstConnectionFailTime:(double)arg1 ;
-(unsigned)ifIndex;
-(int)numConsecutiveFailures;
-(void)setNumConsecutiveFailures:(int)arg1 ;
-(void)setFailedFlows:(NSMutableArray *)arg1 ;
-(double)firstConnectionFailTime;
-(BOOL)isIPv6;
-(void)_reportFailure:(unsigned long long)arg1 owner:(id)arg2 ;
-(NSMutableArray *)failedFlows;
-(void)setDestinationAddress:(NSData *)arg1 ;
-(id)description;
@end

