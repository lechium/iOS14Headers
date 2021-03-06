//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NSObject;

@interface BuddyInternalSkipInfoProvider : NSObject
{
    _Bool _inSkipMode;	// 8 = 0x8
    CDUnknownBlockType _daemonGeneralClientFactory;	// 16 = 0x10
    CDUnknownBlockType _skipInfoReceivedBlock;	// 24 = 0x18
    NSArray *_skipExceptions;	// 32 = 0x20
    id <NSObject> _skipInfoNotificationToken;	// 40 = 0x28
}

+ (void)setSharedProvider:(id)arg1;	// IMP=0x000000010001f150
+ (id)sharedProvider;	// IMP=0x000000010001f108
- (void).cxx_destruct;	// IMP=0x000000010001f920
@property(retain) id <NSObject> skipInfoNotificationToken; // @synthesize skipInfoNotificationToken=_skipInfoNotificationToken;
@property(retain, nonatomic) NSArray *skipExceptions; // @synthesize skipExceptions=_skipExceptions;
@property(nonatomic, getter=isInSkipMode) _Bool inSkipMode; // @synthesize inSkipMode=_inSkipMode;
@property(copy, nonatomic) CDUnknownBlockType skipInfoReceivedBlock; // @synthesize skipInfoReceivedBlock=_skipInfoReceivedBlock;
@property(copy, nonatomic) CDUnknownBlockType daemonGeneralClientFactory; // @synthesize daemonGeneralClientFactory=_daemonGeneralClientFactory;
- (_Bool)wantsToSkipControllerClass:(Class)arg1;	// IMP=0x000000010001f7a4
- (void)_loadSkipInfo;	// IMP=0x000000010001f5f4
- (void)cancel;	// IMP=0x000000010001f530
- (void)resumeWithSkipInfoReceivedBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f218
- (id)initWithDaemonGeneralClientFactory:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f1a4

@end

