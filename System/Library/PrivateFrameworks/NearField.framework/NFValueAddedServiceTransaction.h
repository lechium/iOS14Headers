/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSNumber, NSError;

@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	unsigned _result;
	NSData* _merchantId;
	NSString* _signupUrl;
	NSNumber* _terminalAppVersion;
	NSNumber* _terminalMode;
	NSNumber* _didSucceed;
	NSData* _passData;
	NSData* _token;
	NSError* _error;
	NSNumber* _filter;
	NSNumber* _filterType;

}

@property (nonatomic,retain,readonly) NSData * merchantId;                        //@synthesize merchantId=_merchantId - In the implementation block
@property (nonatomic,retain,readonly) NSString * signupUrl;                       //@synthesize signupUrl=_signupUrl - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * terminalAppVersion;              //@synthesize terminalAppVersion=_terminalAppVersion - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * terminalMode;                    //@synthesize terminalMode=_terminalMode - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * didSucceed;                      //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain,readonly) NSData * passData;                          //@synthesize passData=_passData - In the implementation block
@property (nonatomic,retain,readonly) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * filter;                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * filterType;                      //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) unsigned result;                                   //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)filter;
-(NSString *)signupUrl;
-(unsigned)result;
-(NSNumber *)filterType;
-(NSNumber *)terminalMode;
-(NSError *)error;
-(NSNumber *)terminalAppVersion;
-(NSData *)token;
-(id)asDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)didSucceed;
-(NSData *)merchantId;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)passData;
-(id)description;
@end

