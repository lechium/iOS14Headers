/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSetup/MediaSetup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMSAuthenticationConfiguration;

@interface MSAuthenticationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	CMSAuthenticationConfiguration* _configuration;

}

@property (readonly) CMSAuthenticationConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CMSAuthenticationConfiguration *)configuration;
@end
