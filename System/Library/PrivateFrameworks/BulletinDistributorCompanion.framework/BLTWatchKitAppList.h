/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BLTDebugObserverWatchKitAppList.h>

@protocol BLTWatchKitAppListDelegate;
@class NSDictionary, NSMutableArray, NSString;

@interface BLTWatchKitAppList : NSObject <BLTDebugObserverWatchKitAppList> {

	NSDictionary* _appsByAppBundleID;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _loadingCompletionHandlers;
	BOOL _loading;
	BOOL _loaded;
	id<BLTWatchKitAppListDelegate> _delegate;

}

@property (getter=isLoaded) BOOL loaded;                                                  //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic,__weak) id<BLTWatchKitAppListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLoaded;
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id<BLTWatchKitAppListDelegate>)arg1 ;
-(id<BLTWatchKitAppListDelegate>)delegate;
-(void)setLoaded:(BOOL)arg1 ;
-(void)_fetchWatchKitInfoWithForce:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)watchKitAppDefinitionWithBundleID:(id)arg1 ;
-(void)fetchWatchKitInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchWatchKitInfo;
@end
