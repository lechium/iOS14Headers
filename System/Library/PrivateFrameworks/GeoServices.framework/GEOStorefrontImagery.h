/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOStorefrontImagery : NSObject {

	unsigned long long _identifier;
	unsigned _buildId;
	unsigned short _bucketId;
	unsigned long long _timestamp;
	double _groundAltitude;
	GEOOrientedPosition _position;
	NSArray* _cameras;
	unsigned _dataFormatVersion;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned short bucketId;                    //@synthesize bucketId=_bucketId - In the implementation block
@property (nonatomic,readonly) unsigned buildId;                           //@synthesize buildId=_buildId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double groundAltitude;                      //@synthesize groundAltitude=_groundAltitude - In the implementation block
@property (nonatomic,readonly) GEOOrientedPosition position;               //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) NSArray * cameras;                          //@synthesize cameras=_cameras - In the implementation block
@property (nonatomic,readonly) unsigned dataFormatVersion;                 //@synthesize dataFormatVersion=_dataFormatVersion - In the implementation block
-(unsigned long long)identifier;
-(id)initWithPhotoPosition:(id)arg1 ;
-(NSArray *)cameras;
-(unsigned long long)timestamp;
-(GEOOrientedPosition)position;
-(unsigned short)bucketId;
-(id)init;
-(unsigned)buildId;
-(unsigned)dataFormatVersion;
-(double)groundAltitude;
@end
