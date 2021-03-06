/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@protocol PUPhotoEditBaseAdjustmentCellDelegate;
@class UITapGestureRecognizer;

@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell {

	id<PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditBaseAdjustmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handleButton:(id)arg1 ;
-(void)_configureContainerButton;
-(void)setImageName:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDelegate:(id<PUPhotoEditBaseAdjustmentCellDelegate>)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)initWithCoder:(id)arg1 ;
-(id<PUPhotoEditBaseAdjustmentCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

