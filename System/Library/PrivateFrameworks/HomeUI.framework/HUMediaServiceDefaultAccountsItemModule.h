/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUMediaServiceItemProviderDelegate.h>

@class NSSet, HMHome, HUMediaServiceItemProvider, NSString;

@interface HUMediaServiceDefaultAccountsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate> {

	NSSet* _itemProviders;
	HMHome* _home;
	HUMediaServiceItemProvider* _mediaServiceItemProvider;

}

@property (nonatomic,readonly) NSSet * itemProviders;                                              //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HUMediaServiceItemProvider * mediaServiceItemProvider;              //@synthesize mediaServiceItemProvider=_mediaServiceItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(NSSet *)itemProviders;
-(id)updateDefaultAccount:(id)arg1 ;
-(HUMediaServiceItemProvider *)mediaServiceItemProvider;
-(BOOL)containsItem:(id)arg1 ;
-(HMHome *)home;
-(void)mediaServiceItemProviderDidUpdateServices:(id)arg1 ;
@end

