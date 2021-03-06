/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUEditPluginSession.h>

@interface PUImageEditPluginSession : PUEditPluginSession {

	BOOL _allowLivePhotoExtensions;

}

@property (assign,nonatomic) BOOL allowLivePhotoExtensions;              //@synthesize allowLivePhotoExtensions=_allowLivePhotoExtensions - In the implementation block
-(unsigned long long)pluginManagerMediaType;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)shouldLaunchPlugin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowLivePhotoExtensions:(BOOL)arg1 ;
-(id)imageDataSource;
-(BOOL)allowLivePhotoExtensions;
@end

