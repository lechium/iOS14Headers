//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContactStore.h>

@interface CNContactStore (PhoneKit)
+ (id)suggestedContactStore;	// IMP=0x0000000100017c28
+ (id)contactStore;	// IMP=0x0000000100017bb8
+ (_Bool)phoneKit_isAuthorized;	// IMP=0x0000000100017b94
+ (long long)authorizationStatus;	// IMP=0x0000000100017b7c
- (id)contactsForHandles:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x0000000100017cc4
@end

