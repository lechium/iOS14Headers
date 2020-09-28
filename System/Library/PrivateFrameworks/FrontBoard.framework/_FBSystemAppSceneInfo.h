/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject {

	BOOL _hasSentFBSWorkspaceDelegateSceneCreate;
	FBSScene* _FBSScene;
	FBSSceneTransitionContext* _pendingTransitionContext;

}

@property (nonatomic,retain) FBSScene * FBSScene;                                               //@synthesize FBSScene=_FBSScene - In the implementation block
@property (assign,nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate;                       //@synthesize hasSentFBSWorkspaceDelegateSceneCreate=_hasSentFBSWorkspaceDelegateSceneCreate - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * pendingTransitionContext;              //@synthesize pendingTransitionContext=_pendingTransitionContext - In the implementation block
-(FBSScene *)FBSScene;
-(FBSSceneTransitionContext *)pendingTransitionContext;
-(void)setPendingTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(void)setFBSScene:(FBSScene *)arg1 ;
-(void)setHasSentFBSWorkspaceDelegateSceneCreate:(BOOL)arg1 ;
-(BOOL)hasSentFBSWorkspaceDelegateSceneCreate;
@end
