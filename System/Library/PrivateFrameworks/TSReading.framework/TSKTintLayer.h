/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:34 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer {

	CALayer* _contentsLayer;

}

@property (nonatomic,retain) CALayer * contentsLayer;              //@synthesize contentsLayer=_contentsLayer - In the implementation block
@property (assign) CGColorRef tintColor; 
-(void)setContents:(id)arg1 ;
-(void)setNeedsDisplay;
-(id)contents;
-(CGColorRef)tintColor;
-(void)setTintColor:(CGColorRef)arg1 ;
-(void)dealloc;
-(void)layoutSublayers;
-(CALayer *)contentsLayer;
-(void)setContentsLayer:(CALayer *)arg1 ;
@end
