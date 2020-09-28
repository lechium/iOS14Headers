/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PKRightAngleRotatingView : UIView {

	UIView* _rotatedView;
	long long _orientation;

}

@property (nonatomic,readonly) UIView * rotatedView;              //@synthesize rotatedView=_rotatedView - In the implementation block
@property (assign,nonatomic) long long orientation;               //@synthesize orientation=_orientation - In the implementation block
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(long long)orientation;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)_dimensionsAreRotated;
-(id)initWithRotatedView:(id)arg1 ;
-(UIView *)rotatedView;
-(void)updateTransform;
@end
