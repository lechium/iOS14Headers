/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIShadowView.h>

@interface _UIRoundedRectShadowView : _UIShadowView {

	UIEdgeInsets _shadowOutsets;
	double _maskCornerRadius;

}

@property (nonatomic,readonly) double maskCornerRadius;              //@synthesize maskCornerRadius=_maskCornerRadius - In the implementation block
+(UIEdgeInsets)_expansionInsetForShadowImage;
+(BOOL)_shouldCutoutShadow;
-(id)initWithCornerRadius:(double)arg1 ;
-(void)_updateShadowOutsetsIfNecessary;
-(void)layoutSubviews;
-(double)maskCornerRadius;
-(CGRect)frameWithContentWithFrame:(CGRect)arg1 ;
-(void)_loadImageIfNecessary;
@end
