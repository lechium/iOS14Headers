/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor;

@interface _PKPathView : UIView

@property (nonatomic,retain) UIBezierPath * path; 
@property (nonatomic,retain) UIColor * fillColor; 
+(Class)layerClass;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)path;
-(id)_shapeLayer;
@end

