/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, HAPNFCReaderStream;
@class NSString, NSObject;

@interface HAPNFCReaderXPC : HMFObject {

	BOOL _supportsBackgroundReading;
	NSString* _stream;
	unsigned long long _source;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_xpc_object> _event;
	id<HAPNFCReaderStream> _readerStream;

}

@property (retain) NSString * stream;                                       //@synthesize stream=_stream - In the implementation block
@property (assign) unsigned long long source;                               //@synthesize source=_source - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> event;                          //@synthesize event=_event - In the implementation block
@property (retain) id<HAPNFCReaderStream> readerStream;                     //@synthesize readerStream=_readerStream - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundReading;              //@synthesize supportsBackgroundReading=_supportsBackgroundReading - In the implementation block
-(NSString *)stream;
-(void)setStream:(NSString *)arg1 ;
-(void)setEvent:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)event;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setSource:(unsigned long long)arg1 ;
-(id<HAPNFCReaderStream>)readerStream;
-(void)beginSession;
-(id)initReaderWithStream:(id)arg1 fromSource:(unsigned long long)arg2 workQueue:(id)arg3 readerStream:(id)arg4 ;
-(void)setReaderStream:(id<HAPNFCReaderStream>)arg1 ;
-(unsigned long long)source;
-(BOOL)supportsBackgroundReading;
@end
