/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSwitcherMultitaskingQueryProviding <SBSwitcherQueryProviding>
@required
-(CGPoint*)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1;
-(double)snapshotScaleForAppLayout:(id)arg1;
-(double)contentPageViewScaleForAppLayout:(id)arg1;
-(CGPoint*)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
-(CGPoint*)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
-(id)scrollViewAttributes;
-(void)resetAdjustedScrollingState;

@end
