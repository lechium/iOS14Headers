/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFHistoryAnalyzer.h>

@class NSManagedObjectContext, NSPersistentHistoryToken;

@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer {

	NSManagedObjectContext* _managedObjectContext;
	NSPersistentHistoryToken* _lastProcessedToken;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentHistoryToken * lastProcessedToken;              //@synthesize lastProcessedToken=_lastProcessedToken - In the implementation block
+(BOOL)isPrivateTransaction:(id)arg1 ;
+(BOOL)isPrivateTransactionAuthor:(id)arg1 ;
+(BOOL)isPrivateContextName:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentHistoryToken *)lastProcessedToken;
-(id)cloudKitAnalyzerOptions;
-(BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1 ;
-(void)dealloc;
@end
