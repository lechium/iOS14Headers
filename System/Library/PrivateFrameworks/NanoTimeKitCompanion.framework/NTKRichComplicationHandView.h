/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CALayer;

@interface NTKRichComplicationHandView : UIView {

	CALayer* _dotLayer;
	CALayer* _handLayer;
	double _beginAngle;
	double _endAngle;
	double _handWidth;
	float _value;

}

@property (nonatomic,readonly) CALayer * dotLayer;               //@synthesize dotLayer=_dotLayer - In the implementation block
@property (nonatomic,readonly) CALayer * handLayer;              //@synthesize handLayer=_handLayer - In the implementation block
-(void)layoutSubviews;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)_updateHandTransform;
-(id)initWithDotSize:(double)arg1 handWidth:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 ;
-(CALayer *)dotLayer;
-(CALayer *)handLayer;
@end

