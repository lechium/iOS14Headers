/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolSecurityConnection, RWIProtocolSecurityCertificate;

@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolSecurityConnection * connection; 
@property (nonatomic,retain) RWIProtocolSecurityCertificate * certificate; 
-(void)setCertificate:(RWIProtocolSecurityCertificate *)arg1 ;
-(RWIProtocolSecurityCertificate *)certificate;
-(RWIProtocolSecurityConnection *)connection;
-(void)setConnection:(RWIProtocolSecurityConnection *)arg1 ;
@end

