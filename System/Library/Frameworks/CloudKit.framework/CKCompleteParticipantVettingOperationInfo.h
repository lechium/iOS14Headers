/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSString* _vettingToken;
	NSString* _vettingEmail;
	NSString* _vettingPhone;
	NSString* _routingKey;
	NSData* _encryptedKey;
	NSString* _baseToken;
	NSString* _displayedHostname;

}

@property (nonatomic,copy) NSString * vettingToken;                     //@synthesize vettingToken=_vettingToken - In the implementation block
@property (nonatomic,retain) NSString * vettingEmail;                   //@synthesize vettingEmail=_vettingEmail - In the implementation block
@property (nonatomic,retain) NSString * vettingPhone;                   //@synthesize vettingPhone=_vettingPhone - In the implementation block
@property (nonatomic,retain) NSString * routingKey;                     //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                     //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                      //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,retain) NSString * displayedHostname;              //@synthesize displayedHostname=_displayedHostname - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSString *)displayedHostname;
-(NSString *)vettingToken;
-(void)setVettingToken:(NSString *)arg1 ;
-(NSString *)vettingEmail;
-(void)setVettingEmail:(NSString *)arg1 ;
-(NSString *)vettingPhone;
-(void)setVettingPhone:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(void)setDisplayedHostname:(NSString *)arg1 ;
@end
