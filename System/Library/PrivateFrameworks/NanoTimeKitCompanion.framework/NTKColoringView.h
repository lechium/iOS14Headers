/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol NTKColoringView <NSObject>
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@optional
-(UIColor *)contentColor;

@required
-(UIColor *)color;
-(void)setColor:(id)arg1;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(id)arg1;
-(void)setUsesLegibility:(BOOL)arg1;
-(BOOL)usesLegibility;

@end
