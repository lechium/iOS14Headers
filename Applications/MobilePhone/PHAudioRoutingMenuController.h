//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIMenu;
@protocol PHAudioRoutingMenuControllerDataSource, PHAudioRoutingMenuControllerDelegate;

@interface PHAudioRoutingMenuController : NSObject
{
    UIMenu *_menu;	// 8 = 0x8
    long long _callStyle;	// 16 = 0x10
    id <PHAudioRoutingMenuControllerDataSource> _dataSource;	// 24 = 0x18
    id <PHAudioRoutingMenuControllerDelegate> _delegate;	// 32 = 0x20
}

+ (id)menuControllerWithCallStyle:(long long)arg1 dataSource:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001000bbeb0
- (void).cxx_destruct;	// IMP=0x00000001000bc944
@property(nonatomic) __weak id <PHAudioRoutingMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PHAudioRoutingMenuControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long callStyle; // @synthesize callStyle=_callStyle;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
- (id)muteActionTitle;	// IMP=0x00000001000bc82c
- (_Bool)isMuted;	// IMP=0x00000001000bc7b4
- (id)muteMenuAction;	// IMP=0x00000001000bc57c
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000bc574
- (id)routeActionWithTitle:(id)arg1 route:(id)arg2;	// IMP=0x00000001000bc33c
@property(readonly, copy, nonatomic) NSArray *menuActions;
- (void)reload;	// IMP=0x00000001000bbfb8

@end

