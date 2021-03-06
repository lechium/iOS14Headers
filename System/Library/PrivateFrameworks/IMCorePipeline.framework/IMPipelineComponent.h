/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCorePipeline.framework/IMCorePipeline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@protocol IMPipelineComponent
@required
-(id)runWithInput:(id)arg1;
-(id)bindTo:(id)arg1;
-(id)runIndividuallyWithInput:(id)arg1;

@end


@protocol IMPipelineComponent;
@interface IMPipelineComponent : NSObject <IMPipelineComponent> {

	id<IMPipelineComponent> _nextComponent;

}

@property (nonatomic,retain) id<IMPipelineComponent> nextComponent;              //@synthesize nextComponent=_nextComponent - In the implementation block
+(id)pipelineFromComponents:(id)arg1 ;
-(id)runWithInput:(id)arg1 ;
-(id)bindTo:(id)arg1 ;
-(id<IMPipelineComponent>)nextComponent;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(void)setNextComponent:(id<IMPipelineComponent>)arg1 ;
@end

