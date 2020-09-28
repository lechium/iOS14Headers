/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AppClip.framework/AppClip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppClip/AppClip-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface APActivationPayload : NSObject <NSSecureCoding, NSCopying> {

	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)confirmAcquiredInRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
