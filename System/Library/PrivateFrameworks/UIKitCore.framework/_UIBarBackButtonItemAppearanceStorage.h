/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;

}

@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(NSValue *)miniTitlePositionOffset;
-(NSValue *)titlePositionOffset;
-(id)anyBackgroundImage;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
@end

