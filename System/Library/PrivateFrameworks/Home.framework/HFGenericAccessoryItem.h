/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:25 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory, NSString, HMHome, NSSet;

@interface HFGenericAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating> {

	id<HFCharacteristicValueSource> _valueSource;
	HMAccessory* _accessory;

}

@property (nonatomic,readonly) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)services;
-(HMAccessory *)accessory;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 valueSource:(id)arg2 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMHome *)home;
@end

