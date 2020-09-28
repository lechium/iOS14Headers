/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVOutputDevice.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputDevice, MRAVOutputDeviceSourceInfo, NSString, NSData, NSDictionary;

@interface MRAVConcreteOutputDevice : MRAVOutputDevice {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	AVOutputDevice* _avOutputDevice;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSString* _uid;
	BOOL _overrideUID;
	NSString* _modelID;
	NSString* _firmwareVersion;
	NSString* _logicalDeviceID;
	NSString* _groupID;
	BOOL _overrideGroupID;
	NSData* _MACAddress;
	NSDictionary* _modelSpecificInfo;
	NSString* _playingPairedDeviceName;

}

@property (setter=setAVOutputDevice:,nonatomic,retain) AVOutputDevice * avOutputDevice; 
@property (nonatomic,retain) MRAVOutputDeviceSourceInfo * sourceInfo; 
@property (nonatomic,readonly) BOOL supportsHeadTrackedSpatialAudio; 
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) BOOL headTrackedSpatialAudioActive; 
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)groupContainsGroupLeader;
-(id)currentBluetoothListeningMode;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)hasBatteryLevel;
-(void)setGroupID:(id)arg1 ;
-(BOOL)isRemoteControllable;
-(void)setVolume:(float)arg1 ;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)isProxyGroupPlayer;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(id)clusterComposition;
-(BOOL)supportsBluetoothSharing;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)isGroupable;
-(id)bluetoothID;
-(id)availableBluetoothListeningModes;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)isLocalDevice;
-(BOOL)supportsHAP;
-(BOOL)canAccessRemoteAssets;
-(id)modelSpecificInfo;
-(unsigned)volumeCapabilities;
-(BOOL)isGroupLeader;
-(unsigned)deviceSubtype;
-(unsigned)deviceType;
-(BOOL)supportsExternalScreen;
-(float)batteryLevel;
-(id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2 ;
-(id)logicalDeviceID;
-(BOOL)isAddedToHomeKit;
-(MRAVOutputDeviceSourceInfo *)sourceInfo;
-(id)MACAddress;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isDeviceGroupable;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(id)firmwareVersion;
-(BOOL)requiresAuthorization;
-(BOOL)isVolumeControlAvailable;
-(id)groupID;
-(float)volume;
-(id)parentGroupIdentifier;
-(BOOL)canFetchMediaDataFromSender;
-(id)modelID;
-(void)setAVOutputDevice:(id)arg1 ;
-(BOOL)supportsRapport;
-(void)setSourceInfo:(MRAVOutputDeviceSourceInfo *)arg1 ;
-(AVOutputDevice *)avOutputDevice;
-(id)name;
-(id)playingPairedDeviceName;
-(id)uid;
@end
