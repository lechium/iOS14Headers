/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UITapGestureRecognizer.h>

@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer {

	GKCollectionViewCell* _currentEditingCell;

}

@property (nonatomic,retain) GKCollectionViewCell * currentEditingCell;              //@synthesize currentEditingCell=_currentEditingCell - In the implementation block
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(GKCollectionViewCell *)currentEditingCell;
-(void)setCurrentEditingCell:(GKCollectionViewCell *)arg1 ;
@end
