/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSMutableArray;

@interface CMDataContainer : NSObject <NSSecureCoding> {

	unsigned long long nextDataSent;
	unsigned long long nextDataRecv;
	unsigned long long nextMsgSent;
	unsigned long long nextMsgRecv;
	unsigned long long nextEvent;
	NSString* _version;
	NSString* _cv3dVersion;
	NSString* _iOSVersion;
	NSString* _macOSVersion;
	NSString* _cvPlayerVersion;
	NSString* _deviceString;
	NSNumber* _sessionID;
	NSMutableArray* _cmDataSent;
	NSMutableArray* _cmDataRecv;
	NSMutableArray* _cmMsgSent;
	NSMutableArray* _cmMsgRecv;
	NSMutableArray* _cmEvents;

}

@property (nonatomic,retain) NSString * version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * cv3dVersion;                   //@synthesize cv3dVersion=_cv3dVersion - In the implementation block
@property (nonatomic,retain) NSString * iOSVersion;                    //@synthesize iOSVersion=_iOSVersion - In the implementation block
@property (nonatomic,retain) NSString * macOSVersion;                  //@synthesize macOSVersion=_macOSVersion - In the implementation block
@property (nonatomic,retain) NSString * cvPlayerVersion;               //@synthesize cvPlayerVersion=_cvPlayerVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceString;                  //@synthesize deviceString=_deviceString - In the implementation block
@property (nonatomic,retain) NSNumber * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * cmDataSent;              //@synthesize cmDataSent=_cmDataSent - In the implementation block
@property (nonatomic,retain) NSMutableArray * cmDataRecv;              //@synthesize cmDataRecv=_cmDataRecv - In the implementation block
@property (nonatomic,retain) NSMutableArray * cmMsgSent;               //@synthesize cmMsgSent=_cmMsgSent - In the implementation block
@property (nonatomic,retain) NSMutableArray * cmMsgRecv;               //@synthesize cmMsgRecv=_cmMsgRecv - In the implementation block
@property (nonatomic,retain) NSMutableArray * cmEvents;                //@synthesize cmEvents=_cmEvents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
+(id)versionS;
-(NSString *)version;
-(void)setSessionID:(NSNumber *)arg1 ;
-(NSNumber *)sessionID;
-(void)setVersion:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDeviceString:(NSString *)arg1 ;
-(NSString *)deviceString;
-(void)resetReader;
-(id)grabNextDataRecv;
-(id)grabNextDataSent;
-(id)grabNextMessageRecv;
-(id)grabNextMessageSent;
-(id)grabNextEvent;
-(NSString *)cv3dVersion;
-(NSString *)iOSVersion;
-(NSString *)macOSVersion;
-(NSString *)cvPlayerVersion;
-(void)setIOSVersion:(NSString *)arg1 ;
-(void)appendCMData:(id)arg1 sending:(BOOL)arg2 ;
-(void)setCv3dVersion:(NSString *)arg1 ;
-(void)setCvPlayerVersion:(NSString *)arg1 ;
-(void)setCmDataSent:(NSMutableArray *)arg1 ;
-(void)setCmDataRecv:(NSMutableArray *)arg1 ;
-(void)setCmMsgSent:(NSMutableArray *)arg1 ;
-(void)setCmMsgRecv:(NSMutableArray *)arg1 ;
-(void)setCmEvents:(NSMutableArray *)arg1 ;
-(void)setMacOSVersion:(NSString *)arg1 ;
-(NSMutableArray *)cmDataSent;
-(NSMutableArray *)cmDataRecv;
-(NSMutableArray *)cmMsgSent;
-(NSMutableArray *)cmMsgRecv;
-(NSMutableArray *)cmEvents;
-(void)appendCMMessage:(id)arg1 sending:(BOOL)arg2 ;
-(void)appendCMEvent:(id)arg1 ;
@end

