//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDXPCDaemon.h"

#import "SDAirDropAlertManagerDelegate-Protocol.h"
#import "SDAirDropClassroomTransferManagerProtocol-Protocol.h"

@class NSMutableDictionary, NSString, SDAirDropTransferManager;

__attribute__((visibility("hidden")))
@interface SDAirDropClassroomTransferManager : SDXPCDaemon <SDAirDropClassroomTransferManagerProtocol, SDAirDropAlertManagerDelegate>
{
    NSMutableDictionary *_transferIDToProgress;	// 8 = 0x8
    SDAirDropTransferManager *_transferManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100252608
@property(retain, nonatomic) SDAirDropTransferManager *transferManager; // @synthesize transferManager=_transferManager;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0000000100252490
- (void)connectionEstablished:(id)arg1;	// IMP=0x0000000100252374
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x000000010025236c
- (id)remoteObjectInterface;	// IMP=0x0000000100252350
- (id)exportedInterface;	// IMP=0x00000001002521f0
- (id)machServiceName;	// IMP=0x00000001002521e4
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3;	// IMP=0x0000000100252004
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2 withDestinationURL:(id)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(_Bool)arg4;	// IMP=0x0000000100251e34
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001002514ec
- (void)replaceIconValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001002513cc
- (id)makeDestinationDirectoryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100251160
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100251154
- (void)invalidate;	// IMP=0x0000000100251120
- (void)activate;	// IMP=0x00000001002510ec
- (id)init;	// IMP=0x0000000100251080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
