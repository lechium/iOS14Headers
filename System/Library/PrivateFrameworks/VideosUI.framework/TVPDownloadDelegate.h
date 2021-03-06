/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPDownloadDelegate <NSObject>
@optional
-(void)download:(id)arg1 didDetermineMaximumResolution:(long long)arg2 maximumVideoRange:(long long)arg3;
-(void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2;
-(void)download:(id)arg1 willDownloadToURL:(id)arg2;
-(void)download:(id)arg1 didChangeStateTo:(long long)arg2;
-(void)download:(id)arg1 progressDidChange:(double)arg2;

@end

