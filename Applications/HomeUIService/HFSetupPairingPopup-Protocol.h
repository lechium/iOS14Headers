//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMSetupAccessoryDescription;
@protocol HFSetupPairingPopupDelegate;

@protocol HFSetupPairingPopup <NSObject>
@property(readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
@property(readonly, nonatomic) __weak id <HFSetupPairingPopupDelegate> popupDelegate;
@property(readonly, nonatomic) unsigned long long popupType;
- (id)initWithPopupDelegate:(id <HFSetupPairingPopupDelegate>)arg1 setupAccessoryDescription:(HMSetupAccessoryDescription *)arg2;
@end
