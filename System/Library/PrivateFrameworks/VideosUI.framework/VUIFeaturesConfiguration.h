/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIPostPlayConfig, VUINowPlayingConfig, VUIAutoPlayConfig, VUIInAppMessagesConfig, VUIDownloadConfig;

@interface VUIFeaturesConfiguration : NSObject {

	VUIPostPlayConfig* _postPlayConfig;
	VUINowPlayingConfig* _nowPlayingConfig;
	VUIAutoPlayConfig* _autoPlayConfig;
	VUIInAppMessagesConfig* _inAppMessagesConfig;
	VUIDownloadConfig* _downloadConfig;

}

@property (nonatomic,readonly) VUIPostPlayConfig * postPlayConfig;                        //@synthesize postPlayConfig=_postPlayConfig - In the implementation block
@property (nonatomic,readonly) VUINowPlayingConfig * nowPlayingConfig;                    //@synthesize nowPlayingConfig=_nowPlayingConfig - In the implementation block
@property (nonatomic,readonly) VUIAutoPlayConfig * autoPlayConfig;                        //@synthesize autoPlayConfig=_autoPlayConfig - In the implementation block
@property (nonatomic,readonly) VUIInAppMessagesConfig * inAppMessagesConfig;              //@synthesize inAppMessagesConfig=_inAppMessagesConfig - In the implementation block
@property (nonatomic,readonly) VUIDownloadConfig * downloadConfig;                        //@synthesize downloadConfig=_downloadConfig - In the implementation block
+(id)sharedInstance;
-(void)updateWithDictionary:(id)arg1 ;
-(id)init;
-(VUIDownloadConfig *)downloadConfig;
-(VUIPostPlayConfig *)postPlayConfig;
-(VUINowPlayingConfig *)nowPlayingConfig;
-(VUIInAppMessagesConfig *)inAppMessagesConfig;
-(VUIAutoPlayConfig *)autoPlayConfig;
@end
