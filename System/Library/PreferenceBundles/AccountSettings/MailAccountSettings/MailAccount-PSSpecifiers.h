//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MailAccount.h>

@interface MailAccount (PSSpecifiers)
+ (id)userInfoForAccountTopLevelSpecifier;	// IMP=0x000000000000bfb0
+ (id)easySetupSpecifiersWithPlaceholderAddress:(id)arg1 accountName:(id)arg2;	// IMP=0x000000000000b624
+ (id)firstSetupSpecifiers;	// IMP=0x000000000000b1c8
+ (id)aliasSpecifiersForEmails:(id)arg1;	// IMP=0x000000000000b1c0
+ (_Bool)aliasesAreEditable;	// IMP=0x000000000000b1b8
+ (_Bool)addressIsEditable;	// IMP=0x000000000000b1b0
+ (id)helpURL;	// IMP=0x000000000000b1a8
+ (id)helpTitle;	// IMP=0x000000000000b1a0
+ (id)descriptionPlaceholder;	// IMP=0x000000000000b198
+ (id)editableSuffix;	// IMP=0x000000000000b18c
+ (_Bool)setupIsAutomated;	// IMP=0x000000000000b184
+ (id)detailedSpecifiers:(_Bool)arg1;	// IMP=0x0000000000009c68
+ (id)advancedSpecifiers:(_Bool)arg1;	// IMP=0x0000000000009944
+ (int)advancedSpecifiersOptions;	// IMP=0x000000000000993c
+ (id)advancedSpecifiersWithOptions:(unsigned int)arg1;	// IMP=0x0000000000007ea4
+ (void)getRemoveOptionTitles:(id *)arg1 values:(id *)arg2 defaultValue:(id *)arg3;	// IMP=0x0000000000007b5c
+ (id)primarySpecifiers:(_Bool)arg1;	// IMP=0x00000000000076a8
+ (id)_incomingSpecifiers;	// IMP=0x0000000000006e44
+ (id)_accountDescriptionSpecifiersForExistingAccount:(_Bool)arg1;	// IMP=0x00000000000067b8
+ (id)copyShortFormForHost:(id)arg1 descriptionPlaceholder:(id)arg2 addressIsEditable:(_Bool)arg3;	// IMP=0x0000000000005e24
+ (Class)accountValidatorClass;	// IMP=0x0000000000005e18
+ (id)emailAddressHostPart;	// IMP=0x0000000000005e10
- (id)valueForSettingsInAccountPropertiesForKey:(id)arg1;	// IMP=0x000000000000bfb8
- (id)detailedSpecifiers;	// IMP=0x000000000000a398
- (id)advancedSpecifiers;	// IMP=0x0000000000009a0c
- (id)primarySpecifiers;	// IMP=0x0000000000007a98
- (id)otherTopLevelSpecifiers;	// IMP=0x00000000000067a4
@end

