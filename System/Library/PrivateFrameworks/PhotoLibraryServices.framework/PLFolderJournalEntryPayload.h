/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (nonatomic,readonly) BOOL isRootFolder; 
@property (nonatomic,readonly) BOOL isProjectAlbumRootFolder; 
@property (nonatomic,readonly) NSOrderedSet * childCollectionUUIDs; 
+(void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(BOOL)arg3 ;
+(id)modelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(NSOrderedSet *)childCollectionUUIDs;
-(void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)isRootFolder;
-(BOOL)isProjectAlbumRootFolder;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
@end
