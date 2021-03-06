/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIKBRTTouchHistoryInfo : NSObject {

	BOOL _isLeftHand;
	BOOL _isActive;
	BOOL _ignoreForDrift;
	BOOL _ignoreTouch;
	id _touchIdentifier;
	double _touchTime;
	CGPoint _actualLocation;
	CGPoint _errorVector;

}

@property (nonatomic,retain) id touchIdentifier;                  //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (assign,nonatomic) double touchTime;                    //@synthesize touchTime=_touchTime - In the implementation block
@property (assign,nonatomic) CGPoint actualLocation;              //@synthesize actualLocation=_actualLocation - In the implementation block
@property (assign,nonatomic) BOOL isLeftHand;                     //@synthesize isLeftHand=_isLeftHand - In the implementation block
@property (assign,nonatomic) BOOL isActive;                       //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) BOOL ignoreForDrift;                 //@synthesize ignoreForDrift=_ignoreForDrift - In the implementation block
@property (assign,nonatomic) BOOL ignoreTouch;                    //@synthesize ignoreTouch=_ignoreTouch - In the implementation block
@property (assign,nonatomic) CGPoint errorVector;                 //@synthesize errorVector=_errorVector - In the implementation block
-(void)setActualLocation:(CGPoint)arg1 ;
-(void)setIgnoreTouch:(BOOL)arg1 ;
-(void)setIsLeftHand:(BOOL)arg1 ;
-(void)setIgnoreForDrift:(BOOL)arg1 ;
-(BOOL)ignoreForDrift;
-(void)setErrorVector:(CGPoint)arg1 ;
-(CGPoint)actualLocation;
-(void)setTouchIdentifier:(id)arg1 ;
-(id)touchIdentifier;
-(BOOL)isActive;
-(double)touchTime;
-(id)init;
-(void)setIsActive:(BOOL)arg1 ;
-(BOOL)isLeftHand;
-(BOOL)ignoreTouch;
-(CGPoint)errorVector;
-(id)description;
-(void)setTouchTime:(double)arg1 ;
@end

