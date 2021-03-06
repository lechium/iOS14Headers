//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDAccountManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000010003c41c
- (_Bool)whitelisted:(id)arg1;	// IMP=0x0000000100041d14
- (id)authenticationFor:(id)arg1 password:(id)arg2 accountType:(id)arg3 serviceType:(long long)arg4 error:(id *)arg5;	// IMP=0x00000001000415cc
- (_Bool)disableFMIP:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100040a4c
- (_Bool)signOutiCloudAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004045c
- (_Bool)signIniCloudAccount:(id)arg1 password:(id)arg2 features:(id)arg3 error:(id *)arg4;	// IMP=0x000000010003e684
- (void)signOutiTunesAccount;	// IMP=0x000000010003e22c
- (_Bool)signIniTunesAccount:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003dac0
- (id)existingAccounts;	// IMP=0x000000010003d8ac
- (_Bool)setupiTunes:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003d490
- (_Bool)setupiCloud:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003cf8c
- (_Bool)trySetupAccounts:(id *)arg1;	// IMP=0x000000010003c7b0
- (_Bool)setupAccounts:(id *)arg1;	// IMP=0x000000010003c488

@end

