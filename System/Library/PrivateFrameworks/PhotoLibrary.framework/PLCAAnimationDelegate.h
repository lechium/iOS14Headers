/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface PLCAAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _completion;
	/*^block*/id _start;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id start;                                //@synthesize start=_start - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStart:(id)arg1 ;
-(void)dealloc;
-(void)setStart:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)completion;
-(id)start;
@end
