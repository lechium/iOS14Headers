/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NTPBTodaySectionsMapping, NSDictionary;

@interface FCPersonalizationTodaySectionMapping : NSObject {

	NTPBTodaySectionsMapping* _pbTodaySectionMapping;
	NSDictionary* _todaySectionIdentifiersToFRGroupViewExposureTypes;

}

@property (nonatomic,retain) NSDictionary * todaySectionIdentifiersToFRGroupViewExposureTypes;              //@synthesize todaySectionIdentifiersToFRGroupViewExposureTypes=_todaySectionIdentifiersToFRGroupViewExposureTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPBTodaySectionMapping:(id)arg1 ;
-(NSDictionary *)todaySectionIdentifiersToFRGroupViewExposureTypes;
-(id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1 ;
-(void)setTodaySectionIdentifiersToFRGroupViewExposureTypes:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
