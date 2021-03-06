/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface ADTapGestureRecognizer : UIGestureRecognizer {

	long long _finalTrackingID;
	/*^block*/id _touchDownHandler;
	/*^block*/id _touchMovedHandler;
	/*^block*/id _touchUpHandler;

}

@property (assign,nonatomic) long long finalTrackingID;              //@synthesize finalTrackingID=_finalTrackingID - In the implementation block
@property (nonatomic,copy) id touchDownHandler;                      //@synthesize touchDownHandler=_touchDownHandler - In the implementation block
@property (nonatomic,copy) id touchMovedHandler;                     //@synthesize touchMovedHandler=_touchMovedHandler - In the implementation block
@property (nonatomic,copy) id touchUpHandler;                        //@synthesize touchUpHandler=_touchUpHandler - In the implementation block
-(void)setTouchUpHandler:(id)arg1 ;
-(void)setFinalTrackingID:(long long)arg1 ;
-(id)touchMovedHandler;
-(void)setTouchMovedHandler:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchDownHandler:(id)arg1 ;
-(id)touchDownHandler;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)finalTrackingID;
-(id)touchUpHandler;
@end

