/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@protocol OS_dispatch_source;
@class NSObject, WFAutoIncrementingProgress;

@interface WFDelayAction : WFAction {

	NSObject*<OS_dispatch_source> _timer;
	WFAutoIncrementingProgress* _delayProgress;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) WFAutoIncrementingProgress * delayProgress;              //@synthesize delayProgress=_delayProgress - In the implementation block
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(WFAutoIncrementingProgress *)delayProgress;
-(void)setDelayProgress:(WFAutoIncrementingProgress *)arg1 ;
@end
