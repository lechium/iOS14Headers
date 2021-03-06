/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIAlertControllerTextField, NSArray, UITextField;

@interface _UIAlertControllerTextFieldView : UIView {

	UIView* _containerView;
	_UIAlertControllerTextField* _textField;
	NSArray* _containerViewConstraints;

}

@property (nonatomic,retain) UIView * containerView; 
@property (readonly) UITextField * textField; 
-(UIView *)containerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(double)_borderWidth;
-(void)setContainerView:(UIView *)arg1 ;
-(id)_textFieldFont;
-(void)_loadConstraints;
-(UITextField *)textField;
@end

