/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface __NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(double)timeInterval;
-(unsigned long long)_cfTypeID;
-(BOOL)_tryRetain;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(void)invalidate;
-(void)setFireDate:(id)arg1 ;
-(oneway void)release;
-(id)init;
-(unsigned long long)retainCount;
-(id)userInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id)fireDate;
-(void)setTolerance:(double)arg1 ;
-(double)tolerance;
-(BOOL)isValid;
-(BOOL)_isDeallocating;
-(unsigned long long)hash;
-(id)retain;
-(void)fire;
@end

