/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class MRPlayer, NSMutableArray, MRPlayerPath, MRClient, NSArray;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {

	MRPlayer* _activePlayer;
	NSMutableArray* _playerClients;
	BOOL _isForeground;
	BOOL _useMediaRemoteActivePlayerHeuristic;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,retain) MRPlayerPath * playerPath;                             //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) MRClient * client; 
@property (nonatomic,readonly) MRPlayerPath * activePlayerPath; 
@property (nonatomic,readonly) NSArray * playerClients; 
@property (assign,nonatomic) BOOL useMediaRemoteActivePlayerHeuristic;              //@synthesize useMediaRemoteActivePlayerHeuristic=_useMediaRemoteActivePlayerHeuristic - In the implementation block
-(void)restoreNowPlayingClientState;
-(void)setClient:(MRClient *)arg1 ;
-(BOOL)useMediaRemoteActivePlayerHeuristic;
-(id)debugDescription;
-(void)updateActivePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setActivePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)setUseMediaRemoteActivePlayerHeuristic:(BOOL)arg1 ;
-(void)requestActiveForPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)playerClients;
-(id)nowPlayingPlayerClientForPlayerPath:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(MRClient *)client;
-(id)initWithPlayerPath:(id)arg1 ;
-(MRPlayerPath *)activePlayerPath;
-(void)applicationDidEnterBackground;
-(void)removePlayer:(id)arg1 ;
-(void)mergeClient:(id)arg1 ;
-(void)reevaluateActivePlayerWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
@end

