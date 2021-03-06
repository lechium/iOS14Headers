/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioRemoteInputPluginDelegate.h>

@protocol AVAudioRemoteInputPlugin;
@class NSMutableArray, AVVoiceController;

@interface AVVCRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {

	NSMutableArray*<AVAudioRemoteInputPlugin> mPlugins;
	AVVoiceController* mMotherController;

}
-(id)initializePlugins;
-(void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2 ;
-(void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2 ;
-(void)invalidatePlugins;
-(id)allBundles:(id*)arg1 ;
-(id)findDeviceWithIdentifier:(id)arg1 ;
-(id)findFirstBluetoothDevice;
-(void)setParentVoiceController:(id)arg1 ;
-(void)dealloc;
@end

