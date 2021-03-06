/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface W5Peer : NSObject <NSCopying, NSSecureCoding> {

	BOOL _nearby;
	NSString* _peerID;
	NSString* _name;
	NSString* _model;
	NSString* _build;
	NSString* _os;
	NSString* _version;

}

@property (nonatomic,copy) NSString * peerID;               //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * build;                //@synthesize build=_build - In the implementation block
@property (nonatomic,copy) NSString * os;                   //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic) BOOL nearby;                   //@synthesize nearby=_nearby - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)build;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(NSString *)version;
-(NSString *)peerID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)os;
-(BOOL)nearby;
-(void)setNearby:(BOOL)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)model;
-(void)setBuild:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)isEqualToPeer:(id)arg1 ;
-(void)setOs:(NSString *)arg1 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setPeerID:(NSString *)arg1 ;
-(id)description;
@end

