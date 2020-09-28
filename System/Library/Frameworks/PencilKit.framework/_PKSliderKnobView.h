/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface _PKSliderKnobView : UIView {

	UIImageView* _knobImageView;

}

@property (nonatomic,readonly) UIImageView * knobImageView;              //@synthesize knobImageView=_knobImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)knobImageView;
@end
