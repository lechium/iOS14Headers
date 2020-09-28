/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, HUInstructionsItem, NSSet, HFItemProvider;

@interface HUFirmwareUpdateItemProvider : HFItemProvider {

	BOOL _hasProvidedInstructionsItem;
	HMHome* _home;
	/*^block*/id _filter;
	unsigned long long _style;
	HUInstructionsItem* _instructionsItem;
	NSSet* _linkedApplicationItems;
	HFItemProvider* _linkedApplicationItemProvider;

}

@property (nonatomic,retain) HFItemProvider * linkedApplicationItemProvider;              //@synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider - In the implementation block
@property (nonatomic,retain) NSSet * linkedApplicationItems;                              //@synthesize linkedApplicationItems=_linkedApplicationItems - In the implementation block
@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                       //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedInstructionsItem;                            //@synthesize hasProvidedInstructionsItem=_hasProvidedInstructionsItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                             //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id filter;                                                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                  //@synthesize style=_style - In the implementation block
+(BOOL)prefersNonBlockingReloads;
+(/*^block*/id)itemComparator;
-(id)items;
-(id)filter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(unsigned long long)style;
-(id)init;
-(void)setFilter:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(HMHome *)home;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(NSSet *)linkedApplicationItems;
-(void)setLinkedApplicationItems:(NSSet *)arg1 ;
-(id)initWithHome:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setLinkedApplicationItemProvider:(HFItemProvider *)arg1 ;
-(HFItemProvider *)linkedApplicationItemProvider;
-(/*^block*/id)_effectiveFilter;
-(id)_localizedDescriptionForAppName:(id)arg1 accessoriesWithFirmwareUpdates:(id)arg2 visibleAccessoryTileDisplayNames:(id)arg3 ;
-(id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2 ;
-(BOOL)hasProvidedInstructionsItem;
-(void)setHasProvidedInstructionsItem:(BOOL)arg1 ;
@end
