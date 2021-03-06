/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageUDPSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageQUICSnapshot : NWUsageUDPSnapshot {

	NSString* _processName;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	double _startTimeInterval;
	double _snapshotTimeInterval;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSUUID* _flowuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_tcp_descriptor* _descriptor;
	unsigned _rxDuplicateBytes;
	unsigned _rxOutOfOrderBytes;
	unsigned _txRetransmittedBytes;

}

@property (nonatomic,readonly) double rttMinimum; 
@property (nonatomic,readonly) double rttAverage; 
@property (nonatomic,readonly) double rttVariation; 
@property (nonatomic,readonly) unsigned rxDuplicateBytes;                  //@synthesize rxDuplicateBytes=_rxDuplicateBytes - In the implementation block
@property (nonatomic,readonly) unsigned rxOutOfOrderBytes;                 //@synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes - In the implementation block
@property (nonatomic,readonly) unsigned txRetransmittedBytes;              //@synthesize txRetransmittedBytes=_txRetransmittedBytes - In the implementation block
-(unsigned long long)eupid;
-(unsigned)receiveBufferSize;
-(unsigned)rxDuplicateBytes;
-(BOOL)interfaceWired;
-(BOOL)interfaceCellularViaFallback;
-(unsigned long long)flowStartContinuousTime;
-(unsigned)receiveBufferUsed;
-(id)vuuid;
-(int)epid;
-(id)remoteAddress;
-(BOOL)interfaceLoopback;
-(id)flowStartTimestamp;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapStartTime;
-(BOOL)interfaceCellular;
-(double)rttAverage;
-(unsigned)trafficClass;
-(unsigned long long)uniqueProcessID;
-(unsigned)rxOutOfOrderBytes;
-(id)localAddress;
-(unsigned)interfaceIndex;
-(double)rttMinimum;
-(BOOL)interfaceExpensive;
-(id)euuid;
-(double)rttVariation;
-(double)flowDuration;
-(unsigned long long)networkActivityMapPart2;
-(unsigned)txRetransmittedBytes;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceAWDL;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(int)processID;
-(BOOL)interfaceWiFi;
-(BOOL)failedSkywalkAction;
-(id)processName;
-(id)flowSnapshotTimestamp;
-(id)provider;
-(double)flowStartTimeIntervalSinceReferenceDate;
-(double)flowSnapshotTimeIntervalSince1970;
-(double)flowStartTimeIntervalSince1970;
-(id)uuid;
-(double)flowSnapshotTimeIntervalSinceReferenceDate;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(id)descriptorDescription;
-(BOOL)failedFlowswitchValuesLookup;
-(BOOL)failedRouteValuesLookup;
-(id)flowuuid;
-(BOOL)flowUsesChannels;
@end

