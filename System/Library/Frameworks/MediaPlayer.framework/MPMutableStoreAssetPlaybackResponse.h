/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreAssetPlaybackResponse.h>

@class NSDictionary, NSDate, NSArray, MPStoreHLSAssetInfo;

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (nonatomic,copy) NSDictionary * dialogDictionary; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSArray * fileAssetInfoList; 
@property (nonatomic,retain) MPStoreHLSAssetInfo * hlsAssetInfo; 
@property (assign,getter=isLiveRadioStream,nonatomic) BOOL liveRadioStream; 
@property (nonatomic,copy) NSArray * radioStreamAssetInfoList; 
@property (nonatomic,retain) id suzeLeaseID; 
@property (assign,getter=isSubscriptionRequired,nonatomic) BOOL subscriptionRequired; 
@property (assign,nonatomic) BOOL onlineSubscriptionKeysRequired; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDialogDictionary:(NSDictionary *)arg1 ;
-(void)setHlsAssetInfo:(MPStoreHLSAssetInfo *)arg1 ;
-(void)setFileAssetInfoList:(NSArray *)arg1 ;
-(void)setLiveRadioStream:(BOOL)arg1 ;
-(void)setSuzeLeaseID:(id)arg1 ;
-(void)setRadioStreamAssetInfoList:(NSArray *)arg1 ;
-(void)setSubscriptionRequired:(BOOL)arg1 ;
-(void)setOnlineSubscriptionKeysRequired:(BOOL)arg1 ;
@end

