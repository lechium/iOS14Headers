/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:39 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PodcastsKit/MTMediaContentSource.h>

@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource {

	BOOL _iTunesMatchEnabled;

}

@property (nonatomic,readonly) BOOL iTunesMatchEnabled;              //@synthesize iTunesMatchEnabled=_iTunesMatchEnabled - In the implementation block
+(id)sharedInstance;
-(void)determineiTunesMatchEnabledWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)iTunesMatchEnabled;
@end

