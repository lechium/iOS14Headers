/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteConfiguration/RemoteConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, RCUserSegmentationConfiguration, NSArray, NSDate, NSNumber;

@interface RCConfigurationResource : NSObject <NSCopying, NSSecureCoding> {

	NSString* _requestKey;
	NSData* _gzippedConfigurationData;
	RCUserSegmentationConfiguration* _userSegmentationConfiguration;
	NSArray* _treatmentIDs;
	NSArray* _segmentSetIDs;
	NSString* _configurationID;
	NSString* _contentHash;
	NSString* _lastModifiedString;
	NSString* _etag;
	NSString* _lastModifiedFallbackString;
	NSDate* _lastFetchedDate;
	NSNumber* _fallbackMaxAge;
	NSNumber* _endpointMaxAge;

}

@property (nonatomic,retain) NSString * requestKey;                                                        //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,readonly) NSData * configurationData; 
@property (nonatomic,retain) NSData * gzippedConfigurationData;                                            //@synthesize gzippedConfigurationData=_gzippedConfigurationData - In the implementation block
@property (nonatomic,retain) RCUserSegmentationConfiguration * userSegmentationConfiguration;              //@synthesize userSegmentationConfiguration=_userSegmentationConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * treatmentIDs;                                                       //@synthesize treatmentIDs=_treatmentIDs - In the implementation block
@property (nonatomic,retain) NSArray * segmentSetIDs;                                                      //@synthesize segmentSetIDs=_segmentSetIDs - In the implementation block
@property (nonatomic,retain) NSString * configurationID;                                                   //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,retain) NSString * contentHash;                                                       //@synthesize contentHash=_contentHash - In the implementation block
@property (nonatomic,retain) NSString * lastModifiedString;                                                //@synthesize lastModifiedString=_lastModifiedString - In the implementation block
@property (nonatomic,retain) NSString * etag;                                                              //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSString * lastModifiedFallbackString;                                        //@synthesize lastModifiedFallbackString=_lastModifiedFallbackString - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchedDate;                                                     //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
@property (nonatomic,retain) NSNumber * fallbackMaxAge;                                                    //@synthesize fallbackMaxAge=_fallbackMaxAge - In the implementation block
@property (nonatomic,retain) NSNumber * endpointMaxAge;                                                    //@synthesize endpointMaxAge=_endpointMaxAge - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)configurationID;
-(void)setConfigurationID:(NSString *)arg1 ;
-(NSString *)requestKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentHash:(NSString *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)contentHash;
-(NSArray *)segmentSetIDs;
-(NSArray *)treatmentIDs;
-(void)setRequestKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)configurationData;
-(NSDate *)lastFetchedDate;
-(unsigned long long)hash;
-(void)setLastFetchedDate:(NSDate *)arg1 ;
-(void)setSegmentSetIDs:(NSArray *)arg1 ;
-(NSString *)etag;
-(void)setTreatmentIDs:(NSArray *)arg1 ;
-(id)description;
-(void)setGzippedConfigurationData:(NSData *)arg1 ;
-(void)setLastModifiedString:(NSString *)arg1 ;
-(NSData *)gzippedConfigurationData;
-(NSString *)lastModifiedString;
-(NSString *)lastModifiedFallbackString;
-(void)setUserSegmentationConfiguration:(RCUserSegmentationConfiguration *)arg1 ;
-(void)setFallbackMaxAge:(NSNumber *)arg1 ;
-(void)setLastModifiedFallbackString:(NSString *)arg1 ;
-(NSNumber *)fallbackMaxAge;
-(void)setEndpointMaxAge:(NSNumber *)arg1 ;
-(NSNumber *)endpointMaxAge;
-(RCUserSegmentationConfiguration *)userSegmentationConfiguration;
-(BOOL)isExpiredWithMaxTTL:(double)arg1 allowedToReachEndpoint:(BOOL)arg2 ;
@end

