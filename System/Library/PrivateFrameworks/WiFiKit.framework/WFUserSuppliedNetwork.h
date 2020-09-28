/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFNetworkListRecord.h>

@class NSString;

@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord> {

	NSString* _ssid;
	long long _security;
	NSString* _username;
	NSString* _password;
	SecIdentityRef _TLSIdentity;

}

@property (nonatomic,copy) NSString * ssid;                           //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long security;                      //@synthesize security=_security - In the implementation block
@property (nonatomic,copy) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;              //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)signalBars;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(BOOL)isUnconfiguredAccessory;
-(id)subtitle;
-(long long)security;
-(id)hotspotCellularProtocol;
-(BOOL)isSecure;
-(void)setSecurity:(long long)arg1 ;
-(BOOL)isEnterprise;
-(id)hotspotSignalStrength;
-(BOOL)iOSHotspot;
-(id)title;
-(NSString *)username;
-(long long)rssi;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;
-(float)scaledRSSI;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)isAdhoc;
-(id)hotspotBatteryLife;
-(void)setUsername:(NSString *)arg1 ;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)TLSIdentity;
@end
