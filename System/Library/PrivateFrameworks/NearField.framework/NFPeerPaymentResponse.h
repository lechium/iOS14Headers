/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface NFPeerPaymentResponse : NSObject <NSSecureCoding> {

	NSData* _transactionData;
	NSDictionary* _certificates;
	NSString* _transactionIdentifier;

}

@property (nonatomic,retain,readonly) NSData * transactionData;                      //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * certificates;                   //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)transactionIdentifier;
-(NSData *)transactionData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)certificates;
@end

