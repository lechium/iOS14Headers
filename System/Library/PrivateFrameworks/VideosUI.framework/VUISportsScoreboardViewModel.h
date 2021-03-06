/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface VUISportsScoreboardViewModel : NSObject {

	BOOL _showScoreboard;
	NSString* _canonicalId;
	NSDictionary* _leagueContext;
	NSArray* _scores;

}

@property (nonatomic,readonly) NSString * canonicalId;                    //@synthesize canonicalId=_canonicalId - In the implementation block
@property (nonatomic,readonly) NSDictionary * leagueContext;              //@synthesize leagueContext=_leagueContext - In the implementation block
@property (nonatomic,readonly) NSArray * scores;                          //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) BOOL showScoreboard;                       //@synthesize showScoreboard=_showScoreboard - In the implementation block
-(NSArray *)scores;
-(NSString *)canonicalId;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)showScoreboard;
-(id)jsContextDictionary;
-(NSDictionary *)leagueContext;
@end

