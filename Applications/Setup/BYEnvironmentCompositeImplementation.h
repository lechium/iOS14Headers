//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BYEnvironmentComposite-Protocol.h"

@class BuddyInternalSkipInfoProvider, NSString;
@protocol BYDeviceProvider;

@interface BYEnvironmentCompositeImplementation : NSObject <BYEnvironmentComposite>
{
    id <BYDeviceProvider> _deviceProvider;	// 8 = 0x8
    BuddyInternalSkipInfoProvider *_internalSkipInfoProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009aaac
@property(retain, nonatomic) BuddyInternalSkipInfoProvider *internalSkipInfoProvider; // @synthesize internalSkipInfoProvider=_internalSkipInfoProvider;
@property(retain, nonatomic) id <BYDeviceProvider> deviceProvider; // @synthesize deviceProvider=_deviceProvider;
- (id)initWithDeviceProvider:(id)arg1 internalSkipInfoProvider:(id)arg2;	// IMP=0x000000010009a9e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

