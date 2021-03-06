/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <MapKit/MKCircle.h>

@interface HUReverseCircleOverlay : MKCircle {

	SCD_Struct_HU11 _boundingRect;

}

@property (assign,nonatomic) SCD_Struct_HU11 boundingRect;              //@synthesize boundingRect=_boundingRect - In the implementation block
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 boundingMapRect:(SCD_Struct_HU11)arg3 ;
-(void)setBoundingRect:(SCD_Struct_HU11)arg1 ;
-(SCD_Struct_HU11)innerCircleBoundingMapRect;
-(SCD_Struct_HU11)boundingMapRect;
-(SCD_Struct_HU11)boundingRect;
@end

