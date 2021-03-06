/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class MLCPoolingDescriptor;

@interface MLCPoolingLayer : MLCLayer {

	MLCPoolingDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MLCPoolingDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(MLCPoolingDescriptor *)descriptor;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
@end

