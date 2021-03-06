/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBTrayButton.h>

@class NSObject;

@interface OBHollowButton : OBTrayButton {

	NSObject* _target;
	SEL _downPressSelector;
	SEL _upLiftSelector;

}

@property (nonatomic,retain) NSObject * target;                  //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL downPressSelector;              //@synthesize downPressSelector=_downPressSelector - In the implementation block
@property (assign,nonatomic) SEL upLiftSelector;                 //@synthesize upLiftSelector=_upLiftSelector - In the implementation block
+(id)hollowButtonWithTarget:(id)arg1 downPressSelector:(SEL)arg2 upLiftSelector:(SEL)arg3 ;
-(void)buttonPressed:(id)arg1 ;
-(NSObject *)target;
-(void)setDownPressSelector:(SEL)arg1 ;
-(void)setUpLiftSelector:(SEL)arg1 ;
-(SEL)downPressSelector;
-(SEL)upLiftSelector;
-(void)setTarget:(NSObject *)arg1 ;
@end

