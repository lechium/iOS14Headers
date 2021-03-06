/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, EFCancelable;
@class NSObject;

@interface EMCollectionItemIDStateCapturer : NSObject {

	NSObject*<OS_dispatch_queue> _stateCaptureQueue;
	id<EFCancelable> _stateCaptureCancelable;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateCaptureQueue;              //@synthesize stateCaptureQueue=_stateCaptureQueue - In the implementation block
@property (nonatomic,readonly) id<EFCancelable> stateCaptureCancelable;                     //@synthesize stateCaptureCancelable=_stateCaptureCancelable - In the implementation block
-(id<EFCancelable>)stateCaptureCancelable;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateCaptureQueue;
-(void)dealloc;
@end

