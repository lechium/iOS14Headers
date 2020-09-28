/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCBLEPairingShimProtocol
@required
-(void)deviceStopBLEUpdates:(id)arg1;
-(void)deviceUpdate:(id)arg1 pairType:(int)arg2 pairInfo:(id)arg3;
-(void)deviceSend:(id)arg1 pairType:(int)arg2 pairingData:(id)arg3;
-(void)deviceStartBLEUpdates:(id)arg1 pairType:(int)arg2 btRadio:(BOOL)arg3 pairInfo:(BOOL)arg4;
-(id)bleAccessoryForConnectionID:(unsigned)arg1;
-(void)deviceStateUpdate:(id)arg1 btRadio:(unsigned char)arg2 pairStatus:(int)arg3 pairModeOn:(BOOL)arg4 forceUpdates:(BOOL)arg5;

@end
