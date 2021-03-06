/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;
@class UIBarButtonItem, NSArray, NSMutableIndexSet, NTKCompanionCustomPhotosEditor, NTKFace, NTKBasePhotosFaceView;

@interface _NTKCFaceDetailCustomPhotosViewController : UICollectionViewController {

	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _selectButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _selectAllButton;
	UIBarButtonItem* _deselectAllButton;
	UIBarButtonItem* _deleteButton;
	UIBarButtonItem* _addButton;
	UIBarButtonItem* _spinnerButton;
	NSArray* _defaultToolBarItems;
	NSArray* _editingToolBarItems;
	NSMutableIndexSet* _selectedIndexes;
	BOOL _deleteConfirmed;
	BOOL _inGallery;
	BOOL _externalImagesSet;
	NTKCompanionCustomPhotosEditor* _editor;
	NTKFace* _face;
	id<NTKCFaceDetailCustomPhotosViewControllerDelegate> _delegate;
	NTKBasePhotosFaceView* _faceView;

}

@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                    //@synthesize face=_face - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL inGallery;                                                                    //@synthesize inGallery=_inGallery - In the implementation block
@property (nonatomic,retain) NTKBasePhotosFaceView * faceView;                                                  //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic) BOOL externalImagesSet;                                                            //@synthesize externalImagesSet=_externalImagesSet - In the implementation block
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)_updateTitle;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(NTKCompanionCustomPhotosEditor *)editor;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NTKFace *)face;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(void)setDelegate:(id<NTKCFaceDetailCustomPhotosViewControllerDelegate>)arg1 ;
-(id<NTKCFaceDetailCustomPhotosViewControllerDelegate>)delegate;
-(void)_donePressed;
-(void)_updateButtons;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(void)setFaceView:(NTKBasePhotosFaceView *)arg1 ;
-(NTKBasePhotosFaceView *)faceView;
-(void)setInGallery:(BOOL)arg1 ;
-(BOOL)inGallery;
-(void)_deletePressed;
-(id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3 faceView:(id)arg4 externalImagesSet:(BOOL)arg5 ;
-(void)setExternalImagesSet:(BOOL)arg1 ;
-(void)_savePressed;
-(void)_selectPressed;
-(void)_selectAllPressed;
-(void)_addPressed;
-(void)_updateButtonsForSelectionChanged;
-(id)_currentSelectAllButton;
-(BOOL)_allPhotosSelected;
-(void)_selectAllPhotos;
-(BOOL)externalImagesSet;
@end

