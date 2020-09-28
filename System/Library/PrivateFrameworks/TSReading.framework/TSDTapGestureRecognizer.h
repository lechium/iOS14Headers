/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@interface TSDTapGestureRecognizer : UITapGestureRecognizer {

	CGPoint mFirstTapLocation;
	BOOL mSavedFirstTapLocation;
	unsigned long long mTapCount;

}

@property (nonatomic,readonly) CGPoint firstTapLocation; 
@property (nonatomic,readonly) unsigned long long tapCount; 
-(void)reset;
-(unsigned long long)tapCount;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)firstTapLocation;
@end
