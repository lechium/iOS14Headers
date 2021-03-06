/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneObserver.h>

@class NSMapTable, FBSSceneClientSettingsDiffInspector, NSString;

@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <FBSceneObserver> {

	NSMapTable* _mapSceneToKeyboardForwardingStateMachine;
	FBSSceneClientSettingsDiffInspector* _layersChangedClientSettingsDiffInspector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedInstance;
+(BOOL)supportsForwardingKeyboardLayers;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(NSString *)debugDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_init;
-(id)init;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)trackScene:(id)arg1 ;
-(id)_newStateMachineWithScene:(id)arg1 ;
-(void)_updateKeyboardLayersForScene:(id)arg1 ;
-(void)scene:(id)arg1 willPrioritizePresenter:(id)arg2 ;
-(id)_stateMachineForScene:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end

