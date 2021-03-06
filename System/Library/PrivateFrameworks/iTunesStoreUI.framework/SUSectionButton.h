/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, NSURL;

@interface SUSectionButton : NSObject <NSCopying> {

	NSString* _accessibilityTitle;
	NSString* _displayTitle;
	UIImage* _image;
	UIEdgeInsets _imageInsets;
	NSURL* _imageURL;
	float _imageURLScale;
	long long _tag;

}

@property (nonatomic,copy) NSString * accessibilityTitle;              //@synthesize accessibilityTitle=_accessibilityTitle - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                    //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) float imageURLScale;                      //@synthesize imageURLScale=_imageURLScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                 //@synthesize imageInsets=_imageInsets - In the implementation block
@property (assign,nonatomic) long long tag;                            //@synthesize tag=_tag - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)accessibilityTitle;
-(long long)tag;
-(void)dealloc;
-(UIEdgeInsets)imageInsets;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIImage *)image;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(NSString *)displayTitle;
-(NSURL *)imageURL;
-(void)setTag:(long long)arg1 ;
-(id)initWithSectionButtonDictionary:(id)arg1 ;
-(void)applyToBarButtonItem:(id)arg1 ;
-(float)imageURLScale;
-(void)setImageURLScale:(float)arg1 ;
@end

