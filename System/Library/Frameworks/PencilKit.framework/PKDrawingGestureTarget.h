/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDrawingGestureTarget <NSObject>
@optional
-(BOOL)drawingShouldBegin:(id)arg1 withEvent:(id)arg2;
-(void)_replayDrawingBegan:(SCD_Struct_PK6)arg1;
-(void)_replayDrawingMoved:(SCD_Struct_PK6)arg1;
-(void)_replayDrawingEnded;
-(void)_replayDrawingCancelled;

@required
-(void)drawingBegan:(id)arg1;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2;
-(void)drawingEnded:(id)arg1;
-(void)drawingCancelled;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1;

@end

