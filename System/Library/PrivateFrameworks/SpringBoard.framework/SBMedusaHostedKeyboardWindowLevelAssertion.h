/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBMedusaHostedKeyboardWindowLevelAssertion : NSObject <BSInvalidatable> {

	/*^block*/id _invalidationHandler;
	unsigned long long _priority;
	double _windowLevel;

}

@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) double windowLevel;                       //@synthesize windowLevel=_windowLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(unsigned long long)priority;
-(double)windowLevel;
-(id)initWithMedusaHostedKeyboardWindow:(id)arg1 priority:(unsigned long long)arg2 windowLevel:(double)arg3 ;
@end

