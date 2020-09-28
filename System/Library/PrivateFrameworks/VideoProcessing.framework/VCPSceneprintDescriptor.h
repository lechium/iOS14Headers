/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPDistanceDescriptorProtocol.h>

@class VNSceneprint;

@interface VCPSceneprintDescriptor : NSObject <VCPDistanceDescriptorProtocol> {

	VNSceneprint* _sceneprint;

}
+(int)preferredPixelFormat;
+(BOOL)usePHAssetData;
+(id)descriptorWithImage:(CVBufferRef)arg1 ;
+(id)descriptorWithData:(id)arg1 ;
-(id)serialize;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2 ;
-(id)initWithData:(id)arg1 ;
@end
