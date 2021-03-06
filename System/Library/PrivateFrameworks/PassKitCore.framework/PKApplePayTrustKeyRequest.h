/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding> {

	NSString* _keyIdentifier;
	NSData* _subjectIdentifier;

}

@property (nonatomic,readonly) NSString * keyIdentifier;                //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * subjectIdentifier;              //@synthesize subjectIdentifier=_subjectIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)keyIdentifier;
-(id)initWithKeyIdentifier:(id)arg1 subjectIdentifier:(id)arg2 ;
-(NSData *)subjectIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

