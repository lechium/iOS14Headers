/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject {

	IDSDaemonResponseHandler* _responseHandler;
	/*^block*/id _timeoutBlock;
	IMTimer* _systemTimer;

}
-(id)responseHandler;
-(void)dealloc;
-(/*^block*/id)timeoutBlock;
-(id)systemTimer;
-(void)killSystemTimer;
-(id)initWithResponseHandler:(id)arg1 timeoutBlock:(/*^block*/id)arg2 systemTimer:(id)arg3 ;
@end

