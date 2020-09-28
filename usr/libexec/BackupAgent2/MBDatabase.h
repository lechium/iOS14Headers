//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBDatabaseLike-Protocol.h"

@class MBDecoder, MBDomainManager, NSString;

@interface MBDatabase : NSObject <MBDatabaseLike>
{
    NSString *_path;	// 8 = 0x8
    MBDomainManager *_domainManager;	// 16 = 0x10
    MBDecoder *_decoder;	// 24 = 0x18
    double _version;	// 32 = 0x20
    unsigned long long _offsetBase;	// 40 = 0x28
}

+ (id)databaseWithDrive:(id)arg1 path:(id)arg2 domainManager:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100059970
+ (id)databaseWithFile:(id)arg1 domainManager:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100059920
@property(readonly, nonatomic) double version; // @synthesize version=_version;
@property(readonly, nonatomic) MBDomainManager *domainManager; // @synthesize domainManager=_domainManager;
@property(readonly, copy) NSString *description;
- (void)close;	// IMP=0x000000010005a100
- (id)indexFromDatabaseIgnoringTruncation:(_Bool)arg1;	// IMP=0x0000000100059e38
- (id)enumerateFiles:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059dd4
- (id)fileEnumerator;	// IMP=0x0000000100059d4c
- (id)fileAtOffset:(unsigned long long)arg1;	// IMP=0x0000000100059d00
- (void)dealloc;	// IMP=0x0000000100059cb0
- (id)initWithDrive:(id)arg1 path:(id)arg2 domainManager:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100059be0
- (id)initWithFile:(id)arg1 domainManager:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100059b64
- (id)initWithData:(id)arg1 domainManager:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000599c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
