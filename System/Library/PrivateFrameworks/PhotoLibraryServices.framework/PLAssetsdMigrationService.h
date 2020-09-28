/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdMigrationServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol> {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _dataMigratordQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)dataMigrationWillFinishWithReply:(/*^block*/id)arg1 ;
-(void)moveiPhotoLibraryMediaWithReply:(/*^block*/id)arg1 ;
@end
