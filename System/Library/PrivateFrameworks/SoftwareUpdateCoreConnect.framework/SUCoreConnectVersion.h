/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUCoreConnectVersion : NSObject <NSSecureCoding> {

	NSString* _selectorString;

}

@property (nonatomic,retain,readonly) NSString * selectorString;              //@synthesize selectorString=_selectorString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSelector:(SEL)arg1 ;
-(id)description;
-(NSString *)selectorString;
@end

