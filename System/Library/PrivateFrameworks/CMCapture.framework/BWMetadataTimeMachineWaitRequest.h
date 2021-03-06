/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWMetadataTimeMachineRequest.h>

@interface BWMetadataTimeMachineWaitRequest : BWMetadataTimeMachineRequest {

	int _capacity;
	int _completionCapacity;

}

@property (nonatomic,readonly) int capacity;                        //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) int completionCapacity;              //@synthesize completionCapacity=_completionCapacity - In the implementation block
-(int)capacity;
-(id)initWithCapacity:(int)arg1 ;
-(void)completeWithCapacity:(int)arg1 ;
-(int)completionCapacity;
@end

