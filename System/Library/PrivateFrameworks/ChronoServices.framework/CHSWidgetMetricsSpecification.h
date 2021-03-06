/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CHSWidgetMetricsSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDictionary* _metricsByFamily;

}

@property (nonatomic,copy,readonly) NSDictionary * metricsByFamily;              //@synthesize metricsByFamily=_metricsByFamily - In the implementation block
@property (nonatomic,readonly) unsigned long long families; 
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)families;
-(id)initWithMetricsByFamily:(id)arg1 ;
-(NSDictionary *)metricsByFamily;
-(id)_initWithMetricsByFamily:(id)arg1 ;
-(id)metricsForFamily:(long long)arg1 ;
-(id)initWithMetricsSpecification:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

