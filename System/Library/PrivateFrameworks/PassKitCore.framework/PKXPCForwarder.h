/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKXPCForwarder : NSObject <NSCopying> {

	os_unfair_lock_s _lock;
	id _target;
	Class _targetClass;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)_initWithTarget:(id)arg1 targetClass:(Class)arg2 ;
-(void)clearTarget;
@end

