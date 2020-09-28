/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PSKeyboardNavigationSearchResultsController.h>

@protocol SUIKSearchResultsCollectionViewControllerDelegate;
@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController> {

	NSObject*<SUIKSearchResultsCollectionViewControllerDelegate> _delegate;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	_SUIKSearchResultsUpdateOperation* _updateOperation;

}

@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                                   //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,retain) _SUIKSearchResultsUpdateOperation * updateOperation;                                       //@synthesize updateOperation=_updateOperation - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SUIKSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_selectAndScrollToIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setResults:(id)arg1 ;
-(void)searchQueryStarted;
-(double)iconWidth;
-(void)searchQueryCompleted;
-(void)viewDidLoad;
-(void)setUpdateOperation:(_SUIKSearchResultsUpdateOperation *)arg1 ;
-(void)showSelectedSearchResult;
-(void)searchQueryFoundItems:(id)arg1 ;
-(id)init;
-(void)setDelegate:(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(void)selectNextSearchResult;
-(NSObject*<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(_SUIKSearchResultsUpdateOperation *)updateOperation;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)selectPreviousSearchResult;
@end
