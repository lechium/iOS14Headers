/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol NTKCFaceDetailEditOptionCellDelegate;
@class NTKEditOptionCollection, NTKFaceView, NTKFace, NSDictionary, UICollectionView, UICollectionViewFlowLayout, UILabel, NSString;

@interface NTKCFaceDetailEditOptionCell : NTKCDetailTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {

	CGRect _swatchFrame;
	double _outlineOutset;
	double _outlinePadding;
	long long _selectedIndex;
	NTKEditOptionCollection* _collection;
	NTKFaceView* _faceView;
	NTKFace* _face;
	NSDictionary* _selectedOptions;
	NSDictionary* _selectedSlotOptions;
	id<NTKCFaceDetailEditOptionCellDelegate> _delegate;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	UILabel* _optionsDescription;

}

@property (nonatomic,retain) NTKEditOptionCollection * collection;                                  //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) NTKFaceView * faceView;                                         //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic,__weak) NTKFace * face;                                                 //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UILabel * optionsDescription;                                          //@synthesize optionsDescription=_optionsDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedOptions;                                        //@synthesize selectedOptions=_selectedOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedSlotOptions;                                    //@synthesize selectedSlotOptions=_selectedSlotOptions - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailEditOptionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
-(void)setCollection:(NTKEditOptionCollection *)arg1 ;
-(NTKEditOptionCollection *)collection;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(double)_spacing;
-(NTKFace *)face;
-(void)layoutSubviews;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionViewFlowLayout *)layout;
-(double)rowHeight;
-(void)setDelegate:(id<NTKCFaceDetailEditOptionCellDelegate>)arg1 ;
-(id<NTKCFaceDetailEditOptionCellDelegate>)delegate;
-(void)setFace:(NTKFace *)arg1 ;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(NTKFaceView *)faceView;
-(void)_fontSizeDidChange;
-(void)_setupFromCollection;
-(UILabel *)optionsDescription;
-(void)setOptionsDescription:(UILabel *)arg1 ;
-(id)_imageForIndexPath:(id)arg1 ;
-(void)reloadVisibleCells;
-(void)setSelectedOptions:(NSDictionary *)arg1 ;
-(id)_dequeueCellForIndexPath:(id)arg1 ;
-(void)_ensureIndexPathVisible:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollToIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)ensureIndexVisible:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollection:(id)arg1 forFaceView:(id)arg2 face:(id)arg3 ;
-(BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2 ;
-(void)scrollToSelectedOption:(BOOL)arg1 ;
-(void)ensureSelectedOptionVisible:(BOOL)arg1 ;
-(NSDictionary *)selectedOptions;
-(NSDictionary *)selectedSlotOptions;
-(void)setSelectedSlotOptions:(NSDictionary *)arg1 ;
@end

