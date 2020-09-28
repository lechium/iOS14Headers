//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDebugDescriptionProviding-Protocol.h"
#import "BSDescriptionProviding-Protocol.h"

@class NSMutableDictionary, NSSet, NSString;
@protocol WCDApplicationWorkspaceDelegate;

@interface WCDApplicationWorkspace : NSObject <BSDescriptionProviding, BSDebugDescriptionProviding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_companionAppMap;	// 16 = 0x10
    NSMutableDictionary *_watchAppMap;	// 24 = 0x18
    NSMutableDictionary *_watchExtensionMap;	// 32 = 0x20
    NSMutableDictionary *_placeholderApplications;	// 40 = 0x28
    NSSet *_validApplications;	// 48 = 0x30
    NSSet *_standaloneWatchApps;	// 56 = 0x38
    NSSet *_runningIndependentlyWatchApps;	// 64 = 0x40
    NSSet *_iOSApplicationsContainingWatchApp;	// 72 = 0x48
    NSSet *_iOSApplicationsWithWatchAppInstalled;	// 80 = 0x50
    NSSet *_iOSApplicationsContainingComplications;	// 88 = 0x58
    id <WCDApplicationWorkspaceDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100010124
@property(nonatomic) __weak id <WCDApplicationWorkspaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010001007c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100010028
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010000ff0c
- (id)succinctDescription;	// IMP=0x000000010000feb8
- (id)succinctDescriptionBuilder;	// IMP=0x000000010000fe20
@property(readonly, copy, nonatomic) NSSet *iOSApplicationsContainingComplications;
@property(readonly, copy, nonatomic) NSSet *iOSApplicationsWithWatchAppInstalled;
@property(readonly, copy, nonatomic) NSSet *iOSApplicationsContainingWatchApp;
@property(readonly, copy, nonatomic) NSSet *runningIndependentlyWatchApps;
@property(readonly, copy, nonatomic) NSSet *standaloneWatchApps;
@property(readonly, copy, nonatomic) NSSet *allApplications;
@property(copy, nonatomic) NSSet *validApplications;
- (id)_lock_applicationInfoForBundleIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000010000f2c4
- (id)applicationInfoForBundleIdentifier:(id)arg1 type:(unsigned long long)arg2 allowPlaceholder:(_Bool)arg3;	// IMP=0x000000010000f134
- (id)applicationInfoForBundleIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000010000f124
- (id)init;	// IMP=0x000000010000f048

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
