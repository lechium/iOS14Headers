//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUITableViewRow.h>

@class NSLock, UITableViewCell;

@interface CloudStorageGraphTableViewRow : RUITableViewRow
{
    NSLock *_tableCellLock;	// 96 = 0x60
    UITableViewCell *_tableCell;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000002de6c
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;	// IMP=0x000000000002dd80
- (id)tableCell;	// IMP=0x000000000002d65c
- (id)init;	// IMP=0x000000000002d5f0

@end

