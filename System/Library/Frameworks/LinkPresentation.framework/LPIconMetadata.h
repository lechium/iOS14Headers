/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LPIconMetadata : NSObject <NSSecureCoding> {

	unsigned _version;
	NSURL* _URL;
	NSString* _accessibilityText;

}

@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;              //@synthesize accessibilityText=_accessibilityText - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)version;
-(NSString *)accessibilityText;
-(id)_initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

