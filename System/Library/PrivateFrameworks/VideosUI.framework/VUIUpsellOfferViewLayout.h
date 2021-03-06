/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIUpsellOfferViewLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _descriptionTextLayout;
	TVImageLayout* _imageLayout;

}

@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                    //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * imageLayout;                        //@synthesize imageLayout=_imageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(UIEdgeInsets)safeAreaInsets;
-(id)init;
-(void)_configureLayout;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(TVImageLayout *)imageLayout;
-(double)titleTopMarginPhone;
-(double)titleTopMarginPad;
-(double)descriptionTopMargin;
@end

