/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {

	CLLocationCoordinate2D _centerCoordinate;
	double _heading;
	double _pitch;
	double _altitude;
	MKMapView* _mapView;
	BOOL _pitchAdjustsAltitude;
	BOOL _needsStateUpdate;

}

@property (assign,setter=_setPrecisePitch:,getter=_precisePitch,nonatomic) double precisePitch;              //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate;                                        //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) double centerCoordinateDistance; 
@property (assign,nonatomic) double heading;                                                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double altitude;                                                                //@synthesize altitude=_altitude - In the implementation block
+(id)camera;
+(id)_cameraLookingAtMapRect:(SCD_Struct_MK6)arg1 forViewSize:(CGSize)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4 ;
+(id)_cameraLookingAtGEOMapRect:(const SCD_Struct_MK6*)arg1 aspectRatio:(float)arg2 ;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromEyeCoordinate:(CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3 ;
-(void)setHeading:(double)arg1 ;
-(CLLocationCoordinate2D)centerCoordinate;
-(double)heading;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_validate;
-(double)altitude;
-(void)setAltitude:(double)arg1 ;
-(double)pitch;
-(void)_updateState;
-(id)_mapView;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setPrecisePitch:(double)arg1 ;
-(double)centerCoordinateDistance;
-(SCD_Struct_MK6)_enclosingGEOMapRectForAspectRatio:(float)arg1 ;
-(void)setCenterCoordinateDistance:(double)arg1 ;
-(double)_precisePitch;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setMapView:(id)arg1 ;
-(void)setPitch:(double)arg1 ;
-(id)description;
-(void)_mapViewStateChanged;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

