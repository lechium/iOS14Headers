/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class MPMediaQuery, MPMediaItem;

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue {

	MPMediaQuery* _query;
	MPMediaItem* _firstItem;
	long long _shuffleType;

}

@property (nonatomic,readonly) MPMediaQuery * query;               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) MPMediaItem * firstItem;              //@synthesize firstItem=_firstItem - In the implementation block
@property (assign,nonatomic) long long shuffleType;                //@synthesize shuffleType=_shuffleType - In the implementation block
+(id)queryQueueWithContextID:(id)arg1 query:(id)arg2 ;
-(MPMediaQuery *)query;
-(void)setShuffleType:(long long)arg1 ;
-(MPMediaItem *)firstItem;
-(long long)shuffleType;
-(void)setFirstItem:(MPMediaItem *)arg1 ;
-(id)description;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 query:(id)arg2 ;
@end

