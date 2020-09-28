/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@class NTKKeylineTouchable, UIBezierPath, UIColor, NSString;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView> {

	UIBezierPath* _path;
	UIBezierPath* _secondPath;
	NTKKeylineTouchable* touchable;

}

@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTouchable:(NTKKeylineTouchable *)arg1 ;
-(id)initWithPath:(id)arg1 secondPath:(id)arg2 scale:(double)arg3 ;
-(NTKKeylineTouchable *)touchable;
@end
