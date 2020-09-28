/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSRequest, ICPBDGSResponse;

@interface ICPBDGSMessage : PBCodable <NSCopying> {

	ICPBDGSRequest* _request;
	ICPBDGSResponse* _response;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) ICPBDGSRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ICPBDGSResponse * response;              //@synthesize response=_response - In the implementation block
-(void)setResponse:(ICPBDGSResponse *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasRequest;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(ICPBDGSRequest *)request;
-(void)setRequest:(ICPBDGSRequest *)arg1 ;
-(unsigned long long)hash;
-(ICPBDGSResponse *)response;
-(id)description;
-(BOOL)hasResponse;
-(id)dictionaryRepresentation;
@end
