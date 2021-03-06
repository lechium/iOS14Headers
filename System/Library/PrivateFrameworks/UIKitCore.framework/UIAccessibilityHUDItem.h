/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <NSCopying> {

	BOOL _disabledAppearance;
	BOOL _flattenImage;
	BOOL _scaleImage;
	long long _customUserInterfaceStyle;
	NSString* _title;
	UIImage* _image;
	UIView* _customView;
	UIEdgeInsets _imageInsets;

}

@property (assign,nonatomic) BOOL disabledAppearance;                         //@synthesize disabledAppearance=_disabledAppearance - In the implementation block
@property (assign,nonatomic) BOOL flattenImage;                               //@synthesize flattenImage=_flattenImage - In the implementation block
@property (assign,nonatomic) BOOL scaleImage;                                 //@synthesize scaleImage=_scaleImage - In the implementation block
@property (assign,nonatomic) long long customUserInterfaceStyle;              //@synthesize customUserInterfaceStyle=_customUserInterfaceStyle - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                        //@synthesize imageInsets=_imageInsets - In the implementation block
@property (nonatomic,retain) UIView * customView;                             //@synthesize customView=_customView - In the implementation block
+(id)HUDItemForBarButtonItem:(id)arg1 atPoint:(CGPoint)arg2 inView:(id)arg3 ;
+(id)HUDItemForTabBarItem:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(UIEdgeInsets)arg3 scaleImage:(BOOL)arg4 ;
-(NSString *)title;
-(BOOL)scaleImage;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(UIEdgeInsets)arg3 ;
-(UIEdgeInsets)imageInsets;
-(BOOL)flattenImage;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIImage *)image;
-(BOOL)isEqual:(id)arg1 ;
-(void)setScaleImage:(BOOL)arg1 ;
-(long long)customUserInterfaceStyle;
-(void)setCustomUserInterfaceStyle:(long long)arg1 ;
-(UIView *)customView;
-(void)setFlattenImage:(BOOL)arg1 ;
-(void)setDisabledAppearance:(BOOL)arg1 ;
-(BOOL)disabledAppearance;
-(id)initWithCustomView:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
@end

