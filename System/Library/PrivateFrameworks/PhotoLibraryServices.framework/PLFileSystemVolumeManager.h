/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSFileManager, NSMutableDictionary, NSMapTable;

@interface PLFileSystemVolumeManager : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	NSFileManager* _fileManager;
	NSMutableDictionary* _mountedVolumeURLsByUuid;
	NSMutableDictionary* _registeredFileSystemVolumesByUuid;
	NSMapTable* _mocsByVolume;

}
+(id)sharedFileSystemVolumeManager;
-(id)volumeForURL:(id)arg1 context:(id)arg2 ;
-(void)unregisterPLFileSystemVolume:(id)arg1 ;
-(void)dealloc;
-(void)registerPLFileSystemVolume:(id)arg1 ;
-(void)_updateMountedVolumeURLs;
-(id)initSharedVolumeManager;
-(void)_updateOfflineStates;
@end

