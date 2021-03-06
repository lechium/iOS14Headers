/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BCSNotificationServiceConnection, NSObject;

@interface BCSNFCReaderConnection : NSObject {

	BCSNotificationServiceConnection* _notificationServiceConnection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)disconnect;
-(id)init;
-(BOOL)_isNFCEnabled;
-(BOOL)_needsRadioEnabledCheck;
-(BOOL)_enableNFC;
-(long long)_hardwareSupportState;
-(void)checkNFCEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableNFCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkHardwareSupportStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startReaderWithDelegate:(id)arg1 errorHandler:(/*^block*/id)arg2 interruptionHandler:(/*^block*/id)arg3 ;
-(void)stopReaderWithErrorHandler:(/*^block*/id)arg1 ;
@end

