/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode;

@interface SCNIKJoint : NSObject {

	SCNNode* joint;
	double maxAllowedRotationAngle;

}

@property (assign,nonatomic) SCNNode * joint; 
@property (assign,nonatomic) double maxAllowedRotationAngle; 
-(SCNNode *)joint;
-(void)setJoint:(SCNNode *)arg1 ;
-(double)maxAllowedRotationAngle;
-(void)setMaxAllowedRotationAngle:(double)arg1 ;
@end
