/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/HDSyncEntityProvider.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface HDHearingPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * schemaName; 
@property (nonatomic,copy,readonly) NSString * syncSchemaIdentifier; 
-(NSString *)pluginIdentifier;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(NSString *)syncSchemaIdentifier;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2 ;
-(id)extensionForProfile:(id)arg1 ;
-(id)_databaseSchemaForProtectionClass:(long long)arg1 ;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(id)databaseEntitiesForProtectionClass:(long long)arg1 ;
-(NSString *)schemaName;
-(id)orderedSyncEntities;
-(id)taskServerClasses;
@end

