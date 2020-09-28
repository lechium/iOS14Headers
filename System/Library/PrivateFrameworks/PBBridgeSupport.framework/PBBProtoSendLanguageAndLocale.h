/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface PBBProtoSendLanguageAndLocale : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _appleLocale;
	NSData* _archivedPreferences;

}

@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasAppleLocale; 
@property (nonatomic,retain) NSString * appleLocale;                       //@synthesize appleLocale=_appleLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasArchivedPreferences; 
@property (nonatomic,retain) NSData * archivedPreferences;                 //@synthesize archivedPreferences=_archivedPreferences - In the implementation block
+(Class)appleLanguagesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)archivedPreferences;
-(void)setArchivedPreferences:(NSData *)arg1 ;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned long long)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)setAppleLocale:(NSString *)arg1 ;
-(BOOL)hasAppleLocale;
-(BOOL)hasArchivedPreferences;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(NSString *)appleLocale;
@end
