/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GEOXPCSerializable.h>

@class NSData, NSString, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding, GEOXPCSerializable> {

	NSData* _tokenData;
	NSString* _proxiedBundleId;
	NSString* _resolvedBundleId;
	NSString* _resolvedNetworkAttributionBundleId;
	geo_isolater* _isolater;
	BOOL _proxiedExternalBundleId;
	NSString* _secondaryIdentifier;

}

@property (getter=_secondaryIdentifier,nonatomic,copy,readonly) NSString * secondaryIdentifier;              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * proxiedBundleId;                                                   //@synthesize proxiedBundleId=_proxiedBundleId - In the implementation block
@property (getter=isProxiedExternalBundleId,nonatomic,readonly) BOOL proxiedExternalBundleId;                //@synthesize proxiedExternalBundleId=_proxiedExternalBundleId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithAuditTokenData:(id)arg1 ;
-(id)_bundleIdForAuditToken;
-(id)_secondaryIdentifier;
-(id)initWithSecondaryIdentifier:(id)arg1 ;
-(id)initWithProxiedApplicationBundleId:(id)arg1 ;
-(BOOL)isProxiedExternalBundleId;
-(id)init;
-(id)bundleIdForNetworkAttribution;
-(NSString *)proxiedBundleId;
-(id)publicLogDescription;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProxiedExternalApplicationBundleId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bundleId;
-(unsigned long long)hash;
-(id)initWithNSXPCConnection:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)backingTokenData;
-(NSString *)description;
@end
