/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HUGridCellLayoutOptions;


@protocol HUGridCellProtocol <NSObject,HUCellProtocol>
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden; 
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions; 
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (assign,nonatomic) double pointerRegionMargin; 
@optional
-(BOOL)isPointerInteractionEnabled;
-(BOOL)isRearranging;
-(void)setRearranging:(BOOL)arg1;
-(double)pointerRegionMargin;
-(void)setPointerRegionMargin:(double)arg1;
-(void)setPointerInteractionEnabled:(BOOL)arg1;

@required
+(Class)layoutOptionsClass;
-(HUGridCellLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(id)arg1;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1;

@end
