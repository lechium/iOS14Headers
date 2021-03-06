/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/HUCCFavoriteItemProvider.h>

@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteServiceItemProvider : HFItemProvider <HUCCFavoriteItemProvider> {

	unsigned long long _maximumNumberOfItems;
	HMHome* _home;
	NSMutableSet* _serviceLikeItems;

}

@property (nonatomic,retain) NSMutableSet * serviceLikeItems;                      //@synthesize serviceLikeItems=_serviceLikeItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                      //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItems;              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfItems;
-(NSMutableSet *)serviceLikeItems;
-(id)invalidationReasons;
-(id)reloadItems;
-(HMHome *)home;
-(void)setServiceLikeItems:(NSMutableSet *)arg1 ;
@end

