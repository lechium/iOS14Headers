/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol PKPaletteColorPicker <NSObject>
@property (nonatomic,copy) UIColor * selectedColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@required
-(UIColor *)selectedColor;
-(void)setSelectedColor:(id)arg1;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1;
-(void)setSelectedColorForPoint:(CGPoint)arg1;

@end

