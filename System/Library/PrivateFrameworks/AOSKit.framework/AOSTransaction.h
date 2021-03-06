/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSConditionLock;

@interface AOSTransaction : NSObject <NSCoding> {

	unsigned char didSucceed;
	unsigned char didFinish;
	void* result;
	CFErrorRef error;
	/*function pointer*/void* callbackFunction;
	/*^block*/id callbackBlock;
	NSObject*<OS_dispatch_queue> callbackQueue;
	void* context;
	NSConditionLock* waitLock;
	/*function pointer*/void* contextRetain;
	/*function pointer*/void* contextRelease;

}
-(id)result;
-(void)dealloc;
-(void)finalize;
-(id)error;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSuccessful;
@end

