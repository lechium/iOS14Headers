/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBDictionaryMatchingRule, NSString;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying> {

	TPPBDictionaryMatchingRule* _matchingRule;
	NSString* _view;

}

@property (nonatomic,readonly) BOOL hasMatchingRule; 
@property (nonatomic,retain) TPPBDictionaryMatchingRule * matchingRule;              //@synthesize matchingRule=_matchingRule - In the implementation block
@property (nonatomic,readonly) BOOL hasView; 
@property (nonatomic,retain) NSString * view;                                        //@synthesize view=_view - In the implementation block
+(id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasView;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasMatchingRule;
-(TPPBDictionaryMatchingRule *)matchingRule;
-(void)setMatchingRule:(TPPBDictionaryMatchingRule *)arg1 ;
@end

