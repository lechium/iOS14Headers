/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2ContactDetailSent : PBCodable <NSCopying> {

	int _detail;
	int _foundIn;
	NSString* _key;
	int _source;
	int _tokens;
	BOOL _hasName;
	SCD_Struct_SG5 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasDetail; 
@property (assign,nonatomic) int detail;                   //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) BOOL hasFoundIn; 
@property (assign,nonatomic) int foundIn;                  //@synthesize foundIn=_foundIn - In the implementation block
@property (assign,nonatomic) BOOL hasHasName; 
@property (assign,nonatomic) BOOL hasName;                 //@synthesize hasName=_hasName - In the implementation block
@property (assign,nonatomic) BOOL hasTokens; 
@property (assign,nonatomic) int tokens;                   //@synthesize tokens=_tokens - In the implementation block
-(int)tokens;
-(void)setTokens:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSource;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)detail;
-(BOOL)hasName;
-(void)setHasName:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)foundIn;
-(BOOL)hasDetail;
-(int)source;
-(unsigned long long)hash;
-(void)setDetail:(int)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasDetail:(BOOL)arg1 ;
-(id)detailAsString:(int)arg1 ;
-(int)StringAsDetail:(id)arg1 ;
-(void)setFoundIn:(int)arg1 ;
-(void)setHasFoundIn:(BOOL)arg1 ;
-(BOOL)hasFoundIn;
-(id)foundInAsString:(int)arg1 ;
-(int)StringAsFoundIn:(id)arg1 ;
-(void)setHasHasName:(BOOL)arg1 ;
-(BOOL)hasHasName;
-(void)setHasTokens:(BOOL)arg1 ;
-(BOOL)hasTokens;
-(id)tokensAsString:(int)arg1 ;
-(int)StringAsTokens:(id)arg1 ;
@end
