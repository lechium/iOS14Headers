/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIImageView, UIImage;

@interface NTKCPhotoListCell : UICollectionViewCell {

	UIView* _selectionOverlayView;
	UIImageView* _selectionBadge;
	UIView* _highlightOverlayView;
	UIView* _content;
	UIImageView* _contentImageView;
	unsigned long long _index;
	CGRect _crop;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,nonatomic) CGRect crop;                           //@synthesize crop=_crop - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)reuseIdentifier;
-(void)setIndex:(unsigned long long)arg1 ;
-(CGRect)crop;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(unsigned long long)index;
-(void)setCrop:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
@end

