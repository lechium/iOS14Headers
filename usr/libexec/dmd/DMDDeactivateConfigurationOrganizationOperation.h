//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDDeactivateConfigurationOrganizationOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003bc18
+ (id)requiredEntitlements;	// IMP=0x000000010003bae4
+ (id)whitelistedClassesForRequest;	// IMP=0x000000010003baa8
- (void)runWithRequest:(id)arg1;	// IMP=0x000000010003baf8
- (unsigned long long)queueGroup;	// IMP=0x000000010003baf0

@end

