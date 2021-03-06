/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_io;
@class NSObject, NSFileHandle;

@interface _PASPosixPipeContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_io> _readChannel;
	NSFileHandle* _writeHandle;
	BOOL _stop;

}
-(int)setupWithSubprocessFd:(int)arg1 fileActions:(void*)arg2 queue:(id)arg3 group:(id)arg4 readErrno:(int*)arg5 ;
-(void)startReadWithHandler:(/*^block*/id)arg1 ;
@end

