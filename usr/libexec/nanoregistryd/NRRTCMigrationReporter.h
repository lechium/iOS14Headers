//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRRTCMigrationReportManager, NSMutableArray, NSUUID;
@protocol EPServiceRegistry, OS_dispatch_queue;

@interface NRRTCMigrationReporter : NSObject
{
    id <EPServiceRegistry> _serviceRegistry;	// 8 = 0x8
    BRRTCMigrationReportManager *_migrationReportManager;	// 16 = 0x10
    NSMutableArray *_transactionErrors;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSUUID *_currentMigrationPairingID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100079338
@property(retain, nonatomic) NSUUID *currentMigrationPairingID; // @synthesize currentMigrationPairingID=_currentMigrationPairingID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *transactionErrors; // @synthesize transactionErrors=_transactionErrors;
@property(retain, nonatomic) BRRTCMigrationReportManager *migrationReportManager; // @synthesize migrationReportManager=_migrationReportManager;
@property(retain, nonatomic) id <EPServiceRegistry> serviceRegistry; // @synthesize serviceRegistry=_serviceRegistry;
- (id)_migrationMetricKeyFromTransactionName:(id)arg1;	// IMP=0x0000000100079228
- (void)_clearMigrationData;	// IMP=0x0000000100079218
- (void)_submitRTCMetric;	// IMP=0x00000001000791c4
- (void)setSessionID:(id)arg1;	// IMP=0x000000010007909c
- (void)setSessionIDFromRemoteDevice:(id)arg1;	// IMP=0x0000000100078fd4
- (id)_deviceDetailsFromCollectionHistory:(id)arg1;	// IMP=0x0000000100078c8c
- (_Bool)setCurrentMigrationID:(id)arg1;	// IMP=0x0000000100078bb8
- (id)mostRecentError;	// IMP=0x0000000100078adc
- (void)addTransactionError:(id)arg1;	// IMP=0x0000000100078a70
- (void)fileEarlyMigrationFailure:(unsigned long long)arg1 withDeviceHistory:(id)arg2 forPairingID:(id)arg3;	// IMP=0x0000000100078898
- (void)_checkInWithCompletedMigrationTransaction:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x00000001000787f8
- (void)checkInWithMigrationTransactionRollback:(id)arg1 routingSlipEntry:(id)arg2 forPairingID:(id)arg3;	// IMP=0x000000010007866c
- (void)checkInWithCompletedMigrationTransaction:(id)arg1 routingSlipEntry:(id)arg2 forPairingID:(id)arg3;	// IMP=0x0000000100078430
- (void)finishMigrationMetricWithDeviceHistory:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100078080
- (void)migrationWillBeginOnCompanionForPairingID:(id)arg1;	// IMP=0x0000000100077fe0
- (id)initWithServiceRegistry:(id)arg1;	// IMP=0x0000000100077f2c

@end

