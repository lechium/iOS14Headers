/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class GLKBaseEffect, EAGLContext, UIDynamicAnimator, GLKView, NSString;

@interface UIDynamicsDebug : NSObject <GLKViewDelegate> {

	unsigned _vertexBuffer;
	SCD_Struct_UI69 _vertices[42000];
	GLKBaseEffect* _effect;
	EAGLContext* _ctx;
	BOOL _enabled;
	BOOL _showPhysics;
	BOOL _showOutlineInterior;
	BOOL _showFields;
	UIDynamicAnimator* _animator;
	GLKView* _debugView;

}

@property (assign,nonatomic,__weak) UIDynamicAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) GLKView * debugView;                              //@synthesize debugView=_debugView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL showPhysics;                                 //@synthesize showPhysics=_showPhysics - In the implementation block
@property (assign,nonatomic) BOOL showOutlineInterior;                         //@synthesize showOutlineInterior=_showOutlineInterior - In the implementation block
@property (assign,nonatomic) BOOL showFields;                                  //@synthesize showFields=_showFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIDynamicAnimator *)animator;
-(void)setNeedsDisplay;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(void)dealloc;
-(id)initWithAnimator:(id)arg1 ;
-(BOOL)enabled;
-(GLKView *)debugView;
-(void)captureDebugInformation;
-(id)init;
-(BOOL)showPhysics;
-(void)_teardownDebugView;
-(void)_setupDebugViewIfNeccessary;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)setShowPhysics:(BOOL)arg1 ;
-(BOOL)showOutlineInterior;
-(void)setShowOutlineInterior:(BOOL)arg1 ;
-(BOOL)showFields;
-(void)setDebugView:(GLKView *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setShowFields:(BOOL)arg1 ;
@end

