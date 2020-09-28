/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)requiresSampleTypePredicate;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)isConcreteEntity;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg1 ;
+(id)createTableSQL;
+(id)_objectsWithIDs:(id)arg1 profile:(id)arg2 ;
+(BOOL)isBackedByTable;
+(BOOL)acceptsObject:(id)arg1 ;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
@end
