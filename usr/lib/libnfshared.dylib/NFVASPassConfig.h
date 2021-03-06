/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NFVASPassConfig : NSObject <NSSecureCoding, NSCopying> {

	long long _vasMode;
	NSString* _passIdentifier;

}

@property (nonatomic,readonly) long long vasMode;                           //@synthesize vasMode=_vasMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * passIdentifier;              //@synthesize passIdentifier=_passIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passConfigWithMode:(long long)arg1 passIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)vasMode;
-(NSString *)passIdentifier;
@end

