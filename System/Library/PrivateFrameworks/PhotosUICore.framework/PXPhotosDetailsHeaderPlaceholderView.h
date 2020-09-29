/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXBasicUIViewTileAnimator, PXUIImageTile, PXBasicTileUserData, PXTitleSubtitleUILabelTile, UILabel;

@interface PXPhotosDetailsHeaderPlaceholderView : UIView {

	PXBasicUIViewTileAnimator* _tileAnimator;
	PXTileGeometry* _imageTileGeometry;
	PXUIImageTile* _imageTile;
	PXBasicTileUserData* _imageTileUserData;
	PXTileGeometry* _initialTextTileGeometry;
	PXTileGeometry* _textTileGeometry;
	PXTitleSubtitleUILabelTile* _textTile;
	PXBasicTileUserData* _textTileUserData;
	UILabel* _labelForLastBaselineLayout;

}
-(id)viewForLastBaselineLayout;
-(void)layoutSubviews;
-(void)_layoutImageTile;
-(id)initWithRegionOfInterest:(id)arg1 ;
-(void)_layoutTextTile;
-(void)_layoutTile:(id)arg1 withGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 ;
-(void)_layoutLabelForLastBaselineLayout;
@end
