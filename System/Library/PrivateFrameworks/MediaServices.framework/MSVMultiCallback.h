/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, MSVCallback, NSObject, NSArray;

@interface MSVMultiCallback : NSObject {

	NSMutableArray* _callbacks;
	MSVCallback* _firstCallback;
	MSVCallback* _lastCallback;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * callbacks; 
@property (nonatomic,retain) MSVCallback * firstCallback; 
@property (nonatomic,retain) MSVCallback * lastCallback; 
-(void)invoke;
-(void)setFirstCallback:(MSVCallback *)arg1 ;
-(BOOL)removeCallback:(id)arg1 ;
-(id)init;
-(MSVCallback *)lastCallback;
-(unsigned long long)count;
-(void)setLastCallback:(MSVCallback *)arg1 ;
-(NSArray *)callbacks;
-(void)addCallback:(id)arg1 ;
-(MSVCallback *)firstCallback;
-(void)invokeWithObject:(id)arg1 ;
@end

