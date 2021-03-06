/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARTechniqueForwardingStrategy.h>

@class ARCircularArray, NSString;

@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy> {

	long long _frameRate;
	ARCircularArray* _mostRecentTimestamps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrameRate:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(BOOL)shouldProcessData:(id)arg1 ;
-(BOOL)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
@end

