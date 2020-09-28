/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageTCPSnapshot : NWUsageProtocolSnapshot {

	NSString* _congestionAlgorithm;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	double _startTimeInterval;
	double _snapshotTimeInterval;
	NSString* _processName;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSUUID* _flowuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	const nstat_tcp_descriptor* _descriptor;

}

@property (nonatomic,readonly) double rttMinimum; 
@property (nonatomic,readonly) double rttAverage; 
@property (nonatomic,readonly) double rttVariation; 
@property (nonatomic,readonly) unsigned rxDuplicateBytes; 
@property (nonatomic,readonly) unsigned rxOutOfOrderBytes; 
@property (nonatomic,readonly) unsigned txRetransmittedBytes; 
@property (nonatomic,readonly) unsigned deltaRxDuplicateBytes; 
@property (nonatomic,readonly) unsigned deltaRxOutOfOrderBytes; 
@property (nonatomic,readonly) unsigned deltaTxRetransmittedBytes; 
@property (nonatomic,readonly) NSString * TCPState; 
@property (nonatomic,readonly) unsigned sendBufferSize; 
@property (nonatomic,readonly) unsigned sendBufferUsed; 
@property (nonatomic,readonly) unsigned txUnacked; 
@property (nonatomic,readonly) unsigned txWindow; 
@property (nonatomic,readonly) unsigned txCongestionWindow; 
@property (nonatomic,readonly) unsigned trafficManagementFlags; 
@property (nonatomic,readonly) NSString * congestionAlgorithm; 
@property (nonatomic,readonly) BOOL probeActivated; 
@property (nonatomic,readonly) BOOL connProbeFailed; 
@property (nonatomic,readonly) BOOL readProbeFailed; 
@property (nonatomic,readonly) BOOL writeProbeFailed; 
-(unsigned long long)eupid;
-(unsigned)trafficManagementFlags;
-(unsigned)receiveBufferSize;
-(unsigned)rxDuplicateBytes;
-(BOOL)interfaceWired;
-(BOOL)interfaceCellularViaFallback;
-(unsigned long long)flowStartContinuousTime;
-(unsigned)sendBufferUsed;
-(unsigned)receiveBufferUsed;
-(id)vuuid;
-(unsigned)connstatusWriteProbeFailed;
-(BOOL)writeProbeFailed;
-(int)epid;
-(unsigned)txUnacked;
-(id)remoteAddress;
-(BOOL)connProbeFailed;
-(BOOL)interfaceLoopback;
-(id)flowStartTimestamp;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapStartTime;
-(BOOL)probeActivated;
-(BOOL)interfaceCellular;
-(double)rttAverage;
-(NSString *)TCPState;
-(unsigned)txCongestionWindow;
-(unsigned)connstatusConnProbeFailed;
-(unsigned)connstatusReadProbeFailed;
-(unsigned)trafficClass;
-(unsigned long long)uniqueProcessID;
-(unsigned)txWindow;
-(unsigned)rxOutOfOrderBytes;
-(id)localAddress;
-(NSString *)congestionAlgorithm;
-(unsigned)interfaceIndex;
-(double)rttMinimum;
-(BOOL)interfaceExpensive;
-(id)euuid;
-(double)rttVariation;
-(double)flowDuration;
-(unsigned)connstatusProbeActivated;
-(unsigned)sendBufferSize;
-(unsigned long long)networkActivityMapPart2;
-(unsigned)txRetransmittedBytes;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceCompanionLink;
-(BOOL)interfaceAWDL;
-(BOOL)readProbeFailed;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(int)processID;
-(BOOL)interfaceWiFi;
-(BOOL)failedSkywalkAction;
-(id)processName;
-(id)flowSnapshotTimestamp;
-(id)provider;
-(unsigned)deltaRxDuplicateBytes;
-(unsigned)deltaTxRetransmittedBytes;
-(unsigned)deltaRxOutOfOrderBytes;
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
