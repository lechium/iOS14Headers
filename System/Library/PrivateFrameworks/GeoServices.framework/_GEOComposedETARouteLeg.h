/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _GEOComposedETARouteLeg : NSObject <NSSecureCoding> {

	NSArray* _steps;

}

@property (nonatomic,retain) NSArray * steps;                      //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) double travelDuration; 
+(BOOL)supportsSecureCoding;
-(NSArray *)steps;
-(id)initWithCoder:(id)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(id)descriptionWithPrecision:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)travelDuration;
-(id)description;
@end

