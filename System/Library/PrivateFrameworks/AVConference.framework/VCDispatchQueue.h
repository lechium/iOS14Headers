/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface VCDispatchQueue : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _rootQueues;

}
+(id)defaultManager;
-(void)dealloc;
-(id)init;
-(id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(BOOL)arg2 ;
@end

