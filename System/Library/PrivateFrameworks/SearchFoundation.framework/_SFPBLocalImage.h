/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBLocalImage.h>
@class NSData;


@protocol _SFPBLocalImage <NSObject>
@property (assign,nonatomic) int localImageType; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)localImageType;
-(void)setLocalImageType:(int)arg1;
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBLocalImage : PBCodable <_SFPBLocalImage, NSSecureCoding> {

	int _localImageType;

}

@property (assign,nonatomic) int localImageType;                    //@synthesize localImageType=_localImageType - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFacade:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)localImageType;
-(void)setLocalImageType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
@end
