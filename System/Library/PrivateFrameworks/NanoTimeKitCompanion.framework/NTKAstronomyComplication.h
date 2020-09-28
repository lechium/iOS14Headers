/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKAstronomyComplication : NTKComplication {

	unsigned long long _vista;

}

@property (nonatomic,readonly) unsigned long long vista;              //@synthesize vista=_vista - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)vista;
-(id)appIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2 ;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
@end
