/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload {

	NSString* _humanReadableName;
	MCSingleSignOnPayloadKerberosInfo* _kerberosInfo;

}

@property (nonatomic,retain) NSString * humanReadableName;                                  //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (nonatomic,retain) MCSingleSignOnPayloadKerberosInfo * kerberosInfo;              //@synthesize kerberosInfo=_kerberosInfo - In the implementation block
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(id)title;
-(NSString *)humanReadableName;
-(MCSingleSignOnPayloadKerberosInfo *)kerberosInfo;
-(void)setHumanReadableName:(NSString *)arg1 ;
-(void)setKerberosInfo:(MCSingleSignOnPayloadKerberosInfo *)arg1 ;
-(id)verboseDescription;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)payloadDescriptionKeyValueSections;
@end

