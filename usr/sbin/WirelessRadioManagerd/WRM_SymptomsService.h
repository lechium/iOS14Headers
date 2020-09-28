//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AnalyticsWorkspace, NSDate, NSDictionary, NSString, NetworkPerformanceFeed, SDRDiagnosticReporter;

@interface WRM_SymptomsService : NSObject
{
    int mWifiAdvisory;	// 8 = 0x8
    int mCellularAdvisory;	// 12 = 0xc
    _Bool mSIPTimeOutOverWiFiDetected;	// 16 = 0x10
    _Bool mWiFiIPsecTunnelDisconnected;	// 17 = 0x11
    NSDictionary *mWifiInstantCurrent;	// 24 = 0x18
    NSString *mImsTunnelID;	// 32 = 0x20
    NSString *mCurrentConnectionIdentifier;	// 40 = 0x28
    NSString *mPreviousConnectionIdentifier;	// 48 = 0x30
    double mPrevConnAttempt;	// 56 = 0x38
    double mPrevConnSucc;	// 64 = 0x40
    double mCurrentConnAttempt;	// 72 = 0x48
    double mCurrentConnSucc;	// 80 = 0x50
    double mCurrentMinRTT;	// 88 = 0x58
    double mCurrentAvgRTT;	// 96 = 0x60
    double mCurrentVarRTT;	// 104 = 0x68
    double mCurrentDupeRatio;	// 112 = 0x70
    double mCurrentRetryRatio;	// 120 = 0x78
    double mPrevPacketsIn;	// 128 = 0x80
    double mCurrentPacketsIn;	// 136 = 0x88
    double mCurrentBytesIn;	// 144 = 0x90
    double mPrevBytesIn;	// 152 = 0x98
    double mNetworkThroughput;	// 160 = 0xa0
    double mAvgNetworkThroughput;	// 168 = 0xa8
    double mAveragePktSize;	// 176 = 0xb0
    double mCurrentMetricsAge;	// 184 = 0xb8
    unsigned long long mAdviceQueried;	// 192 = 0xc0
    unsigned long long mAdviceAnswered;	// 200 = 0xc8
    unsigned long long mFullScoreQueried;	// 208 = 0xd0
    unsigned long long mFullScoreAnswered;	// 216 = 0xd8
    NSDate *mSFThroughEstimationTimer;	// 224 = 0xe0
    double mPrevTimeSinceThroughputEstimationStarted;	// 232 = 0xe8
    NSDate *mSFQueryTimer;	// 240 = 0xf0
    double mPrevTimeSinceSFQueryStarted;	// 248 = 0xf8
    AnalyticsWorkspace *mAnalyticsWorkspace;	// 256 = 0x100
    NetworkPerformanceFeed *mNetworkPerfFeed;	// 264 = 0x108
    _Bool mBackHaulLinkGood;	// 272 = 0x110
    SDRDiagnosticReporter *mABCreporter;	// 280 = 0x118
}

- (void)triggerAutoBugCapture:(id)arg1 subType:(id)arg2 subtypeContext:(id)arg3;	// IMP=0x00000001000f456c
- (double)getRxRetryRatio;	// IMP=0x00000001000f4550
- (double)getRxDupeRatio;	// IMP=0x00000001000f4534
- (double)getTCPRttVar;	// IMP=0x00000001000f4518
- (double)getTCPMinRTT;	// IMP=0x00000001000f44fc
- (double)getTCPAvgRTT;	// IMP=0x00000001000f44e0
- (_Bool)sipTimeOutDetected;	// IMP=0x00000001000f44bc
- (_Bool)dpdFailureDetected;	// IMP=0x00000001000f4498
- (_Bool)isIMSTransportQualityGood;	// IMP=0x00000001000f444c
- (void)updateDPDMetrics:(_Bool)arg1;	// IMP=0x00000001000f441c
- (void)updateSIPMetrics:(_Bool)arg1;	// IMP=0x00000001000f43ec
- (double)getNetworkThroughput;	// IMP=0x00000001000f43d0
- (void)notifyIRATManager:(long long)arg1;	// IMP=0x00000001000f4224
- (_Bool)isConnectedLinkGood:(_Bool)arg1;	// IMP=0x00000001000f4114
- (void)resetSFContext;	// IMP=0x00000001000f40b0
- (int)calculateCellularHistoryScore;	// IMP=0x00000001000f4098
- (double)getCurrentAgeOfConnectedLinkInSeconds;	// IMP=0x00000001000f407c
- (_Bool)watchpointForIKETunnel:(id)arg1 onThreshold:(unsigned int)arg2;	// IMP=0x00000001000f3edc
- (void)displayWatchpointHit:(id)arg1;	// IMP=0x00000001000f3c9c
- (_Bool)scorecardForIKETunnel:(id)arg1 isInstant:(_Bool)arg2;	// IMP=0x00000001000f3a7c
- (void)setIKEv2WatchPoint:(id)arg1;	// IMP=0x00000001000f3a30
- (id)getImsTunnelId;	// IMP=0x00000001000f3a14
- (_Bool)evaluateBackHaulLink;	// IMP=0x00000001000f39f4
- (double)evaluateNetworkBandwidth;	// IMP=0x00000001000f381c
- (void)displayIKEMetrics:(id)arg1;	// IMP=0x00000001000f3494
- (int)calculateWifiHistoryScore;	// IMP=0x00000001000f347c
- (int)calculateCellularScore;	// IMP=0x00000001000f3440
- (int)calculateWifiScore;	// IMP=0x00000001000f3404
- (void)watchTcpConnectionFallBack;	// IMP=0x00000001000f32b0
- (void)notifyWifiCallState:(_Bool)arg1;	// IMP=0x00000001000f31f8
- (int)mapSFNetworkAdvisoryToNetworkScore:(int)arg1;	// IMP=0x00000001000f3108
- (_Bool)getNetworkFullScoreFromSF:(int)arg1;	// IMP=0x00000001000f2788
- (_Bool)isBackhaulGood;	// IMP=0x00000001000f2764
- (_Bool)getNetworkUsageAdviceFromSF:(int)arg1;	// IMP=0x00000001000f2310
- (void)handleNetworkdRestart;	// IMP=0x00000001000f22c8
- (_Bool)createNetworkSymptomsFeed;	// IMP=0x00000001000f20bc
- (double)getMetricFromDictionary:(id)arg1:(int)arg2;	// IMP=0x00000001000f1ab0
- (_Bool)isCurrentAttachPointHasChanged:(id)arg1;	// IMP=0x00000001000f18e0
- (double)getWifiNetMetricCurrInstant:(int)arg1;	// IMP=0x00000001000f189c
- (double)getAgeOfMetricDictionary:(id)arg1;	// IMP=0x00000001000f1738
- (double)getAgeOfMetricCurrInstant;	// IMP=0x00000001000f16fc
- (int)getNetworkHistScore:(int)arg1;	// IMP=0x00000001000f1630
- (int)getNetworkScore:(int)arg1;	// IMP=0x00000001000f1564
- (_Bool)updateAllNetworkSymptoms:(int)arg1;	// IMP=0x00000001000f12f8
- (void)resetIMSMetrics;	// IMP=0x00000001000f12d0
- (void)dealloc;	// IMP=0x00000001000f11c0
- (id)init;	// IMP=0x00000001000f0f7c

@end
