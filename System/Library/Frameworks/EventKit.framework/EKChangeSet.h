/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface EKChangeSet : NSObject <NSCopying> {

	BOOL _skipsPersistentObjectCopy;
	BOOL _isNew;
	BOOL _isModified;
	BOOL _isSaved;
	BOOL _isDeleted;
	BOOL _isUndeleted;
	NSMutableDictionary* _singleValueChanges;
	NSMutableDictionary* _multiValueAdditions;
	NSMutableDictionary* _multiValueRemovals;

}

@property (nonatomic,retain) NSMutableDictionary * singleValueChanges;               //@synthesize singleValueChanges=_singleValueChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * multiValueAdditions;              //@synthesize multiValueAdditions=_multiValueAdditions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * multiValueRemovals;               //@synthesize multiValueRemovals=_multiValueRemovals - In the implementation block
@property (assign,nonatomic) BOOL isNew;                                             //@synthesize isNew=_isNew - In the implementation block
@property (assign,nonatomic) BOOL isModified;                                        //@synthesize isModified=_isModified - In the implementation block
@property (assign,nonatomic) BOOL isSaved;                                           //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                         //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL isUndeleted;                                       //@synthesize isUndeleted=_isUndeleted - In the implementation block
-(BOOL)isNew;
-(BOOL)isSaved;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)singleValueChanges;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)multiValueRemovals;
-(id)valuesForMultiValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3 ;
-(BOOL)hasUnsavedMultiValueAdditionForKey:(id)arg1 ;
-(void)markChangesAsSaved;
-(id)_semanticIdentifierToObjectMapForObjects:(id)arg1 ;
-(id)changedSingleValueKeys;
-(id)summary;
-(void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4 ;
-(void)setIsSaved:(BOOL)arg1 ;
-(void)setIsDeleted:(BOOL)arg1 ;
-(id)changedMultiValueKeys;
-(BOOL)isUndeleted;
-(void)removeFromChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4 ;
-(id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2 ;
-(void)setIsModified:(BOOL)arg1 ;
-(void)setIsUndeleted:(BOOL)arg1 ;
-(void)addChanges:(id)arg1 ;
-(id)valuesForMultiValueKey:(id)arg1 basedOnSet:(id)arg2 ;
-(id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3 ;
-(void)replaceMultiChangeAddedObject:(id)arg1 withObject:(id)arg2 forKey:(id)arg3 ;
-(void)forceChangeValue:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)multiValueAdditions;
-(void)setSingleValueChanges:(NSMutableDictionary *)arg1 ;
-(BOOL)_isNewAndUnsaved;
-(BOOL)skipsPersistentObjectCopy;
-(id)init;
-(id)changedKeys;
-(BOOL)isModified;
-(void)rollbackChanges;
-(void)_addToChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4 shouldCopyKeyCallback:(/*^block*/id)arg5 ;
-(void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)arg1 ;
-(void)addChanges:(id)arg1 shouldCopyKeyCallback:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithChangeSet:(id)arg1 ;
-(id)initWithChangeSet:(id)arg1 changesToSkip:(id)arg2 ;
-(void)setIsNew:(BOOL)arg1 ;
-(id)_initWithChangeSet:(id)arg1 filter:(/*^block*/id)arg2 ;
-(id)unsavedMultiValueAddedObjectsForKey:(id)arg1 ;
-(id)unsavedMultiValueRemovedObjectsForKey:(id)arg1 ;
-(BOOL)hasUnsavedChangeForKey:(id)arg1 ;
-(BOOL)hasUnsavedChanges;
-(id)initWithSingleValueChanges:(id)arg1 multiValueAdditions:(id)arg2 multiValueRemovals:(id)arg3 ;
-(void)setMultiValueAdditions:(NSMutableDictionary *)arg1 ;
-(void)addToChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4 ;
-(void)setMultiValueRemovals:(NSMutableDictionary *)arg1 ;
-(id)initWithChangeSet:(id)arg1 changesToKeep:(id)arg2 ;
-(BOOL)isUniqueAddedObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isDeleted;
-(BOOL)hasChanges;
-(void)setSkipsPersistentObjectCopy:(BOOL)arg1 ;
-(void)_cleanupEmptySetsForMultiValueKey:(id)arg1 ;
-(void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3 ;
-(void)rollbackChangesForKeys:(id)arg1 ;
-(id)description;
-(void)addChangesAndUpdateUniqueMultiValueObjects:(id)arg1 ;
-(BOOL)hasUnsavedMultiValueRemovalForKey:(id)arg1 ;
-(BOOL)isEffectivelyEqual:(id)arg1 ;
@end

