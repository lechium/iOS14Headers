/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

@class PUOneUpAccessoryViewControllersManager;

@interface PUOneUpDetailsEducationalCardSuggestionsProvider : PUOneUpSuggestionsProvider {

	PUOneUpAccessoryViewControllersManager* _accessoryViewControllersManager;

}

@property (nonatomic,readonly) PUOneUpAccessoryViewControllersManager * accessoryViewControllersManager;              //@synthesize accessoryViewControllersManager=_accessoryViewControllersManager - In the implementation block
+(void)setDidDisplayEducationalCard:(BOOL)arg1 ;
+(id)_userDefaults;
+(BOOL)didDisplayEducationalCard;
-(id)initWithAccessoryViewControllersManager:(id)arg1 ;
-(PUOneUpAccessoryViewControllersManager *)accessoryViewControllersManager;
-(id)init;
-(BOOL)canProvideSuggestionForAsset:(id)arg1 ;
-(id)requestSuggestionForAsset:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
@end
