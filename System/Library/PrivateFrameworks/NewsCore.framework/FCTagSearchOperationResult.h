/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCStreamingResults;

@interface FCTagSearchOperationResult : NSObject {

	FCStreamingResults* _channels;
	FCStreamingResults* _topics;

}

@property (nonatomic,retain) FCStreamingResults * channels;              //@synthesize channels=_channels - In the implementation block
@property (nonatomic,retain) FCStreamingResults * topics;                //@synthesize topics=_topics - In the implementation block
-(void)setTopics:(FCStreamingResults *)arg1 ;
-(FCStreamingResults *)channels;
-(void)setChannels:(FCStreamingResults *)arg1 ;
-(FCStreamingResults *)topics;
@end

