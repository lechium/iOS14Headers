/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class PLPhotoLibrary, CPLStatus, NSString;

@interface PXCMMEnabledStatusProvider : PXObservable <CPLStatusDelegate, PXSettingsKeyObserver> {

	BOOL _isFeatureEnabled;
	BOOL _isCPLEnabled;
	BOOL _hasExitDate;
	PLPhotoLibrary* _pl_photoLibrary;
	CPLStatus* _cplStatus;
	BOOL _enabled;

}

@property (getter=isEnabled,readonly) BOOL enabled;                 //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentStatusProvider;
-(BOOL)isEnabled;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)init;
-(void)statusDidChange:(id)arg1 ;
-(BOOL)_isCPLEnabled;
-(BOOL)_isFeatureEnabled;
-(BOOL)_hasExitDate;
-(BOOL)_isCMMEnabled;
-(void)_updateIsCMMEnabled;
-(void)_updateIsFeatureEnabled;
-(void)_updateIsCPLEnabled;
-(void)_updateHasExitDate;
@end
