/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>

@interface SXMapComponentSizer : SXComponentSizer
+(BOOL)isSpanSetOnRegion:(SCD_Struct_SX20)arg1 ;
+(BOOL)isCenterSetOnRegion:(SCD_Struct_SX20)arg1 ;
+(SCD_Struct_SX20)regionForCoordinates:(id)arg1 ;
+(SCD_Struct_SX20)regionFromRegion:(SCD_Struct_SX20)arg1 coordinates:(id)arg2 ;
+(SCD_Struct_SX21)mapRectForRegion:(SCD_Struct_SX20)arg1 ;
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
@end
