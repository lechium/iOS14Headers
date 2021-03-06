//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPluginDelegate-Protocol.h"

@class NEFilterPlugin, NEFilterSettings, NSError, NSFileHandle, NSUUID;

@protocol NEFilterPluginDelegate <NEPluginDelegate>
- (NSError *)plugin:(NEFilterPlugin *)arg1 didApplySettings:(NEFilterSettings *)arg2;
- (void)pluginDidRequestAgentClientServer:(NEFilterPlugin *)arg1;
- (void)plugin:(NEFilterPlugin *)arg1 didSetStatus:(long long)arg2 andError:(long long)arg3;
- (NSUUID *)pluginDidRequestPacketFilterChannel:(NEFilterPlugin *)arg1;
- (NSFileHandle *)pluginDidRequestContentFilterSocket:(NEFilterPlugin *)arg1;
@end

