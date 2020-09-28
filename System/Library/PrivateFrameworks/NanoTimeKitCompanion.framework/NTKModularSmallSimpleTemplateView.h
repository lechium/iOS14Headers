/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {

	UIView*<NTKComplicationImageView> _imageView;
	NTKColoringLabel* _label;
	long long _maxDynamicFontSize;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(id)supportedTemplateClasses;
-(void)_layoutContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_update;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureWithTextTemplate:(id)arg1 ;
-(void)_configureWithImageTemplate:(id)arg1 ;
-(double)_maxTextWidthForDynamicFontSize:(long long)arg1 ;
@end
