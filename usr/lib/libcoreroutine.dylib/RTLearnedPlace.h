/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>

@class NSUUID, RTMapItem, NSString, NSDate;

@interface RTLearnedPlace : NSObject <RTCoreDataReadable, RTCoreDataWritable> {

	NSUUID* _identifier;
	unsigned long long _type;
	unsigned long long _typeSource;
	RTMapItem* _mapItem;
	NSString* _customLabel;
	NSDate* _creationDate;
	NSDate* _expirationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long typeSource;              //@synthesize typeSource=_typeSource - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                        //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSString * customLabel;                     //@synthesize customLabel=_customLabel - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                      //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)placeTypeSourceToString:(unsigned long long)arg1 ;
+(unsigned long long)placeTypeFromType:(long long)arg1 ;
+(id)createWithLearnedLocationOfInterestMO:(id)arg1 ;
+(BOOL)learnedPlaceTypeIsValid:(unsigned long long)arg1 ;
+(unsigned long long)placeTypeFromLocationOfInterestType:(long long)arg1 ;
+(unsigned long long)placeTypeSourceFromTypeSource:(unsigned long long)arg1 ;
+(id)placeTypeToString:(unsigned long long)arg1 ;
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithLearnedPlaceMO:(id)arg1 ;
+(BOOL)isTypeSourceVaild:(unsigned long long)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)expirationDate;
-(id)init;
-(NSString *)customLabel;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)creationDate;
-(unsigned long long)typeSource;
-(RTMapItem *)mapItem;
-(unsigned long long)hash;
-(NSString *)description;
-(id)managedObjectWithContext:(id)arg1 ;
-(void)updateManagedObject:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 typeSource:(unsigned long long)arg3 mapItem:(id)arg4 customLabel:(id)arg5 creationDate:(id)arg6 expirationDate:(id)arg7 ;
@end
