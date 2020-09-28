//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMCore/FMJSONCommand.h>

@class NSDictionary, NSNumber, NSString;
@protocol NSCopying;

@interface FMFBaseCmd : FMJSONCommand
{
    long long modelOldRetryCount;	// 8 = 0x8
    _Bool _wasErrorHandled;	// 16 = 0x10
    NSString *_groupId;	// 24 = 0x18
    id <NSCopying> _transactionId;	// 32 = 0x20
    NSDictionary *_currentLocation;	// 40 = 0x28
    long long _commandStatus;	// 48 = 0x30
    long long _fmfServerError;	// 56 = 0x38
    NSString *_callerIdentifier;	// 64 = 0x40
    NSDictionary *_requestTokens;	// 72 = 0x48
    NSNumber *_requestTokensStatusCode;	// 80 = 0x50
    NSDictionary *_requestTokensStatusMap;	// 88 = 0x58
    NSNumber *_clientPid;	// 96 = 0x60
    long long _retryCount;	// 104 = 0x68
}

+ (id)nextTransactionId;	// IMP=0x000000010004d4e8
- (void).cxx_destruct;	// IMP=0x0000000100050174
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSNumber *clientPid; // @synthesize clientPid=_clientPid;
@property(copy, nonatomic) NSDictionary *requestTokensStatusMap; // @synthesize requestTokensStatusMap=_requestTokensStatusMap;
@property(copy, nonatomic) NSNumber *requestTokensStatusCode; // @synthesize requestTokensStatusCode=_requestTokensStatusCode;
@property(copy, nonatomic) NSDictionary *requestTokens; // @synthesize requestTokens=_requestTokens;
@property(copy, nonatomic) NSString *callerIdentifier; // @synthesize callerIdentifier=_callerIdentifier;
@property(nonatomic) _Bool wasErrorHandled; // @synthesize wasErrorHandled=_wasErrorHandled;
@property(nonatomic) long long fmfServerError; // @synthesize fmfServerError=_fmfServerError;
@property(nonatomic) long long commandStatus; // @synthesize commandStatus=_commandStatus;
@property(copy, nonatomic) NSDictionary *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(copy, nonatomic) id <NSCopying> transactionId; // @synthesize transactionId=_transactionId;
- (id)platform;	// IMP=0x0000000100050024
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) _Bool isSuccess;
- (_Bool)isUserAction;	// IMP=0x000000010004ff44
- (_Bool)shouldIncludeServerContext;	// IMP=0x000000010004ff3c
- (_Bool)shouldIncludeDataContext;	// IMP=0x000000010004ff34
- (_Bool)isTransactionCompleteWithError:(id)arg1;	// IMP=0x000000010004f70c
- (void)setupAuthentication;	// IMP=0x000000010004f5e8
@property(readonly, nonatomic) NSString *pathSuffix;
- (id)path;	// IMP=0x000000010004f334
- (void)processCommandResponse:(id)arg1;	// IMP=0x000000010004ecb0
@property(readonly, nonatomic) _Bool allowsEmptyResponse;
- (_Bool)isFireAndForget;	// IMP=0x000000010004eca0
@property(readonly, nonatomic) _Bool ignoreAllResponseErrors;
@property(readonly, nonatomic) _Bool ignoreResponseErrors;
@property(readonly, nonatomic) _Bool responseContainsFullModelUpdate;
- (id)clientContext;	// IMP=0x000000010004e3a0
- (id)tapContext;	// IMP=0x000000010004e398
- (id)method;	// IMP=0x000000010004e38c
@property(readonly) NSString *customCommandNotification;
@property(readonly) NSString *didFailNotification;
@property(readonly) NSString *willFailNotification;
@property(readonly) NSString *didSucceedNotification;
@property(readonly) NSString *willSucceedNotification;
- (id)result;	// IMP=0x000000010004e2e8
- (id)jsonBodyDictionary;	// IMP=0x000000010004e100
- (id)headers;	// IMP=0x000000010004dd40
- (void)initFailed;	// IMP=0x000000010004dc98
- (id)init;	// IMP=0x000000010004dc3c
- (id)initWithClientSession:(id)arg1;	// IMP=0x000000010004d66c

@end
