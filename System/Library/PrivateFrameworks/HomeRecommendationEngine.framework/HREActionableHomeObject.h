/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeContainedObject.h>
#import <libobjc.A.dylib/HFRoomContextProviding.h>

@protocol HFHomeKitObject;
@class HMHome, HMRoom, NSSet, NSString, HMService, NSUUID;

@interface HREActionableHomeObject : NSObject <HFHomeContainedObject, HFRoomContextProviding> {

	id<HFHomeKitObject> _homeKitObject;

}

@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;              //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (nonatomic,readonly) NSSet * characteristics; 
@property (nonatomic,readonly) NSString * primaryType; 
@property (nonatomic,readonly) NSSet * matchingTypes; 
@property (nonatomic,readonly) NSSet * actionTypes; 
@property (nonatomic,readonly) NSSet * profiles; 
@property (nonatomic,readonly) HMService * service; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) BOOL isActionable; 
@property (nonatomic,__weak,readonly) HMHome * home; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HMRoom * hf_parentRoom; 
+(id)_types:(id)arg1 notMatchedByActionableObjects:(id)arg2 ;
+(id)actionableObjectsFromHomeKitObjects:(id)arg1 ;
+(BOOL)actionableObjects:(id)arg1 matchAllTypes:(id)arg2 ;
+(BOOL)actionableObjects:(id)arg1 matchAllTypeGroups:(id)arg2 ;
+(id)filterActionableObjects:(id)arg1 toMatchTypes:(id)arg2 ;
+(id)filterActionableObjects:(id)arg1 toRooms:(id)arg2 ;
+(id)filterActionableObjects:(id)arg1 excludingObjectsInActions:(id)arg2 ;
-(NSSet *)profiles;
-(NSSet *)services;
-(NSString *)debugDescription;
-(id)serviceGroup;
-(BOOL)isActionable;
-(NSString *)primaryType;
-(NSUUID *)uniqueIdentifier;
-(HMRoom *)hf_parentRoom;
-(BOOL)isEqual:(id)arg1 ;
-(HMService *)service;
-(NSSet *)characteristics;
-(id<HFHomeKitObject>)homeKitObject;
-(unsigned long long)hash;
-(id)initWithHomeKitObject:(id)arg1 ;
-(NSString *)description;
-(NSSet *)actionTypes;
-(HMHome *)home;
-(id)singularProfile;
-(id)_characteristicsInServices:(id)arg1 ;
-(NSSet *)matchingTypes;
-(BOOL)_actionMap:(id)arg1 includesType:(id)arg2 ;
-(id)_profileTypeForProfile:(id)arg1 ;
-(BOOL)_matchesAnyInTypes:(id)arg1 ;
-(id)actionBuildersDerivedFromActions:(id)arg1 ;
-(BOOL)involvedInActionMap:(id)arg1 ;
-(id)characteristicMapFromActionMap:(id)arg1 ;
-(BOOL)involvedInAction:(id)arg1 ;
@end

