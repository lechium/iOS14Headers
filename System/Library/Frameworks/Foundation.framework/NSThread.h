/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary, NSString;

@interface NSThread : NSObject {

	id _private;
	unsigned char _bytes[44];

}

@property (retain,readonly) NSMutableDictionary * threadDictionary; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
@property (assign) unsigned long long stackSize; 
@property (readonly) BOOL isMainThread; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(void)exit;
+(BOOL)isMainThread;
+(BOOL)isDying;
+(id)currentThread;
+(void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
+(void)detachNewThreadWithBlock:(/*^block*/id)arg1 ;
+(BOOL)isMultiThreaded;
+(id)callStackSymbols;
+(id)mainThread;
+(void)sleepUntilDate:(id)arg1 ;
+(double)threadPriority;
+(BOOL)setThreadPriority:(double)arg1 ;
+(void)sleepForTimeInterval:(double)arg1 ;
+(id)callStackReturnAddresses;
-(unsigned long long)stackSize;
-(void)_nq:(id)arg1 ;
-(BOOL)isMainThread;
-(void)cancel;
-(BOOL)isDying;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)runLoop;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(long long)qualityOfService;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(pthread_override_sRef)_beginQoSOverride:(unsigned)arg1 relativePriority:(int)arg2 ;
-(void)start;
-(NSMutableDictionary *)threadDictionary;
-(id)init;
-(double)threadPriority;
-(BOOL)isCancelled;
-(void)setThreadPriority:(double)arg1 ;
-(void)_endQoSOverride:(pthread_override_sRef)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)_setThreadPriority:(double)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(NSString *)name;
-(void)main;
-(id)description;
-(void)setStackSize:(unsigned long long)arg1 ;
@end

