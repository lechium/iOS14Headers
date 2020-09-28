/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _password;
	NSNumber* _channel;

}

@property (copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * password;               //@synthesize password=_password - In the implementation block
@property (retain) NSNumber * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setChannel:(NSNumber *)arg1 ;
-(NSNumber *)channel;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
@end
