//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContactStore.h>

@interface CNContactStore (PhoneKit)
+ (id)suggestedContactStore;	// IMP=0x0000000100104e84
+ (id)contactStore;	// IMP=0x0000000100104e14
+ (_Bool)phoneKit_isAuthorized;	// IMP=0x0000000100104df0
+ (long long)authorizationStatus;	// IMP=0x0000000100104dd8
- (id)contactsForHandles:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x0000000100104f20
@end

