/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventProcessor.h>

@class NSMutableArray, NSString;

@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor> {

	os_unfair_lock_s _lock;
	NSMutableArray* _recognizers;
	NSMutableArray* _blocks;

}

@property (nonatomic,retain) NSMutableArray * recognizers;              //@synthesize recognizers=_recognizers - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocks;                   //@synthesize blocks=_blocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)processEvent:(inout _IOHIDEvent*)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
-(void)addRecognizer:(id)arg1 recognitionBlock:(/*^block*/id)arg2 ;
-(void)removeRecognizer:(id)arg1 ;
-(void)setRecognizers:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)blocks;
-(NSMutableArray *)recognizers;
@end
