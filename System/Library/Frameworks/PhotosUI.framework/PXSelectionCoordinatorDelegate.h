/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXSelectionCoordinatorDelegate <NSObject>
@optional
-(void)selectionCoordinator:(id)arg1 willUpdateSelectedObjectsForSnapshot:(id)arg2 withRemovedIndexes:(id)arg3 insertedIndexes:(id)arg4;
-(void)selectionCoordinator:(id)arg1 didUpdateSelectedObjectsWithRemovedOIDs:(id)arg2 insertedOIDs:(id)arg3;
-(void)selectionCoordinator:(id)arg1 rejectedCountLimitViolationForSelectionManager:(id)arg2;
-(void)selectionLimitStatusChangedForSelectionCoordinator:(id)arg1;

@end
