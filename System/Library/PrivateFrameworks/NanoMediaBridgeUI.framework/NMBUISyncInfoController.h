/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMBUIPowerSourceInfoDelegate.h>

@protocol OS_dispatch_source, NMBUISyncInfoControllerDataSource;
@class NSObject, NMBUIPowerSourceInfo, NMSMediaSyncInfo, NSString;

@interface NMBUISyncInfoController : NSObject <NMBUIPowerSourceInfoDelegate> {

	NSObject*<OS_dispatch_source> _currentSyncInfoRequestDateTimer;
	NMBUIPowerSourceInfo* _powerSourceInfo;
	unsigned long long _target;
	NMSMediaSyncInfo* _syncInfo;
	id<NMBUISyncInfoControllerDataSource> _dataSource;

}

@property (nonatomic,readonly) unsigned long long target;                                          //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) NMSMediaSyncInfo * syncInfo;                                        //@synthesize syncInfo=_syncInfo - In the implementation block
@property (assign,nonatomic,__weak) id<NMBUISyncInfoControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateVisibleCellsIfNeeded;
-(void)setDataSource:(id<NMBUISyncInfoControllerDataSource>)arg1 ;
-(void)dealloc;
-(id<NMBUISyncInfoControllerDataSource>)dataSource;
-(unsigned long long)target;
-(NMSMediaSyncInfo *)syncInfo;
-(void)_handleMediaSyncInfoDidUpdateNotification:(id)arg1 ;
-(id)_bundleIdentifierForTarget;
-(void)powerSourceInfoHasExternalPowerSourceConnectedDidChange:(id)arg1 ;
-(id)initWithSyncInfoTarget:(unsigned long long)arg1 ;
-(unsigned long long)downloadStateForModelObject:(id)arg1 ;
-(float)progressForModelObject:(id)arg1 ;
-(id)syncStatusDetailText;
-(void)beginObservingSyncInfo;
-(void)endObservingSyncInfo;
@end

