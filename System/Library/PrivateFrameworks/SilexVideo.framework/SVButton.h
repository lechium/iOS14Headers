/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SVButton : UIButton {

	/*^block*/id _touchUpInsideBlock;
	UIEdgeInsets _touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets;                                 //@synthesize touchInsets=_touchInsets - In the implementation block
@property (setter=onTouchUpInside:,nonatomic,copy) id touchUpInsideBlock;              //@synthesize touchUpInsideBlock=_touchUpInsideBlock - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)touchInsets;
-(void)onTouchUpInside:(/*^block*/id)arg1 ;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(void)_privateButtonTapped;
-(id)touchUpInsideBlock;
@end

