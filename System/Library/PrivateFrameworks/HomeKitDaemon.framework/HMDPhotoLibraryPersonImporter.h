/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDPhotoLibraryChangeDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDPersonDataReceiver.h>

@protocol OS_dispatch_queue, HMDPersonDataSource;
@class NSUUID, NSObject, HMDPhotoLibrary, HMFTimer, HMDCloudPhotosSettingObserver, HMDLogEventDispatcher, NSString, HMIHomePersonManager, HMIExternalPersonManager;

@interface HMDPhotoLibraryPersonImporter : HMFObject <HMDPhotoLibraryChangeDelegate, HMFTimerDelegate, HMFLogging, HMDPersonDataReceiver> {

	NSUUID* _UUID;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDPhotoLibrary* _photoLibrary;
	id<HMDPersonDataSource> _dataSource;
	HMFTimer* _frequentUpdateTimer;
	HMFTimer* _infrequentUpdateTimer;
	HMDCloudPhotosSettingObserver* _cloudPhotosSettingObserver;
	/*^block*/id _frequentUpdateTimerFactory;
	/*^block*/id _infrequentUpdateTimerFactory;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDPhotoLibrary * photoLibrary;                                          //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (__weak) id<HMDPersonDataSource> dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) HMFTimer * frequentUpdateTimer;                                            //@synthesize frequentUpdateTimer=_frequentUpdateTimer - In the implementation block
@property (retain) HMFTimer * infrequentUpdateTimer;                                          //@synthesize infrequentUpdateTimer=_infrequentUpdateTimer - In the implementation block
@property (readonly) HMDCloudPhotosSettingObserver * cloudPhotosSettingObserver;              //@synthesize cloudPhotosSettingObserver=_cloudPhotosSettingObserver - In the implementation block
@property (copy) id frequentUpdateTimerFactory;                                               //@synthesize frequentUpdateTimerFactory=_frequentUpdateTimerFactory - In the implementation block
@property (copy) id infrequentUpdateTimerFactory;                                             //@synthesize infrequentUpdateTimerFactory=_infrequentUpdateTimerFactory - In the implementation block
@property (retain) HMDLogEventDispatcher * logEventDispatcher;                                //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HMIHomePersonManager * homePersonManager; 
@property (readonly) HMIExternalPersonManager * photosPersonManager; 
+(id)logCategory;
-(id)initWithUUID:(id)arg1 ;
-(void)_registerForNotifications;
-(void)_configure;
-(HMDPhotoLibrary *)photoLibrary;
-(void)timerDidFire:(id)arg1 ;
-(void)setDataSource:(id<HMDPersonDataSource>)arg1 ;
-(NSUUID *)UUID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDPersonDataSource>)dataSource;
-(id)logIdentifier;
-(void)_unconfigure;
-(void)configureWithDataSource:(id)arg1 home:(id)arg2 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(HMDCloudPhotosSettingObserver *)cloudPhotosSettingObserver;
-(void)setLogEventDispatcher:(HMDLogEventDispatcher *)arg1 ;
-(void)photoLibraryPersonsDidChange;
-(id)initWithUUID:(id)arg1 photoLibrary:(id)arg2 workQueue:(id)arg3 cloudPhotosSettingObserver:(id)arg4 ;
-(id)_updatePersons;
-(id)_updateFaceCropsForAllPersons;
-(id)_updateFaceCropsForPersonsWithUpdatedPhotosFaceCrops;
-(void)_submitLogEventsForUpdatedPersonsWithCurrentPersons:(id)arg1 previousPersons:(id)arg2 ;
-(id)_removedPersonUUIDsWithCurrentPersons:(id)arg1 previousPersons:(id)arg2 ;
-(id)_updateFaceCropsForPersons:(id)arg1 ;
-(id)_updateFaceCropsWithCurrentPhotoLibraryFaceCrops:(id)arg1 forPersonWithUUID:(id)arg2 ;
-(void)_submitLogEventForFaceCrops:(id)arg1 ;
-(id)frequentUpdateTimerFactory;
-(void)setFrequentUpdateTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)frequentUpdateTimer;
-(id)infrequentUpdateTimerFactory;
-(void)setInfrequentUpdateTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)infrequentUpdateTimer;
-(void)handleCloudPhotosEnabledDidChangeNotification:(id)arg1 ;
-(void)_updatePersonsAndFaceCrops:(BOOL)arg1 ;
-(void)_setUpAndStartUpdateTimers;
-(void)_handleUpdatedCloudPhotosSetting;
-(void)setFrequentUpdateTimerFactory:(id)arg1 ;
-(void)setInfrequentUpdateTimerFactory:(id)arg1 ;
@end
