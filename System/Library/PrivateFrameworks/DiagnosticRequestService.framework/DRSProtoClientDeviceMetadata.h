/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DRSProtoClientDeviceMetadata : PBCodable <NSCopying> {

	NSString* _buildVariant;
	NSString* _deviceCategory;
	NSString* _deviceModel;
	NSString* _platform;

}

@property (nonatomic,readonly) BOOL hasBuildVariant; 
@property (nonatomic,retain) NSString * buildVariant;                //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCategory; 
@property (nonatomic,retain) NSString * deviceCategory;              //@synthesize deviceCategory=_deviceCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                 //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatform; 
@property (nonatomic,retain) NSString * platform;                    //@synthesize platform=_platform - In the implementation block
-(void)setDeviceModel:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(NSString *)deviceModel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)deviceCategory;
-(void)setDeviceCategory:(NSString *)arg1 ;
-(BOOL)hasDeviceCategory;
-(void)setPlatform:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasPlatform;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)platform;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)buildVariant;
-(void)setBuildVariant:(NSString *)arg1 ;
-(BOOL)hasBuildVariant;
@end
