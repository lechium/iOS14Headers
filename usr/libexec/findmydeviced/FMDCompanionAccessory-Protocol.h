//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDInternalAccessory-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, NSUUID;

@protocol FMDCompanionAccessory <NSObject, FMDInternalAccessory>
@property(readonly, nonatomic) _Bool migrationPossible;
@property(readonly, nonatomic) _Bool paired;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, nonatomic) NSUUID *pairingId;
@property(readonly, nonatomic) NSString *udid;
@end
