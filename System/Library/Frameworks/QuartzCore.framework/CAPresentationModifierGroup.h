/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@interface CAPresentationModifierGroup : NSObject {

	void* _shmem;
	unsigned long long _capacity;
	unsigned long long _count;

}

@property (readonly) unsigned long long capacity; 
@property (readonly) unsigned long long count; 
+(id)groupWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(void)flush;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(Shmem*)shmem;
-(unsigned long long)nextSlot;
-(unsigned long long)count;
-(void)markWritten:(unsigned long long)arg1 ;
-(void)resetBitMask;
@end

