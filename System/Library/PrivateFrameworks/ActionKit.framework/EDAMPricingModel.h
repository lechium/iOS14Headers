/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMPricingModel : FATObject {

	NSNumber* _gnomeActive;
	NSNumber* _gnomeWarmingPeriod;
	NSNumber* _pricingModelStart;

}

@property (nonatomic,retain) NSNumber * gnomeActive;                     //@synthesize gnomeActive=_gnomeActive - In the implementation block
@property (nonatomic,retain) NSNumber * gnomeWarmingPeriod;              //@synthesize gnomeWarmingPeriod=_gnomeWarmingPeriod - In the implementation block
@property (nonatomic,retain) NSNumber * pricingModelStart;               //@synthesize pricingModelStart=_pricingModelStart - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)gnomeActive;
-(void)setGnomeActive:(NSNumber *)arg1 ;
-(NSNumber *)gnomeWarmingPeriod;
-(void)setGnomeWarmingPeriod:(NSNumber *)arg1 ;
-(NSNumber *)pricingModelStart;
-(void)setPricingModelStart:(NSNumber *)arg1 ;
@end
