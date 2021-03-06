/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
+(id)pairingManager;
+(BOOL)systemPairingAvailable;
-(id)addPeer;
-(id)removePeer;
-(id)updatePeer;
-(id)pairedPeerDevices;
-(id)mediaRemotePairedDevices;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg1 ;
-(id)pairedPeerDevice;
@end

