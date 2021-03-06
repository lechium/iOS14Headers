/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CUBitCoderDecryptRequest : NSObject {

	NSData* _aad;
	unsigned long long _authTagLength;
	NSData* _data;
	NSData* _nonce;

}

@property (nonatomic,copy) NSData * aad;                                    //@synthesize aad=_aad - In the implementation block
@property (assign,nonatomic) unsigned long long authTagLength;              //@synthesize authTagLength=_authTagLength - In the implementation block
@property (nonatomic,copy) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
-(NSData *)aad;
-(NSData *)data;
-(NSData *)nonce;
-(void)setAad:(NSData *)arg1 ;
-(void)setNonce:(NSData *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)authTagLength;
-(void)setAuthTagLength:(unsigned long long)arg1 ;
@end

