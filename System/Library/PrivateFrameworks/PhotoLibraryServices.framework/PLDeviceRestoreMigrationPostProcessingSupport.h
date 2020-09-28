/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLModelMigrator, PLPhotoLibraryPathManager;

@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject {

	BOOL _tokenIsKnownToBeMissing;
	PLModelMigrator* _modelMigrator;
	PLPhotoLibraryPathManager* _pathManager;
	os_unfair_lock_s _tokenLock;

}
+(BOOL)_writeTokenToPath:(id)arg1 withInfo:(id)arg2 allowOverwrite:(BOOL)arg3 error:(id*)arg4 ;
+(id)_readTokenAtPath:(id)arg1 allowNotExists:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)arg1 error:(id*)arg2 ;
-(BOOL)isModelMigrationRestorePostProcessingComplete;
-(BOOL)foregroundRestoreFromCloudBackupCompleteTokenExists;
-(BOOL)writeBackgroundRestorePostProcessingInProgressToken;
-(BOOL)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
-(BOOL)writeModelMigrationRestorePostProcessingCompleteToken;
-(BOOL)needsToPrepareForBackgroundRestore;
-(BOOL)isBackgroundRestorePostProcessingInProgressTokenValid;
-(id)initWithModelMigrator:(id)arg1 ;
@end
