/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIRootWindowScenePresentationBinder.h>

@class SBRootSceneWindow, NSMutableArray, UIWindowScene;

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {

	SBRootSceneWindow* _rootWindow;
	NSMutableArray* _disconnectionAssertions;
	UIWindowScene* _disconnectedFromScene;

}

@property (nonatomic,readonly) SBRootSceneWindow * rootWindow;              //@synthesize rootWindow=_rootWindow - In the implementation block
+(id)sharedInstance;
-(SBRootSceneWindow *)rootWindow;
-(id)assertDisconnectionFromRenderServerForReason:(id)arg1 ;
-(void)_disconnectFromRenderServer;
-(id)init;
-(void)_reconnectToRenderServer;
@end

