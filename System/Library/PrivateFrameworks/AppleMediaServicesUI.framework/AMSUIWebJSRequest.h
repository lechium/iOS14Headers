/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AMSUIWebJSRequest : NSObject <NSSecureCoding> {

	NSString* _logKey;
	NSDictionary* _options;
	NSString* _service;

}

@property (nonatomic,retain) NSString * logKey;                   //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSString * service;                //@synthesize service=_service - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)service;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 logKey:(id)arg2 ;
@end

