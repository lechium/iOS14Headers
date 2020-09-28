/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STCoreOrganizationSettings.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>
#import <libobjc.A.dylib/STVersionVectorable.h>

@class STFamilyOrganization, NSString, NSData;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (assign,nonatomic) BOOL isManaged; 
@property (assign,nonatomic) BOOL shareWebUsage; 
@property (nonatomic,retain) STFamilyOrganization * organization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * versionVector; 
@property (assign,nonatomic) BOOL isDirty; 
+(id)serializableClassName;
-(id)redactedDescription;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(void)setIsManaged:(BOOL)arg1 ;
-(void)setPasscode:(id)arg1 ;
-(NSString *)description;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
