/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class FigCaptionLayerPrivate, NSString;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {

	FigCaptionLayerPrivate* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVideoRelativeToViewport:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSublayers;
-(void)resetCaptions;
-(void)processCaptionCommand:(unsigned)arg1 data:(id)arg2 ;
-(void)updateDisplay:(OpaqueFigCFCaptionRendererRef)arg1 ;
-(void)setFontName:(const char*)arg1 ;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setCaptionsAvoidanceMargins:(FigGeometryMargins)arg1 ;
@end

