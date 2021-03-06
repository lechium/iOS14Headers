/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSKit/TSKit-Structs.h>
@interface TSKRunLoopTicket : NSObject {

	long long _qualityOfService;
	opaque_pthread_t* _threadId;
	CFRunLoopRef _runLoop;

}

@property (readonly) long long qualityOfService; 
-(CFRunLoopRef)runLoop;
-(long long)qualityOfService;
-(opaque_pthread_t*)threadId;
-(void)setRunLoop:(CFRunLoopRef)arg1 ;
-(id)initWithQualityOfService:(long long)arg1 ;
-(BOOL)hasRunLoop:(CFRunLoopRef)arg1 ;
-(void)setThreadId:(opaque_pthread_t*)arg1 ;
@end

