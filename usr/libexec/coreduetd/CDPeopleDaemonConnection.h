//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_CDInteractionXPCProtocol-Protocol.h"

@class CDPeopleDaemon;

@interface CDPeopleDaemonConnection : NSObject <_CDInteractionXPCProtocol>
{
    _Bool _queryInteractionsOnlyAuthorization;	// 8 = 0x8
    CDPeopleDaemon *_daemon;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000082cc
@property(retain, nonatomic) CDPeopleDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) _Bool queryInteractionsOnlyAuthorization; // @synthesize queryInteractionsOnlyAuthorization=_queryInteractionsOnlyAuthorization;
- (void)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000081bc
- (void)contactSuggestionsWithMaxSuggestions:(id)arg1 excludedContactIds:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000080f4
- (void)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000802c
- (void)rankedHandlesFromCandidateHandles:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007f80
- (void)rankedSiriMLCRHandlesFromContext:(id)arg1 handles:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007eb8
- (void)rankedFamilySuggestionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007e30
- (void)provideMessagesPinningFeedback:(id)arg1;	// IMP=0x0000000100007dc4
- (void)rankedMessagesPinsWithMaxSuggestions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007d18
- (void)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(_Bool)arg2 maxSuggestions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007c40
- (void)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007b78
- (void)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007ab0
- (void)messagesZKWSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000079e8
- (void)mapsSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007920
- (void)shareExtensionSuggestionsFromContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007874
- (void)suggestInteractionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000077a8
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000076e4
- (void)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000761c
- (void)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000754c
- (void)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007484
- (void)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000073bc
- (void)adviseInteractionsUsingSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007310
- (void)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007248
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007154
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007060
- (void)deleteInteractionsWithBundleId:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006f90
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006e94
- (void)countContactsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006dc4
- (void)countInteractionsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006cf4
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006bf8
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006b44
- (void)recordInteractions:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006a80
- (id)unauthorizedClientError;	// IMP=0x00000001000069a0

@end
