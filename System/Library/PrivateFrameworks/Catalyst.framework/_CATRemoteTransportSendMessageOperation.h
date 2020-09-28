/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATRemoteTransport, CATMessage;

@interface _CATRemoteTransportSendMessageOperation : CATOperation {

	CATRemoteTransport* _transport;
	CATMessage* _message;

}

@property (assign,nonatomic,__weak) CATRemoteTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) CATMessage * message;                               //@synthesize message=_message - In the implementation block
-(void)didFailWithError:(id)arg1 ;
-(CATRemoteTransport *)transport;
-(void)setTransport:(CATRemoteTransport *)arg1 ;
-(void)setMessage:(CATMessage *)arg1 ;
-(BOOL)isAsynchronous;
-(CATMessage *)message;
-(void)main;
-(void)didSendData;
-(void)didEncodeData:(id)arg1 ;
@end
