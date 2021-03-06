/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationUpgradeContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appName;
	NSString* _appID;
	NSString* _bundleID;
	NSString* _serviceID;
	NSString* _teamID;
	NSString* _nonce;
	NSString* _state;

}

@property (nonatomic,copy) NSString * appName;                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * appID;                  //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * serviceID;              //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * teamID;                 //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * nonce;                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * state;                  //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(NSString *)serviceID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(void)setServiceID:(NSString *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(NSString *)appID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)bundleID;
@end

