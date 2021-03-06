/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionPerformSelector : SCNAction {

	SEL _selector;
	id _target;

}
+(BOOL)supportsSecureCoding;
+(id)performSelector:(SEL)arg1 onTarget:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCustom;
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
@end

