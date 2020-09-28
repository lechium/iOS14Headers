/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKArrowAnnotationEventHandler : AKAnnotationEventHandler
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 options:(unsigned long long)arg2 ;
-(CGPoint)_updatedMidPointForAnnotation:(id)arg1 withNewStartPt:(CGPoint)arg2 andNewEndPt:(CGPoint)arg3 ;
-(void)setupDraggingConstraints;
@end
