/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSPersistentStoreCache : NSObject {

	id _externalData;
	unsigned long long _capacity;
	SCD_Struct_NS18* _externalDataValueCallbacks;
	struct {
		unsigned _preserveToManyRelationships : 1;
		unsigned _reserved : 31;
	}  _persistentStoreCacheFlags;
	os_unfair_lock_s _lock;

}
+(void)initialize;
-(void)_registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned)arg3 ;
-(void)_createExternalDataDictWithValueCallbacks:(void*)arg1 ;
-(id)initWithPersistentStore:(id)arg1 ;
-(id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(unsigned long long)allCachedRowsCount;
-(void)registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned)arg3 ;
-(void)dealloc;
-(void)decrementRefCountForObjectID:(id)arg1 ;
-(void)growRegistrationCollectionTo:(unsigned long long)arg1 ;
-(void)_forgetRowForObjectID:(id)arg1 ;
-(void)forgetRowForObjectID:(id)arg1 ;
-(void)incrementRefCountForObjectID:(id)arg1 ;
-(id)init;
-(void)forgetAllExternalData;
-(id)initWithValueCallbacks:(void*)arg1 preserveToManyRelationships:(BOOL)arg2 ;
-(int)refCountForObjectID:(id)arg1 ;
-(id)rowForObjectID:(id)arg1 afterTimestamp:(double)arg2 ;
-(id)toManyInformationForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned)arg5 andTimestamp:(double)arg6 ;
-(void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 andTimestamp:(double)arg5 ;
-(id)rowForObjectID:(id)arg1 ;
-(void)_registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned)arg5 andTimestamp:(double)arg6 ;
-(id)ancillaryOrderKeysForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(void)registerRow:(id)arg1 forObjectID:(id)arg2 ;
@end
