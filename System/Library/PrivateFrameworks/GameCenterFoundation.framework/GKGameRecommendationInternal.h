/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGameInternal.h>

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal {

	NSString* _reason;
	NSString* _engineID;

}

@property (nonatomic,retain) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * engineID;              //@synthesize engineID=_engineID - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)initWithGame:(id)arg1 ;
-(void)dealloc;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
-(NSString *)engineID;
-(id)serverRepresentation;
-(void)setEngineID:(NSString *)arg1 ;
@end
