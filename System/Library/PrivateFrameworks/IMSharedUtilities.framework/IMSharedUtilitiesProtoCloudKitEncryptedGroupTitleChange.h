/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedGroupTitleChange : PBCodable <NSCopying> {

	NSString* _groupTitle;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupTitle; 
@property (nonatomic,retain) NSString * groupTitle;               //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                    //@synthesize padding=_padding - In the implementation block
-(BOOL)hasVersion;
-(NSString *)otherHandle;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)dealloc;
-(void)setPadding:(NSData *)arg1 ;
-(void)setGroupTitle:(NSString *)arg1 ;
-(BOOL)hasGroupTitle;
-(NSString *)groupTitle;
-(NSData *)padding;
-(void)setOtherHandle:(NSString *)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPadding;
-(BOOL)hasOtherHandle;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
