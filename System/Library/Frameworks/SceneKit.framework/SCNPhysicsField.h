/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNPhysicsWorld, SCNNode;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {

	SCNVector3 _halfExtent;
	double _strength;
	double _falloffExponent;
	double _minimumDistance;
	BOOL _active;
	long long _scope;
	BOOL _usesEllipsoidalExtent;
	BOOL _exclusive;
	SCNVector3 _offset;
	SCNVector3 _direction;
	unsigned long long _categoryBitMask;
	SCNPhysicsWorld* _world;
	SCNNode* _node;
	c3dPhysicsField* _field;

}

@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloffExponent; 
@property (assign,nonatomic) double minimumDistance; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive; 
@property (assign,nonatomic) SCNVector3 halfExtent; 
@property (assign,nonatomic) BOOL usesEllipsoidalExtent; 
@property (assign,nonatomic) long long scope; 
@property (assign,nonatomic) SCNVector3 offset; 
@property (assign,nonatomic) SCNVector3 direction; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
+(id)field;
+(BOOL)supportsSecureCoding;
+(id)magneticField;
+(id)dragField;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)vortexField;
+(id)springField;
+(id)electricField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)radialGravityField;
+(id)linearGravityField;
+(void)_setDisplayScaleFactor:(double)arg1 ;
+(double)_displayScaleFactor;
-(SCNVector3)direction;
-(id)_owner;
-(BOOL)exclusive;
-(void)setScope:(long long)arg1 ;
-(void)setMinimumDistance:(double)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExclusive:(BOOL)arg1 ;
-(c3dPhysicsField*)_handle;
-(long long)scope;
-(void)dealloc;
-(void)_setOwner:(id)arg1 ;
-(void)setOffset:(SCNVector3)arg1 ;
-(BOOL)isExclusive;
-(SCNVector3)offset;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(BOOL)isActive;
-(id)copy;
-(void)setDirection:(SCNVector3)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)encodeWithCoder:(id)arg1 ;
-(double)strength;
-(double)minimumDistance;
-(void)setStrength:(double)arg1 ;
-(void)_removeOwner;
-(c3dPhysicsField*)_createField;
-(void)_setupCommonProperties;
-(void)setHalfExtent:(SCNVector3)arg1 ;
-(void)setFalloffExponent:(double)arg1 ;
-(void)setUsesEllipsoidalExtent:(BOOL)arg1 ;
-(double)falloffExponent;
-(SCNVector3)halfExtent;
-(BOOL)usesEllipsoidalExtent;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
-(void)_willRemoveFromPhysicsWorld;
-(void)_setWorld:(id)arg1 ;
-(SCNVector3)evalAtLocation:(SCNVector3)arg1 ;
@end
