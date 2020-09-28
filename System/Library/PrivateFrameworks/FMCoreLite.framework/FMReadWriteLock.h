/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCoreLite/FMCoreLite-Structs.h>
@class NSString;

@interface FMReadWriteLock : NSObject {

	NSString* _lockName;
	opaque_pthread_rwlock_t _lock;

}

@property (nonatomic,retain) NSString * lockName;                       //@synthesize lockName=_lockName - In the implementation block
@property (assign,nonatomic) opaque_pthread_rwlock_t lock;              //@synthesize lock=_lock - In the implementation block
-(void)setLock:(opaque_pthread_rwlock_t)arg1 ;
-(opaque_pthread_rwlock_t)lock;
-(id)initWithLockName:(id)arg1 ;
-(id)init;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)setLockName:(NSString *)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
-(NSString *)lockName;
@end
