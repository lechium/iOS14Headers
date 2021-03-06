/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ARBufferPopulationRegistry : NSObject {

	NSMutableDictionary* _bufferToLabelLUT;
	NSMutableDictionary* _labelToBuffersLUT;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)countWithLabel:(id)arg1 ;
-(id)labelForBufferWithSurfaceID:(id)arg1 ;
-(void)registerBufferWithSurfaceID:(id)arg1 label:(id)arg2 ;
-(id)surfaceIDsForBuffersWithLabel:(id)arg1 ;
-(void)unregisterBufferWithSurfaceID:(id)arg1 ;
@end

