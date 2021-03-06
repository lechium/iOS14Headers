/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IKJSRWIDependencyDomain, NSArray, NSDictionary;

@interface IKJSRWIDependencyDomainType : NSObject {

	NSString* _name;
	NSString* _identifier;
	NSString* _domainType;
	NSString* _purpose;
	IKJSRWIDependencyDomain* _domain;
	NSArray* _initializationParameters;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domainType;                                //@synthesize domainType=_domainType - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                   //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomain * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSArray * initializationParameters;                   //@synthesize initializationParameters=_initializationParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
-(NSString *)identifier;
-(NSDictionary *)properties;
-(IKJSRWIDependencyDomain *)domain;
-(NSString *)purpose;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSString *)name;
-(NSString *)domainType;
-(NSArray *)initializationParameters;
-(id)initializationSelectorString;
-(BOOL)isInitializerValid;
-(id)invalidProperties;
-(id)initializationString;
-(id)initWithTypeDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)typeInterfaceString;
-(id)typeImplementationStringWithSoftLinking:(BOOL)arg1 ;
@end

