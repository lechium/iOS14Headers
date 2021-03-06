/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueIdentifier.h>
@class NSArray;


@protocol GEOVenueIdentifier <NSObject>
@property (getter=_hasVenueID,nonatomic,readonly) BOOL hasVenueID; 
@property (nonatomic,readonly) unsigned long long venueID; 
@property (getter=_hasFeatureID,nonatomic,readonly) BOOL hasFeatureID; 
@property (nonatomic,readonly) unsigned long long featureID; 
@property (getter=_hasBusinessID,nonatomic,readonly) BOOL hasBusinessID; 
@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) NSArray * componentIdentifiers; 
@required
-(unsigned long long)featureID;
-(BOOL)_hasFeatureID;
-(BOOL)_hasVenueID;
-(BOOL)_hasBusinessID;
-(id)placeDataVenueIdentifierForVenue;
-(unsigned long long)venueID;
-(unsigned long long)businessID;
-(NSArray *)componentIdentifiers;
-(id)placeDataVenueIdentifier;

@end


@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier> {

	BOOL _hasVenueID;
	unsigned long long _venueID;
	BOOL _hasFeatureID;
	unsigned long long _featureID;
	BOOL _hasBusinessID;
	unsigned long long _businessID;
	NSArray* _componentIdentifiers;
	NSArray* _originalIdentifiers;

}

@property (getter=_hasVenueID,nonatomic,readonly) BOOL hasVenueID;                    //@synthesize hasVenueID=_hasVenueID - In the implementation block
@property (nonatomic,readonly) unsigned long long venueID;                            //@synthesize venueID=_venueID - In the implementation block
@property (getter=_hasFeatureID,nonatomic,readonly) BOOL hasFeatureID;                //@synthesize hasFeatureID=_hasFeatureID - In the implementation block
@property (nonatomic,readonly) unsigned long long featureID;                          //@synthesize featureID=_featureID - In the implementation block
@property (getter=_hasBusinessID,nonatomic,readonly) BOOL hasBusinessID;              //@synthesize hasBusinessID=_hasBusinessID - In the implementation block
@property (nonatomic,readonly) unsigned long long businessID;                         //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) NSArray * componentIdentifiers;                        //@synthesize componentIdentifiers=_componentIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentIdentifiersFromVenueIdentifiers:(id)arg1 ;
-(unsigned long long)featureID;
-(BOOL)_hasFeatureID;
-(BOOL)_hasVenueID;
-(BOOL)_hasBusinessID;
-(id)initWithVenueID:(unsigned long long)arg1 ;
-(id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifiers:(id)arg4 ;
-(id)placeDataVenueIdentifierForVenue;
-(id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2 ;
-(id)init;
-(unsigned long long)venueID;
-(id)initWithVenueIdentifiers:(id)arg1 ;
-(unsigned long long)businessID;
-(id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 ;
-(NSArray *)componentIdentifiers;
-(id)placeDataVenueIdentifier;
@end

