/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIScene, UICarPlayApplicationSceneSettings, NSString;

@interface _UICarPlaySceneComponent : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	UICarPlayApplicationSceneSettings* _carPlaySceneSettings;

}

@property (nonatomic,retain) UICarPlayApplicationSceneSettings * carPlaySceneSettings;              //@synthesize carPlaySceneSettings=_carPlaySceneSettings - In the implementation block
@property (nonatomic,readonly) BOOL disableFiveRowKeyboards; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;               //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(UICarPlayApplicationSceneSettings *)carPlaySceneSettings;
-(void)setCarPlaySceneSettings:(UICarPlayApplicationSceneSettings *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(BOOL)disableFiveRowKeyboards;
@end

