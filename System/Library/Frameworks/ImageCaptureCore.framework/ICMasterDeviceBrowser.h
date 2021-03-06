/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSObject, PTPCameraDeviceManager, MSCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {

	NSMutableArray* _devices;
	NSMutableArray* _browsers;
	NSMutableArray* _suspendedBrowsers;
	long long _numberOfBrowsingBrowsers;
	NSObject*<OS_dispatch_source> _suspensionTimer;
	NSObject*<OS_dispatch_queue> _suspensionTimerQueue;
	PTPCameraDeviceManager* _ptpDevManager;
	MSCameraDeviceManager* _msDevManager;

}

@property (readonly) NSMutableArray * devices;               //@synthesize devices=_devices - In the implementation block
@property (readonly) NSMutableArray * browsers;              //@synthesize browsers=_browsers - In the implementation block
+(BOOL)exists;
+(id)defaultBrowser;
-(id)deviceWithDelegate:(id)arg1 ;
-(int)start:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)startMSCameraBrowser;
-(BOOL)startPTPCameraBrowser;
-(void)removeBrowser:(id)arg1 ;
-(void)notifySuspension:(unsigned long long)arg1 ;
-(void)addBrowser:(id)arg1 ;
-(void)runSuspensionTimer:(BOOL)arg1 ;
-(NSMutableArray *)devices;
-(NSMutableArray *)browsers;
-(void)handleCommandCompletionNotification:(id)arg1 ;
@end

