//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_os_log;

@interface DefaultsService : NSObject
{
    NSSet *_whitelistedDomains;	// 8 = 0x8
    NSObject<OS_os_log> *_logger;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000504c
@property(readonly, nonatomic) NSObject<OS_os_log> *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSSet *whitelistedDomains; // @synthesize whitelistedDomains=_whitelistedDomains;
- (struct __CFString *)userForDomain:(id)arg1;	// IMP=0x0000000100004fe8
- (_Bool)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100004c58
- (id)valueForDomain:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100004998
- (id)init;	// IMP=0x0000000100004838

@end

