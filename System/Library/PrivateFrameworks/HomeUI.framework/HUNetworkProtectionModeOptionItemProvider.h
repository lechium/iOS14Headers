/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMAccessoryNetworkProtectionGroup, NSMutableSet;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider {

	HMAccessoryNetworkProtectionGroup* _group;
	NSMutableSet* _networkProtectionModeOptionItems;

}

@property (nonatomic,retain) NSMutableSet * networkProtectionModeOptionItems;               //@synthesize networkProtectionModeOptionItems=_networkProtectionModeOptionItems - In the implementation block
@property (nonatomic,copy,readonly) HMAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
-(id)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(id)init;
-(HMAccessoryNetworkProtectionGroup *)group;
-(id)reloadItems;
-(NSMutableSet *)networkProtectionModeOptionItems;
-(void)setNetworkProtectionModeOptionItems:(NSMutableSet *)arg1 ;
@end
