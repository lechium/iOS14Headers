/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDaemonSecureCoding.h>
#import <ARKitCore/ARAnchorCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface ARAnchor : NSObject <ARDaemonSecureCoding, ARAnchorCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _name;
	NSUUID* _sessionIdentifier;
	double _lastUpdateTimestamp;
	SCD_Struct_AR1 _transform;
	SCD_Struct_AR1 _referenceTransform;

}

@property (nonatomic,retain) NSUUID * sessionIdentifier;                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 transform;                       //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 referenceTransform;              //@synthesize referenceTransform=_referenceTransform - In the implementation block
@property (assign,nonatomic) double lastUpdateTimestamp;                     //@synthesize lastUpdateTimestamp=_lastUpdateTimestamp - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionIdentifier;
-(NSUUID *)identifier;
-(id)debugQuickLookObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(id)initWithTransform:(SCD_Struct_AR1)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_AR1)transform;
-(void)setTransform:(SCD_Struct_AR1)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(void)setLastUpdateTimestamp:(double)arg1 ;
-(double)lastUpdateTimestamp;
-(BOOL)isEqualToAnchor:(id)arg1 ;
-(SCD_Struct_AR1)referenceTransform;
-(id)initWithName:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(id)initWithIdentifier:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
-(void)setReferenceTransform:(SCD_Struct_AR1)arg1 ;
@end

