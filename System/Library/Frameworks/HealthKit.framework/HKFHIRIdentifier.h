/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKFHIRIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSString* _resourceType;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(id)FHIRIdentifierWithString:(id)arg1 error:(out id*)arg2 ;
-(NSString *)resourceType;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResourceType:(id)arg1 identifier:(id)arg2 ;
-(id)parentResourceIdentifierWithError:(id*)arg1 ;
-(id)identifierForContainedResourceWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)SQLWildcardIdentifierForContainedResources;
-(id)SQLWildcardIdentifierForContainedResourcesIdentifierOnly;
-(NSString *)stringValue;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
