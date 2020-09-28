/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBTopStoriesConfig, NSDictionary, NSString;

@interface FCTopStoriesConfiguration : NSObject <NSCopying> {

	NTPBTopStoriesConfig* _pbConfig;
	NSDictionary* _configDict;
	BOOL _promotingEnabled;
	NSString* _channelID;
	NSDictionary* _styleConfigurations;
	long long _storyTypeTimeout;

}

@property (getter=isPromotingEnabled,nonatomic,readonly) BOOL promotingEnabled;              //@synthesize promotingEnabled=_promotingEnabled - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                                         //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) NSDictionary * styleConfigurations;                           //@synthesize styleConfigurations=_styleConfigurations - In the implementation block
@property (nonatomic,readonly) long long storyTypeTimeout;                                   //@synthesize storyTypeTimeout=_storyTypeTimeout - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSString *)channelID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)styleConfigurations;
-(long long)storyTypeTimeout;
-(BOOL)isPromotingEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPBTopStoriesConfig:(id)arg1 ;
-(unsigned long long)hash;
@end
