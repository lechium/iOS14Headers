/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDFPSCounter.h>

@class NSTimer;

@interface TSDFPSCACounter : TSDFPSCounter {

	unsigned mCAFrameCount;
	NSTimer* mTimer;

}
-(void)reset;
-(void)stopLoggingFPS;
-(void)p_updateFrameCount;
-(void)startLoggingFPS;
@end
