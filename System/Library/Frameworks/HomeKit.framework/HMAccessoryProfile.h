/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMObjectMerge.h>

@class _HMAccessoryProfile, NSUUID, NSArray, HMAccessory, NSString;

@interface HMAccessoryProfile : NSObject <HMObjectMerge> {

	_HMAccessoryProfile* _accessoryProfile;

}

@property (nonatomic,readonly) _HMAccessoryProfile * accessoryProfile;              //@synthesize accessoryProfile=_accessoryProfile - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * uuid; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * services; 
@property (nonatomic,__weak,readonly) HMAccessory * accessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)services;
-(id)initWithAccessoryProfile:(id)arg1 ;
-(HMAccessory *)accessory;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uuid;
-(void)refreshStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(NSUUID *)profileUniqueIdentifier;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(NSString *)description;
-(_HMAccessoryProfile *)accessoryProfile;
@end

