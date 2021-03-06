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

@class NSString, NPKProtoStandalonePaymentDigitalIssuanceMetadata, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable <NSCopying> {

	NSString* _currency;
	NSString* _depositAmount;
	NPKProtoStandalonePaymentDigitalIssuanceMetadata* _digitalIssuanceMetadata;
	NSString* _maxLoadedBalance;
	NSString* _minLoadedBalance;
	NSString* _minimumReaderModeBalance;
	NSString* _productIdentifier;
	NSString* _readerModeMetadataJson;
	NSString* _readerModeResourcesJson;
	NSMutableArray* _requiredFields;

}

@property (nonatomic,readonly) BOOL hasProductIdentifier; 
@property (nonatomic,retain) NSString * productIdentifier;                                                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrency; 
@property (nonatomic,retain) NSString * currency;                                                                     //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) BOOL hasDepositAmount; 
@property (nonatomic,retain) NSString * depositAmount;                                                                //@synthesize depositAmount=_depositAmount - In the implementation block
@property (nonatomic,readonly) BOOL hasMinLoadedBalance; 
@property (nonatomic,retain) NSString * minLoadedBalance;                                                             //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxLoadedBalance; 
@property (nonatomic,retain) NSString * maxLoadedBalance;                                                             //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredFields;                                                         //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,readonly) BOOL hasReaderModeMetadataJson; 
@property (nonatomic,retain) NSString * readerModeMetadataJson;                                                       //@synthesize readerModeMetadataJson=_readerModeMetadataJson - In the implementation block
@property (nonatomic,readonly) BOOL hasDigitalIssuanceMetadata; 
@property (nonatomic,retain) NPKProtoStandalonePaymentDigitalIssuanceMetadata * digitalIssuanceMetadata;              //@synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasReaderModeResourcesJson; 
@property (nonatomic,retain) NSString * readerModeResourcesJson;                                                      //@synthesize readerModeResourcesJson=_readerModeResourcesJson - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumReaderModeBalance; 
@property (nonatomic,retain) NSString * minimumReaderModeBalance;                                                     //@synthesize minimumReaderModeBalance=_minimumReaderModeBalance - In the implementation block
+(Class)requiredFieldsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currency;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSString *)minLoadedBalance;
-(NSString *)maxLoadedBalance;
-(void)setCurrency:(NSString *)arg1 ;
-(void)setDepositAmount:(NSString *)arg1 ;
-(void)setMinLoadedBalance:(NSString *)arg1 ;
-(void)setMaxLoadedBalance:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequiredFields:(NSMutableArray *)arg1 ;
-(NSString *)depositAmount;
-(NSMutableArray *)requiredFields;
-(NPKProtoStandalonePaymentDigitalIssuanceMetadata *)digitalIssuanceMetadata;
-(NSString *)minimumReaderModeBalance;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasCurrency;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasProductIdentifier;
-(void)addRequiredFields:(id)arg1 ;
-(void)setReaderModeMetadataJson:(NSString *)arg1 ;
-(void)setDigitalIssuanceMetadata:(NPKProtoStandalonePaymentDigitalIssuanceMetadata *)arg1 ;
-(void)setReaderModeResourcesJson:(NSString *)arg1 ;
-(void)setMinimumReaderModeBalance:(NSString *)arg1 ;
-(unsigned long long)requiredFieldsCount;
-(void)clearRequiredFields;
-(id)requiredFieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDepositAmount;
-(BOOL)hasMinLoadedBalance;
-(BOOL)hasMaxLoadedBalance;
-(BOOL)hasReaderModeMetadataJson;
-(BOOL)hasDigitalIssuanceMetadata;
-(BOOL)hasReaderModeResourcesJson;
-(BOOL)hasMinimumReaderModeBalance;
-(NSString *)readerModeMetadataJson;
-(NSString *)readerModeResourcesJson;
@end

