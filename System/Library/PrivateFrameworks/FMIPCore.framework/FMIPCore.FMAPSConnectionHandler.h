/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@interface FMIPCore.FMAPSConnectionHandler : NSObject <APSConnectionDelegate> {

	 delegate;
	 topic;
	 preferenceDomain;
	 connectionQueue;
	 connection;
	 topicAPSToken;
	 publicAPSToken;

}
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end

