/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding> {

	char _pushEnvironment;
	NSString* _topicString;
	NSString* _qualifierString;

}

@property (nonatomic,readonly) NSString * topicString;                  //@synthesize topicString=_topicString - In the implementation block
@property (nonatomic,readonly) NSString * qualifierString;              //@synthesize qualifierString=_qualifierString - In the implementation block
@property (nonatomic,readonly) char pushEnvironment;                    //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)pushEnvironment;
-(unsigned long long)hash;
-(id)description;
-(id)initWithTopic:(id)arg1 qualifier:(id)arg2 pushEnvironment:(char)arg3 ;
-(BOOL)isEqualToRegistration:(id)arg1 ;
-(NSString *)topicString;
-(NSString *)qualifierString;
@end

