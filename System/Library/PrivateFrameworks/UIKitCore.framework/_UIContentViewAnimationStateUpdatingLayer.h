/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface _UIContentViewAnimationStateUpdatingLayer : CALayer {

	/*^block*/id _progressHandler;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(id)layerForView:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)animationCompletedWithPosition:(long long)arg1 ;
-(double)progress;
@end

