/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSEventHandling.h>

@class NSString;

@interface CSFaceOcclusionMonitor : NSObject <CSEventHandling> {

	unsigned long long _faceOcclusionsSinceScreenOn;

}

@property (nonatomic,readonly) unsigned long long faceOcclusionsSinceScreenOn;              //@synthesize faceOcclusionsSinceScreenOn=_faceOcclusionsSinceScreenOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)conformsToCSEventHandling;
-(BOOL)handleEvent:(id)arg1 ;
-(unsigned long long)faceOcclusionsSinceScreenOn;
@end
