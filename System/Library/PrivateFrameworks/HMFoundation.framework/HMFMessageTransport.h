/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFMessageTransportDelegate;
@interface HMFMessageTransport : HMFObject {

	id<HMFMessageTransportDelegate> _delegate;

}

@property (__weak) id<HMFMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<HMFMessageTransportDelegate>)arg1 ;
-(id<HMFMessageTransportDelegate>)delegate;
@end

