/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class UIImage, PXImportItemViewModel, UIView;

@interface PUImportOneUpTransitionItem : NSObject {

	UIImage* _snapshotImage;
	PXImportItemViewModel* _importItem;
	double _initialContentAlpha;
	UIView* _transitionView;
	double _targetContentAlpha;
	CGRect _initialFrame;
	PXSimpleIndexPath _indexPath;
	CGRect _targetFrame;

}

@property (assign,nonatomic) CGRect initialFrame;                               //@synthesize initialFrame=_initialFrame - In the implementation block
@property (nonatomic,retain) UIImage * snapshotImage;                           //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,readonly) PXImportItemViewModel * importItem;              //@synthesize importItem=_importItem - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath indexPath;                     //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) double initialContentAlpha;                        //@synthesize initialContentAlpha=_initialContentAlpha - In the implementation block
@property (nonatomic,retain) UIView * transitionView;                           //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                                //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,nonatomic) double targetContentAlpha;                         //@synthesize targetContentAlpha=_targetContentAlpha - In the implementation block
-(void)setTargetFrame:(CGRect)arg1 ;
-(PXSimpleIndexPath)indexPath;
-(PXImportItemViewModel *)importItem;
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(double)initialContentAlpha;
-(id)initWithInitialFrame:(CGRect)arg1 snapshotImage:(id)arg2 importItem:(id)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(void)setInitialContentAlpha:(double)arg1 ;
-(double)targetContentAlpha;
-(void)setTargetContentAlpha:(double)arg1 ;
-(void)setTransitionView:(UIView *)arg1 ;
-(UIImage *)snapshotImage;
-(UIView *)transitionView;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(CGRect)targetFrame;
@end

