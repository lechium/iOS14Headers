/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPaletteToolPickerArrowIndicatorView;

@interface PKPaletteToolPickerOverlayView : UIView {

	PKPaletteToolPickerArrowIndicatorView* _firstArrowView;
	PKPaletteToolPickerArrowIndicatorView* _secondArrowView;

}

@property (nonatomic,retain) PKPaletteToolPickerArrowIndicatorView * firstArrowView;               //@synthesize firstArrowView=_firstArrowView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPickerArrowIndicatorView * secondArrowView;              //@synthesize secondArrowView=_secondArrowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFirstArrowView:(PKPaletteToolPickerArrowIndicatorView *)arg1 ;
-(PKPaletteToolPickerArrowIndicatorView *)firstArrowView;
-(void)setSecondArrowView:(PKPaletteToolPickerArrowIndicatorView *)arg1 ;
-(PKPaletteToolPickerArrowIndicatorView *)secondArrowView;
@end

