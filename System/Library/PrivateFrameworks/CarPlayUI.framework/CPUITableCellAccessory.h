/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface CPUITableCellAccessory : NSObject {

	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
+(id)accessoryWithImage:(id)arg1 ;
+(id)accessoryWithCloudIcon;
+(id)accessoryWithiCloudIcon;
+(id)accessoryWithDisclosureIndicator;
+(id)accessoryWithActivityIndicator;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
@end

