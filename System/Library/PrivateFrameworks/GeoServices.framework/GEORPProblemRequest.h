/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, GEORPDebugSettings, NSData, NSString, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	GEORPDebugSettings* _debugSettings;
	NSData* _devicePushToken;
	NSString* _inputLanguage;
	NSString* _problemUuid;
	GEORPProblem* _problem;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_debugSettings : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_inputLanguage : 1;
		unsigned read_problemUuid : 1;
		unsigned read_problem : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProblem; 
@property (nonatomic,retain) GEORPProblem * problem; 
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasProblemUuid; 
@property (nonatomic,retain) NSString * problemUuid; 
@property (nonatomic,readonly) BOOL hasDebugSettings; 
@property (nonatomic,retain) GEORPDebugSettings * debugSettings; 
+(BOOL)isValid:(id)arg1 ;
-(GEORPClientCapabilities *)clientCapabilities;
-(Class)responseClass;
-(BOOL)hasClientMetadata;
-(unsigned)requestTypeCode;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(BOOL)hasClientCapabilities;
-(GEOPDClientMetadata *)clientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setInputLanguage:(NSString *)arg1 ;
-(BOOL)hasProblem;
-(GEORPProblem *)problem;
-(BOOL)hasInputLanguage;
-(NSString *)problemUuid;
-(void)setProblem:(GEORPProblem *)arg1 ;
-(void)setProblemUuid:(NSString *)arg1 ;
-(BOOL)hasProblemUuid;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(id)jsonRepresentation;
-(GEORPDebugSettings *)debugSettings;
-(void)setDebugSettings:(GEORPDebugSettings *)arg1 ;
-(BOOL)hasDebugSettings;
-(BOOL)hasAnalyticMetadata;
-(BOOL)hasDevicePushToken;
-(NSString *)inputLanguage;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasUserEmail;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)userEmail;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)devicePushToken;
-(id)description;
-(id)dictionaryRepresentation;
@end
