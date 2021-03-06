/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@class ICTrackedParagraph, NSString, UIImage, UIImageView;

@interface ICTrackedParagraphImageInfo : NSObject {

	BOOL _estimated;
	ICTrackedParagraph* _trackedParagraph;
	NSString* _uuid;
	UIImage* _image;
	UIImageView* _imageViewIfExists;
	CGRect _boundingRect;
	CGRect _rect;

}

@property (nonatomic,retain) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect boundingRect;                                //@synthesize boundingRect=_boundingRect - In the implementation block
@property (assign,nonatomic) CGRect rect;                                        //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewIfExists;                    //@synthesize imageViewIfExists=_imageViewIfExists - In the implementation block
@property (assign,nonatomic) BOOL estimated;                                     //@synthesize estimated=_estimated - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)setBoundingRect:(CGRect)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(UIImage *)image;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)uuid;
-(CGRect)boundingRect;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
-(UIImageView *)imageViewIfExists;
-(void)setImageViewIfExists:(UIImageView *)arg1 ;
-(BOOL)estimated;
-(void)setEstimated:(BOOL)arg1 ;
@end

