/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNConstantScaleConstraint : SCNConstraint {

	float _scale;
	BOOL _screenSpace;

}

@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) BOOL screenSpace; 
+(BOOL)supportsSecureCoding;
+(id)constantScaleConstraint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
@end

