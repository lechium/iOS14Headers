/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NADeallocationTracerDelegate;
@interface NADeallocationTracer : NSObject {

	id<NADeallocationTracerDelegate> _delegate;

}

@property (assign,nonatomic) id<NADeallocationTracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<NADeallocationTracerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<NADeallocationTracerDelegate>)delegate;
@end

