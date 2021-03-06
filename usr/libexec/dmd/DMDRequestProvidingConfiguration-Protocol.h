//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CATTaskRequest, CATTaskResultObject, DMDPayloadContext, NSDictionary;

@protocol DMDRequestProvidingConfiguration <NSObject>
- (NSDictionary *)dmf_statusForResult:(CATTaskResultObject *)arg1 context:(DMDPayloadContext *)arg2;
- (CATTaskRequest *)dmf_removeRequestWithContext:(DMDPayloadContext *)arg1 error:(id *)arg2;
- (CATTaskRequest *)dmf_replaceRequestWithContext:(DMDPayloadContext *)arg1 error:(id *)arg2;
- (CATTaskRequest *)dmf_installRequestWithContext:(DMDPayloadContext *)arg1 error:(id *)arg2;
@end

