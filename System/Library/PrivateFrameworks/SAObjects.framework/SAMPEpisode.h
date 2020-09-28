/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPEpisode : SAMPMediaItem

@property (assign,nonatomic) long long episodeNumber; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long showEpisodesCount; 
@property (nonatomic,copy) NSString * showName; 
+(id)episode;
+(id)episodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSeasonNumber:(long long)arg1 ;
-(long long)episodeNumber;
-(long long)seasonNumber;
-(void)setEpisodeNumber:(long long)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)showName;
-(long long)showEpisodesCount;
-(void)setShowEpisodesCount:(long long)arg1 ;
-(void)setShowName:(NSString *)arg1 ;
@end
