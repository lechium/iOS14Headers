/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoStandalonePaymentSetupMoreInfoItem : PBCodable <NSCopying> {

	NSString* _body;
	NSData* _imageData;
	NSString* _imageURL;
	NSString* _linkText;
	NSString* _linkURL;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) NSString * body;                  //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkText; 
@property (nonatomic,retain) NSString * linkText;              //@synthesize linkText=_linkText - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkURL; 
@property (nonatomic,retain) NSString * linkURL;               //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,readonly) BOOL hasImageURL; 
@property (nonatomic,retain) NSString * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
-(NSData *)imageData;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasBody;
-(NSString *)linkURL;
-(void)writeTo:(id)arg1 ;
-(NSString *)linkText;
-(BOOL)readFrom:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)hasTitle;
-(NSString *)title;
-(BOOL)hasImageData;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setLinkText:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)imageURL;
-(id)dictionaryRepresentation;
-(BOOL)hasImageURL;
-(void)setLinkURL:(NSString *)arg1 ;
-(BOOL)hasLinkText;
-(BOOL)hasLinkURL;
@end

