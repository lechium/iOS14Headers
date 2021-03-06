//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class NSDictionary, NSString;
@protocol CLSettingsManagerClientProtocol;

@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
- (void)refresh;
- (void)flush;
- (NSDictionary *)syncgetSetValue:(id)arg1 forKey:(NSString *)arg2 withoutNotifying:(byref id <CLSettingsManagerClientProtocol>)arg3;
- (NSDictionary *)syncgetSettingsAndRegisterForUpdates:(byref id <CLSettingsManagerClientProtocol>)arg1;
- (void)unregisterForUpdates:(byref id <CLSettingsManagerClientProtocol>)arg1;
@end

