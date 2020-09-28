/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol OS_dispatch_queue, NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate;
@class NTKPhotosFace, NTKCompanionCustomPhotosEditor, NSMutableIndexSet, NSObject;

@interface NTKGreenfieldCompanionSharePhotosPickerViewController : UICollectionViewController {

	NTKPhotosFace* _originalFace;
	NTKCompanionCustomPhotosEditor* _editor;
	NSMutableIndexSet* _selectedIndexes;
	NSObject*<OS_dispatch_queue> _queue;
	id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)_setupCollectionView;
-(void)viewDidLoad;
-(void)setDelegate:(id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate>)arg1 ;
-(id<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate>)delegate;
-(void)_handleSelectionChanged;
-(void)_didTapDeselectAll;
-(void)_setupNavigationItems;
-(void)_handleEditorDidCreated;
-(void)_createPhotosEditorWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_didTapOnCancelButton;
-(void)_didTapOnDoneButton;
-(void)_handleDidFinishWithNewResourcesDirectory:(id)arg1 ;
-(id)_queue_fetchAssets;
-(id)_queue_fetchOptions;
-(id)initWithPhotosFace:(id)arg1 ;
@end
