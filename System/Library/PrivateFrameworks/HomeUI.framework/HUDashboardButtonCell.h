/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUGridCellProtocol.h>

@class HFItem, HUGridCellLayoutOptions, HFWallpaperSlice, UILabel, UIView, NSString;

@interface HUDashboardButtonCell : UICollectionViewCell <HUGridCellProtocol> {

	BOOL _cellContentsHidden;
	HFItem* _item;
	HUGridCellLayoutOptions* _layoutOptions;
	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	UILabel* _label;
	UIView* _blurView;
	CGRect _normalizedWallpaperRect;

}

@property (nonatomic,readonly) UILabel * label;                                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIView * blurView;                                                            //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                                 //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                                       //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                               //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden;                           //@synthesize cellContentsHidden=_cellContentsHidden - In the implementation block
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions;                                        //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (assign,nonatomic) double pointerRegionMargin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                                  //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(Class)layoutOptionsClass;
-(HUGridCellLayoutOptions *)layoutOptions;
-(UIView *)blurView;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)prepareForReuse;
-(void)setText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(void)setLayoutOptions:(HUGridCellLayoutOptions *)arg1 ;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1 ;
-(UILabel *)label;
-(void)applyLayoutAttributes:(id)arg1 ;
-(CGRect)normalizedWallpaperRect;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
-(void)_updateBlurredWallpaperDisplay;
-(void)_updateBlurredWallpaperContentsRect;
-(void)_updateBlurredWallpaperContentsScale;
@end

