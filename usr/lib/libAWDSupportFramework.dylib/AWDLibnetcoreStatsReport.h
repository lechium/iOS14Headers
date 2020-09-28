/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDLibnetcoreMbufStatsReport, AWDLibnetcoreMPTCPStatsReport, AWDLibnetcoreNetworkdStatsReport, AWDNWAPIUsage, NSMutableArray, AWDLibnetcoreTCPECNStatsReport, AWDLibnetcoreTCPStatsReport, AWDLibnetcoreTCPTFOStatsReport;

@interface AWDLibnetcoreStatsReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDLibnetcoreMbufStatsReport* _mbufStatisticsReport;
	AWDLibnetcoreMPTCPStatsReport* _mptcpStatisticsReport;
	AWDLibnetcoreNetworkdStatsReport* _networkdStatisticsReport;
	AWDNWAPIUsage* _nwAPIUsageReport;
	unsigned _reportReason;
	NSMutableArray* _tcpECNInterfaceReports;
	AWDLibnetcoreTCPECNStatsReport* _tcpECNStatisticsReport;
	AWDLibnetcoreTCPStatsReport* _tcpStatisticsReport;
	AWDLibnetcoreTCPTFOStatsReport* _tcpTFOStatisticsReport;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReportReason; 
@property (assign,nonatomic) unsigned reportReason;                                                    //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) BOOL hasMbufStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreMbufStatsReport * mbufStatisticsReport;                      //@synthesize mbufStatisticsReport=_mbufStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPStatsReport * tcpStatisticsReport;                        //@synthesize tcpStatisticsReport=_tcpStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpECNStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPECNStatsReport * tcpECNStatisticsReport;                  //@synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpTFOStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPTFOStatsReport * tcpTFOStatisticsReport;                  //@synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkdStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreNetworkdStatsReport * networkdStatisticsReport;              //@synthesize networkdStatisticsReport=_networkdStatisticsReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpECNInterfaceReports;                                  //@synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports - In the implementation block
@property (nonatomic,readonly) BOOL hasNwAPIUsageReport; 
@property (nonatomic,retain) AWDNWAPIUsage * nwAPIUsageReport;                                         //@synthesize nwAPIUsageReport=_nwAPIUsageReport - In the implementation block
@property (nonatomic,readonly) BOOL hasMptcpStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreMPTCPStatsReport * mptcpStatisticsReport;                    //@synthesize mptcpStatisticsReport=_mptcpStatisticsReport - In the implementation block
+(Class)tcpECNInterfaceReportType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)reportReason;
-(void)setReportReason:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasReportReason:(BOOL)arg1 ;
-(BOOL)hasMbufStatisticsReport;
-(BOOL)hasTcpStatisticsReport;
-(BOOL)hasTcpECNStatisticsReport;
-(BOOL)hasTcpTFOStatisticsReport;
-(BOOL)hasNetworkdStatisticsReport;
-(void)clearTcpECNInterfaceReports;
-(void)addTcpECNInterfaceReport:(id)arg1 ;
-(unsigned long long)tcpECNInterfaceReportsCount;
-(id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNwAPIUsageReport;
-(BOOL)hasMptcpStatisticsReport;
-(AWDLibnetcoreMbufStatsReport *)mbufStatisticsReport;
-(void)setMbufStatisticsReport:(AWDLibnetcoreMbufStatsReport *)arg1 ;
-(AWDLibnetcoreTCPStatsReport *)tcpStatisticsReport;
-(void)setTcpStatisticsReport:(AWDLibnetcoreTCPStatsReport *)arg1 ;
-(AWDLibnetcoreTCPECNStatsReport *)tcpECNStatisticsReport;
-(void)setTcpECNStatisticsReport:(AWDLibnetcoreTCPECNStatsReport *)arg1 ;
-(AWDLibnetcoreTCPTFOStatsReport *)tcpTFOStatisticsReport;
-(void)setTcpTFOStatisticsReport:(AWDLibnetcoreTCPTFOStatsReport *)arg1 ;
-(AWDLibnetcoreNetworkdStatsReport *)networkdStatisticsReport;
-(void)setNetworkdStatisticsReport:(AWDLibnetcoreNetworkdStatsReport *)arg1 ;
-(NSMutableArray *)tcpECNInterfaceReports;
-(void)setTcpECNInterfaceReports:(NSMutableArray *)arg1 ;
-(AWDNWAPIUsage *)nwAPIUsageReport;
-(void)setNwAPIUsageReport:(AWDNWAPIUsage *)arg1 ;
-(AWDLibnetcoreMPTCPStatsReport *)mptcpStatisticsReport;
-(void)setMptcpStatisticsReport:(AWDLibnetcoreMPTCPStatsReport *)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(BOOL)hasReportReason;
-(id)description;
-(id)dictionaryRepresentation;
@end
