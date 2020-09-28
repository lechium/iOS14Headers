//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CloudTabItemView, CloudTabTable, WBSCloudTab, WBSCloudTabDevice;

@protocol CloudTabTableDelegate <NSObject>
- (_Bool)cloudTabTable:(CloudTabTable *)arg1 shouldDisplayTab:(WBSCloudTab *)arg2;
- (void)cloudTabTable:(CloudTabTable *)arg1 didFinishEditingTabItemView:(CloudTabItemView *)arg2;
- (void)cloudTabTable:(CloudTabTable *)arg1 didStartEditingTabItemView:(CloudTabItemView *)arg2;
- (void)cloudTabTable:(CloudTabTable *)arg1 closeCloudTab:(WBSCloudTab *)arg2 onDevice:(WBSCloudTabDevice *)arg3;
- (void)cloudTabTable:(CloudTabTable *)arg1 didSelectCloudTab:(WBSCloudTab *)arg2;
@end
