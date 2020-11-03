//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class VOCommandContext, VOSBluetoothDevice, VOSCommandManager, VOSCommandResolver, VOSOutputEvent;

@interface PSSpecifier (AXPriv)
+ (id)voQuickNavShortcutItem:(id)arg1 commandManager:(id)arg2 resolver:(id)arg3;	// IMP=0x00000000001099f4
+ (id)voKeyboardShortcutBindingItem:(id)arg1 commandManager:(id)arg2 resolver:(id)arg3;	// IMP=0x0000000000109914
+ (id)voKeyboardShortcutItem:(id)arg1 commandManager:(id)arg2 resolver:(id)arg3;	// IMP=0x0000000000109834
+ (id)voGestureItem:(id)arg1 commandManager:(id)arg2 resolver:(id)arg3;	// IMP=0x0000000000109708
+ (id)voCommandItem:(id)arg1 commandManager:(id)arg2 resolver:(id)arg3;	// IMP=0x00000000001095dc
+ (id)voSubmenuForCommandCategory:(id)arg1 commandManager:(id)arg2 resolver:(id)arg3;	// IMP=0x00000000001094a4
+ (id)voCommandSubmenuWithTitle:(id)arg1 childViewControllerClass:(Class)arg2 command:(id)arg3 commandManager:(id)arg4 resolver:(id)arg5;	// IMP=0x000000000010932c
+ (id)voGenericSubmenuWithTitle:(id)arg1 childViewControllerClass:(Class)arg2 commandManager:(id)arg3 resolver:(id)arg4;	// IMP=0x000000000010921c
- (_Bool)isEditableCaptionProfile;	// IMP=0x00000000000bf5a4
- (_Bool)isCaptionProfile;	// IMP=0x00000000000bf550
@property(retain, nonatomic) VOSOutputEvent *vosOutputEvent;
@property(retain, nonatomic) VOSBluetoothDevice *voBrailleDevice;
@property(readonly, nonatomic) unsigned long long voBindingAvailability;
@property(readonly, nonatomic) VOSCommandResolver *voCommandResolver;
@property(readonly, nonatomic) VOSCommandManager *voCommandManager;
@property(retain, nonatomic) VOCommandContext *voCommandContext;
@end
