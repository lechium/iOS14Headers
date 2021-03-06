/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CKAsyncLayer : CALayer {

	int _displaySentinel;
	BOOL _needsAsyncDisplayOnly;

}

@property (assign) unsigned long long displayMode; 
+(id)defaultValueForKey:(id)arg1 ;
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)displayQueue;
+(/*^block*/id)asyncDisplayBlockWithBounds:(CGRect)arg1 contentsScale:(double)arg2 opaque:(BOOL)arg3 backgroundColor:(CGColorRef)arg4 displaySentinel:(int*)arg5 expectedDisplaySentinelValue:(int)arg6 drawingDelegate:(id)arg7 drawParameters:(id)arg8 ;
+(void)drawAsyncLayerInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)display;
-(id)name;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(void)setNeedsAsyncDisplay;
-(void)cancelAsyncDisplay;
@end

