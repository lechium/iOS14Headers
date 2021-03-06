/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol HUWallpaperPhotoCellDelegate;
@class NSString, UIImageView, UIActivityIndicatorView, UIView, UIButton, UILabel, UIStackView, CAShapeLayer, NSLayoutConstraint, UIImage;

@interface HUWallpaperPhotoCell : UICollectionViewCell {

	BOOL _busy;
	BOOL _empty;
	BOOL _removable;
	BOOL _showBorder;
	NSString* _assetIdentifier;
	double _cornerRadius;
	long long _contentMode;
	id<HUWallpaperPhotoCellDelegate> _delegate;
	UIImageView* _imageView;
	UIActivityIndicatorView* _spinnerView;
	UIView* _selectionOverlayView;
	UIButton* _deleteButton;
	UILabel* _choosePhotoLabel;
	UIStackView* _stackView;
	CAShapeLayer* _borderLayer;
	NSLayoutConstraint* _imageWidthConstraint;

}

@property (nonatomic,retain) UIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                         //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIView * selectionOverlayView;                                 //@synthesize selectionOverlayView=_selectionOverlayView - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                       //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UILabel * choosePhotoLabel;                                    //@synthesize choosePhotoLabel=_choosePhotoLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                       //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * borderLayer;                                    //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                     //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,copy) NSString * assetIdentifier;                                      //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL busy;                                                     //@synthesize busy=_busy - In the implementation block
@property (assign,nonatomic) BOOL empty;                                                    //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic) BOOL removable;                                                //@synthesize removable=_removable - In the implementation block
@property (assign,nonatomic) BOOL showBorder;                                               //@synthesize showBorder=_showBorder - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long contentMode;                                         //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperPhotoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateView;
-(UIStackView *)stackView;
-(void)setEmpty:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(double)cornerRadius;
-(void)setBusy:(BOOL)arg1 ;
-(void)showBorder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)removable;
-(void)setRemovable:(BOOL)arg1 ;
-(void)prepareForReuse;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<HUWallpaperPhotoCellDelegate>)arg1 ;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setShowBorder:(BOOL)arg1 ;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(id<HUWallpaperPhotoCellDelegate>)delegate;
-(long long)contentMode;
-(BOOL)empty;
-(UIImageView *)imageView;
-(BOOL)busy;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIButton *)deleteButton;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)deleteButtonPressed;
-(UILabel *)choosePhotoLabel;
-(UIView *)selectionOverlayView;
-(BOOL)showBorder;
-(CAShapeLayer *)borderLayer;
-(void)setSelectionOverlayView:(UIView *)arg1 ;
-(void)setChoosePhotoLabel:(UILabel *)arg1 ;
-(void)setBorderLayer:(CAShapeLayer *)arg1 ;
@end

