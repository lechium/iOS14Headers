/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIView;

@interface UIAccessibilityElementMockSlider : UIAccessibilityElement {

	UIView* _view;
	id _delegate;

}

@property (nonatomic,retain) UIView * view;                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView *)view;
-(CGRect)accessibilityFrame;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(id)delegate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(unsigned long long)accessibilityTraits;
@end

