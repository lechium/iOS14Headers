/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ECRawMessageHeaders, NSData, NSArray;

@interface ECDKIMVerificationContext : NSObject {

	BOOL _requireFullBodySignature;
	ECRawMessageHeaders* _headers;
	NSData* _bodyData;
	NSArray* _dkimSignatureHeaders;

}

@property (nonatomic,copy) NSArray * dkimSignatureHeaders;                 //@synthesize dkimSignatureHeaders=_dkimSignatureHeaders - In the implementation block
@property (nonatomic,readonly) ECRawMessageHeaders * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSData * bodyData;                     //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL requireFullBodySignature;                //@synthesize requireFullBodySignature=_requireFullBodySignature - In the implementation block
-(NSData *)bodyData;
-(ECRawMessageHeaders *)headers;
-(void)setDkimSignatureHeaders:(NSArray *)arg1 ;
-(id)initWithHeaders:(id)arg1 bodyData:(id)arg2 dkimSignatureHeaders:(id)arg3 ;
-(void)removeDKIMSignatureHeaders:(id)arg1 ;
-(NSArray *)dkimSignatureHeaders;
-(BOOL)requireFullBodySignature;
-(void)setRequireFullBodySignature:(BOOL)arg1 ;
@end
