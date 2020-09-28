/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class UIImageView, HFPrimaryStateIconDescriptor;

@interface HUWaterDropletIconContentView : HUIconContentView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) HFPrimaryStateIconDescriptor * iconDescriptor; 
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2 ;
-(UIImageView *)imageView;
@end
