//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface ExtendedTableView : UITableView
{
    long long _countOfActiveUpdateBlocks;	// 8 = 0x8
}

- (void)setDataSource:(id)arg1;	// IMP=0x0000000000011910
- (void)reloadData;	// IMP=0x00000000000118c0
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x0000000000011870
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x0000000000011820
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x00000000000117d0
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x0000000000011780
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x0000000000011730
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x00000000000116e0
- (void)_noteDataSourceChangedIfPossible;	// IMP=0x0000000000011630
- (void)endUpdates;	// IMP=0x00000000000115cc
- (void)beginUpdates;	// IMP=0x0000000000011584

@end
