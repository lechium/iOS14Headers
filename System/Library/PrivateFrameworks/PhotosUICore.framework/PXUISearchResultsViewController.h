/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXSearchTapToRadarSectionProviderDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@class UICollectionView, PXSearchComposableDataSource, PXSearchQueryController, PXSearchIndexManager, PXSearchQuery, PXSearchResultsOneUpViewModel, UIScrollView, NSString, UISearchController;

@interface PXUISearchResultsViewController : UIViewController <PXOneUpPresentationDelegate, PXSearchTapToRadarSectionProviderDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UISearchBarDelegate, UISearchResultsUpdating> {

	UICollectionView* _collectionView;
	PXSearchComposableDataSource* _dataSource;
	PXSearchQueryController* _queryController;
	PXSearchIndexManager* _searchIndexManager;
	PXSearchQuery* _currentSearchQuery;
	PXSearchResultsOneUpViewModel* _oneUpViewModel;

}

@property (nonatomic,readonly) UIScrollView * ppt_scrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PXSearchComposableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXSearchQueryController * queryController;                   //@synthesize queryController=_queryController - In the implementation block
@property (nonatomic,retain) PXSearchIndexManager * searchIndexManager;                   //@synthesize searchIndexManager=_searchIndexManager - In the implementation block
@property (nonatomic,copy) PXSearchQuery * currentSearchQuery;                            //@synthesize currentSearchQuery=_currentSearchQuery - In the implementation block
@property (nonatomic,retain) PXSearchResultsOneUpViewModel * oneUpViewModel;              //@synthesize oneUpViewModel=_oneUpViewModel - In the implementation block
@property (nonatomic,readonly) UISearchController * searchController; 
-(id)px_gridPresentation;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)setDataSource:(PXSearchComposableDataSource *)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(UISearchController *)searchController;
-(void)ppt_expandAllSections;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)showOneUpForAssetSearchResult:(id)arg1 ;
-(id)_searchResultsSectionProvider;
-(id)_ppt_resultsSectionProvider;
-(void)viewDidLoad;
-(PXSearchResultsOneUpViewModel *)oneUpViewModel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(void)didSelectTapToRadar;
-(void)_configureQueryControllerWithResultsSectionProvider:(id)arg1 suggestionsSectionProvider:(id)arg2 queryStatusSectionProvider:(id)arg3 ;
-(id)_collectionViewLayoutWithProviders:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(void)setOneUpViewModel:(PXSearchResultsOneUpViewModel *)arg1 ;
-(void)_configureCollectionViewWithSectionProviders:(id)arg1 ;
-(void)_configureDataSourceForCollectionView:(id)arg1 sectionProviders:(id)arg2 ;
-(long long)_contentInsetsReferenceForTraitCollection:(id)arg1 ;
-(void)_didSelectAssetsSeeAllButtonForSection:(id)arg1 allAssetResultUUIDs:(id)arg2 title:(id)arg3 ;
-(void)_didSelectCollectionsSeeAllButtonForSection:(id)arg1 sectionProvider:(id)arg2 searchResultsHeaderView:(id)arg3 ;
-(void)_didSelectItemIdentifier:(id)arg1 inSuggestionsSectionProvider:(id)arg2 ;
-(void)_didSelectItemIdentifier:(id)arg1 inResultsSectionProvider:(id)arg2 ;
-(void)setQueryController:(PXSearchQueryController *)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(void)setSearchIndexManager:(PXSearchIndexManager *)arg1 ;
-(id)init;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setCurrentSearchQuery:(PXSearchQuery *)arg1 ;
-(PXSearchQuery *)currentSearchQuery;
-(PXSearchComposableDataSource *)dataSource;
-(void)_didSelectAlbumSearchResult:(id)arg1 ;
-(void)_didSelectDetailCollectionSearchResult:(id)arg1 ;
-(unsigned long long)_searchSuggestionLimit;
-(id)_emptyPhotosViewControllerForSearchResult:(id)arg1 ;
-(void)didSelectSeeAllForAssetUUIDs:(id)arg1 title:(id)arg2 ;
-(void)didSelectAssetSearchResult:(id)arg1 ;
-(void)didSelectAssetAggregationSearchResult:(id)arg1 ;
-(void)didSelectCollectionSearchResult:(id)arg1 ;
-(void)didSelectPersonSearchResult:(id)arg1 ;
-(PXSearchQueryController *)queryController;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(UIScrollView *)ppt_scrollView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)_didSelectTapToRadar;
-(PXSearchIndexManager *)searchIndexManager;
@end
