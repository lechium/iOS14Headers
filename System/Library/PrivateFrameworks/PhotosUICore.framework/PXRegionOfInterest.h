/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCoordinatedRect.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXImageRequester, PXViewSpec, NSString, PXTitleSubtitleLabelSpec;

@interface PXRegionOfInterest : PXCoordinatedRect <NSCopying> {

	PXImageRequester* _imageRequester;
	PXViewSpec* _imageViewSpec;
	NSString* _title;
	NSString* _subtitle;
	PXTitleSubtitleLabelSpec* _textViewSpec;
	/*^block*/id _placeholderViewFactory;
	CGRect _imageContentsRect;

}

@property (nonatomic,retain) PXImageRequester * imageRequester;                    //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                             //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (nonatomic,retain) PXViewSpec * imageViewSpec;                           //@synthesize imageViewSpec=_imageViewSpec - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) PXTitleSubtitleLabelSpec * textViewSpec;              //@synthesize textViewSpec=_textViewSpec - In the implementation block
@property (nonatomic,copy) id placeholderViewFactory;                              //@synthesize placeholderViewFactory=_placeholderViewFactory - In the implementation block
+(CGRect)convertedImageContentsRectOfRegionOfInterest:(id)arg1 toCoordinateSpace:(id)arg2 fittingSize:(CGSize)arg3 flipped:(BOOL)arg4 ;
-(NSString *)subtitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)placeholderViewFactory;
-(id)initWithRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(PXViewSpec *)imageViewSpec;
-(void)setImageViewSpec:(PXViewSpec *)arg1 ;
-(PXTitleSubtitleLabelSpec *)textViewSpec;
-(void)setTextViewSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(void)setPlaceholderViewFactory:(id)arg1 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGRect)imageContentsRect;
@end
