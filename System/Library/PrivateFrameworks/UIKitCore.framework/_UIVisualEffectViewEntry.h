/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectDiffable.h>

@class NSString;

@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable> {

	long long _requirements;

}

@property (assign,nonatomic) long long requirements;                //@synthesize requirements=_requirements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyForTransitionOut;
-(long long)requirements;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(void)convertToIdentity;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyEffectAsRequested:(BOOL)arg1 toView:(id)arg2 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(void)setRequirements:(long long)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(NSString *)description;
@end

