/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIProxyApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIMutableMapStyleProviding.h>

@class NSString;

@interface CRSUIMutableProxyApplicationSceneSettings : CRSUIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings, CRSUIMutableMapStyleProviding>

@property (nonatomic,copy) NSString * proxiedApplicationBundleIdentifier; 
@property (assign,nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)proxiedApplicationBundleIdentifier;
-(long long)mapStyle;
-(void)setMapStyle:(long long)arg1 ;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;
-(void)setProxiedApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setProxiedApplicationLinkedOnOrAfterYukon:(BOOL)arg1 ;
@end

