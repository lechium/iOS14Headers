/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPZone, NSString;

@interface CKDPZoneSaveRequest : PBRequest <NSCopying> {

	CKDPZone* _recordZone;
	NSString* _zoneProtectionInfoTag;

}

@property (nonatomic,readonly) BOOL hasRecordZone; 
@property (nonatomic,retain) CKDPZone * recordZone;                         //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfoTag; 
@property (nonatomic,retain) NSString * zoneProtectionInfoTag;              //@synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag - In the implementation block
+(id)options;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(BOOL)hasRecordZone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecordZone:(CKDPZone *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPZone *)recordZone;
-(id)dictionaryRepresentation;
-(void)setZoneProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasZoneProtectionInfoTag;
-(NSString *)zoneProtectionInfoTag;
@end

