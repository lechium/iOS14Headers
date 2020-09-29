/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXDragAndDropSettings : PXSettings {

	BOOL _useData;
	BOOL _dragOutEnabled;
	BOOL _alwaysAllowDragsWithinUserAlbums;
	BOOL _springLoadingEnabled;
	BOOL _useFileProvider;
	long long _reorderCadence;
	double _dropGestureSpeedLimit;

}

@property (assign,nonatomic) BOOL useData;                                       //@synthesize useData=_useData - In the implementation block
@property (assign,nonatomic) BOOL dragOutEnabled;                                //@synthesize dragOutEnabled=_dragOutEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowDragsWithinUserAlbums;              //@synthesize alwaysAllowDragsWithinUserAlbums=_alwaysAllowDragsWithinUserAlbums - In the implementation block
@property (assign,nonatomic) BOOL springLoadingEnabled;                          //@synthesize springLoadingEnabled=_springLoadingEnabled - In the implementation block
@property (assign,nonatomic) BOOL useFileProvider;                               //@synthesize useFileProvider=_useFileProvider - In the implementation block
@property (assign,nonatomic) long long reorderCadence;                           //@synthesize reorderCadence=_reorderCadence - In the implementation block
@property (assign,nonatomic) double dropGestureSpeedLimit;                       //@synthesize dropGestureSpeedLimit=_dropGestureSpeedLimit - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)useData;
-(BOOL)alwaysAllowDragsWithinUserAlbums;
-(BOOL)dragOutEnabled;
-(BOOL)springLoadingEnabled;
-(void)setReorderCadence:(long long)arg1 ;
-(double)dropGestureSpeedLimit;
-(BOOL)useFileProvider;
-(long long)reorderCadence;
-(void)setDropGestureSpeedLimit:(double)arg1 ;
-(void)setUseFileProvider:(BOOL)arg1 ;
-(void)setAlwaysAllowDragsWithinUserAlbums:(BOOL)arg1 ;
-(void)setSpringLoadingEnabled:(BOOL)arg1 ;
-(void)setUseData:(BOOL)arg1 ;
-(void)setDragOutEnabled:(BOOL)arg1 ;
-(id)parentSettings;
@end
