//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CATOperation, NSDictionary;
@protocol DMDRemoteAssetResolver;

@protocol DMDOperationProvidingAsset <NSObject>
- (CATOperation *)dmf_removeAssetOperationWithInstallMetadata:(NSDictionary *)arg1 error:(id *)arg2;
- (CATOperation *)dmf_installAssetOperationWithReferenceResolver:(id <DMDRemoteAssetResolver>)arg1 error:(id *)arg2;
@end
