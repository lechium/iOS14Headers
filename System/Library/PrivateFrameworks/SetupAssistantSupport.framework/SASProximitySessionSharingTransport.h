/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximitySessionTransport.h>

@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport {

	CUMessageSession* _messageSession;
	CUMessageSession* _actionMessageSession;

}

@property (retain) CUMessageSession * messageSession;                    //@synthesize messageSession=_messageSession - In the implementation block
@property (retain) CUMessageSession * actionMessageSession;              //@synthesize actionMessageSession=_actionMessageSession - In the implementation block
-(void)setMessageSession:(CUMessageSession *)arg1 ;
-(void)invalidate;
-(id)initWithMessageSession:(id)arg1 ;
-(void)activate;
-(CUMessageSession *)messageSession;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)setActionMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)actionMessageSession;
@end

