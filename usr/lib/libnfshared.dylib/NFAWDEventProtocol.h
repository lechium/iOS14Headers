/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFAWDEventProtocol <NSObject>
@optional
-(id)getMetric;
-(unsigned)getMetricId;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(void)updateExceptionUUID:(id)arg1;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;

@end

