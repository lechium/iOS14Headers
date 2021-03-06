/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:39 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface MTShowSettings : NSObject {

	BOOL _episodeOrderAscending;
	int _downloadEpisodes;
	long long _deletePlayedEpisodes;
	long long _episodeLimit;
	long long _updateInterval;

}

@property (assign,nonatomic) BOOL episodeOrderAscending;                  //@synthesize episodeOrderAscending=_episodeOrderAscending - In the implementation block
@property (assign,nonatomic) int downloadEpisodes;                        //@synthesize downloadEpisodes=_downloadEpisodes - In the implementation block
@property (assign,nonatomic) long long deletePlayedEpisodes;              //@synthesize deletePlayedEpisodes=_deletePlayedEpisodes - In the implementation block
@property (assign,nonatomic) long long episodeLimit;                      //@synthesize episodeLimit=_episodeLimit - In the implementation block
@property (assign,nonatomic) long long updateInterval;                    //@synthesize updateInterval=_updateInterval - In the implementation block
-(long long)updateInterval;
-(void)setUpdateInterval:(long long)arg1 ;
-(long long)episodeLimit;
-(void)setEpisodeLimit:(long long)arg1 ;
-(long long)deletePlayedEpisodes;
-(BOOL)episodeOrderAscending;
-(int)downloadEpisodes;
-(void)setDeletePlayedEpisodes:(long long)arg1 ;
-(void)setEpisodeOrderAscending:(BOOL)arg1 ;
-(void)setDownloadEpisodes:(int)arg1 ;
@end

