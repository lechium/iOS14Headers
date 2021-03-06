/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, NSArray;

@interface MFGradientView : UIView

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,retain) NSArray * gradientColors; 
@property (nonatomic,retain) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(CAGradientLayer *)gradientLayer;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)locations;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
@end

