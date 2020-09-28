/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SASProximitySessionTransport : NSObject {

	/*^block*/id _receivedDataBlock;

}

@property (copy) id receivedDataBlock;              //@synthesize receivedDataBlock=_receivedDataBlock - In the implementation block
-(void)invalidate;
-(void)activate;
-(void)setReceivedDataBlock:(id)arg1 ;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)receivedDataBlock;
@end
