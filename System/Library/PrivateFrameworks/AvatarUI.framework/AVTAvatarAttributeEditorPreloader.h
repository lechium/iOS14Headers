/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTUILogger;
@class AVTPresetResourceLoader, NSMutableDictionary;

@interface AVTAvatarAttributeEditorPreloader : NSObject {

	AVTPresetResourceLoader* _resourceLoader;
	NSMutableDictionary* _cancelationTokens;
	id<AVTUILogger> _logger;

}

@property (nonatomic,retain) AVTPresetResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cancelationTokens;               //@synthesize cancelationTokens=_cancelationTokens - In the implementation block
@property (nonatomic,retain) id<AVTUILogger> logger;                                //@synthesize logger=_logger - In the implementation block
-(id<AVTUILogger>)logger;
-(void)dealloc;
-(void)setLogger:(id<AVTUILogger>)arg1 ;
-(void)setResourceLoader:(AVTPresetResourceLoader *)arg1 ;
-(AVTPresetResourceLoader *)resourceLoader;
-(NSMutableDictionary *)cancelationTokens;
-(void)cancelAllPreloading;
-(id)initWithResourceLoader:(id)arg1 logger:(id)arg2 ;
-(void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)cancelPreloadForSectionItemIndexPath:(id)arg1 ;
-(void)preloadCategory:(id)arg1 ;
-(void)setCancelationTokens:(NSMutableDictionary *)arg1 ;
@end
