/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSetRequestOrigin.h>

@interface FTMutableSetRequestOrigin : FTSetRequestOrigin

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL enable_geo_location_features; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(double)longitude;
-(double)latitude;
-(void)setLatitude:(double)arg1 ;
-(BOOL)enable_geo_location_features;
-(void)setEnable_geo_location_features:(BOOL)arg1 ;
-(void)setLongitude:(double)arg1 ;
@end

