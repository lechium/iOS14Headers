/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHInsertChangeRequest <PHUpdateChangeRequest>
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@required
-(void)performConcurrentWork;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(BOOL)isNewRequest;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1;
-(BOOL)shouldPerformConcurrentWork;
-(void)setShouldPerformConcurrentWork:(BOOL)arg1;

@end
