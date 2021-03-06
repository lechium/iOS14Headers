/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRConcreteEndpoint.h>

@class AVOutputDeviceGroup;

@interface MRAVConcreteEndpoint : MRConcreteEndpoint {

	AVOutputDeviceGroup* _outputDeviceGroup;

}
+(id)errorWithChangeResult:(id)arg1 outputDevice:(id)arg2 ;
-(void)setExternalDevice:(id)arg1 ;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerVolumeNotifications;
-(void)handleVolumeChangedNotification:(id)arg1 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleVolumeCapabilityChangedNotification:(id)arg1 ;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(float)volumeForOutputDevice:(id)arg1 error:(id*)arg2 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithOutputDeviceGroup:(id)arg1 groupLeader:(id)arg2 outputDevices:(id)arg3 ;
@end

