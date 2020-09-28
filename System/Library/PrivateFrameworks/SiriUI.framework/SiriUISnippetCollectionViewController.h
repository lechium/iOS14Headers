/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDragDelegate.h>

@class UICollectionViewLayout, UICollectionView, NSString;

@interface SiriUISnippetCollectionViewController : SiriUISnippetViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDragDelegate> {

	CGRect _previousBounds;
	BOOL _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
	UICollectionViewLayout* _collectionViewLayout;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(UICollectionView *)collectionView;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(UICollectionViewLayout *)collectionViewLayout;
@end
