/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOMapItemStorage, NSUUID, NSNumber;

@interface MapsSync.MapsSyncHistoryPlaceItem : MapsSync.MapsSyncHistoryItem {

	 _mapItemStorage;
	 _latitude;
	 _longitude;
	 _muid;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (readonly,nonatomic) NSUUID * supersededSearchId; 
@property (readonly,nonatomic) NSNumber * latitude; 
@property (readonly,nonatomic) NSNumber * longitude; 
@property (readonly,nonatomic) NSNumber * muid; 
+(void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSNumber *)muid;
-(id)initWithObject:(id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(Class)managedObjectClass;
-(NSNumber *)longitude;
-(NSNumber *)latitude;
-(GEOMapItemStorage *)mapItemStorage;
-(NSUUID *)supersededSearchId;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(Class)mutableObjectClass;
-(NSString *)description;
@end

