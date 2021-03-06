/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITraitCollection, UIImage;

@interface CPImageSetAssetRegistration : NSObject {

	UITraitCollection* _baseTraitCollection;
	UITraitCollection* _lightTraitCollection;
	UITraitCollection* _darkTraitCollection;
	UIImage* _combinedImage;

}

@property (nonatomic,readonly) UITraitCollection * baseTraitCollection;               //@synthesize baseTraitCollection=_baseTraitCollection - In the implementation block
@property (nonatomic,readonly) UITraitCollection * lightTraitCollection;              //@synthesize lightTraitCollection=_lightTraitCollection - In the implementation block
@property (nonatomic,readonly) UITraitCollection * darkTraitCollection;               //@synthesize darkTraitCollection=_darkTraitCollection - In the implementation block
@property (nonatomic,readonly) UIImage * combinedImage;                               //@synthesize combinedImage=_combinedImage - In the implementation block
-(void)dealloc;
-(UIImage *)combinedImage;
-(UITraitCollection *)lightTraitCollection;
-(UITraitCollection *)darkTraitCollection;
-(id)initWithLightImage:(id)arg1 darkImage:(id)arg2 baseTraitCollection:(id)arg3 ;
-(UITraitCollection *)baseTraitCollection;
@end

