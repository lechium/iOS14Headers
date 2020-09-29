/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUAssetsDataSourceManagerDelegate.h>

@class NSArray, NSString;

@interface PUJoiningDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate> {

	NSArray* __dataSourceManagers;
	long long __currentUpdateID;

}

@property (nonatomic,readonly) NSArray * _dataSourceManagers;                                     //@synthesize _dataSourceManagers=__dataSourceManagers - In the implementation block
@property (assign,setter=_setCurrentUpdateId:,nonatomic) long long _currentUpdateID;              //@synthesize _currentUpdateID=__currentUpdateID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)_dataSourceManagers;
-(long long)_currentUpdateID;
-(void)_setCurrentUpdateId:(long long)arg1 ;
-(void)_scheduleUpdate;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 ;
-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1 ;
-(void)_update;
-(id)initWithDataSourceManagers:(id)arg1 ;
-(void)_handleScheduledUpdateWithID:(long long)arg1 ;
@end
