/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonTimelapseClientProtocol.h>

@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;
@class CAMCaptureGraphConfiguration, CAMFocusResult, CAMTimelapseState, NSObject, NSCountedSet, NSMutableSet, CUCaptureController, CAMLocationController, CAMMotionController, CAMPersistenceController, CAMStorageController, CAMNebulaDaemonProxyManager, NSDate, NSString;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol> {

	BOOL __ignoringTimerCallbacksForTearDown;
	BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
	BOOL __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
	BOOL __backendRecoveryNeeded;
	BOOL __previewStarted;
	BOOL __focusAndExposureAdjusted;
	CAMCaptureGraphConfiguration* __graphConfigurationForCurrentState;
	id<CAMTimelapseControllerDelegate> _delegate;
	CAMFocusResult* _lastFocusResult;
	CAMTimelapseState* __state;
	NSObject*<OS_dispatch_source> __captureTimer;
	NSCountedSet* __inFlightTimelapseUUIDs;
	NSMutableSet* __pendingCompletedStates;
	CUCaptureController* __captureController;
	CAMLocationController* __locationController;
	CAMMotionController* __motionController;
	CAMPersistenceController* __persistenceController;
	CAMStorageController* __storageController;
	CAMNebulaDaemonProxyManager* __nebulaDaemonProxyManager;

}

@property (nonatomic,readonly) CAMTimelapseState * _state;                                                                                                                         //@synthesize _state=__state - In the implementation block
@property (getter=_graphConfigurationForCurrentState,nonatomic,readonly) CAMCaptureGraphConfiguration * _graphConfigurationForCurrentState;                                        //@synthesize _graphConfigurationForCurrentState=__graphConfigurationForCurrentState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _captureTimer;                                                                                                        //@synthesize _captureTimer=__captureTimer - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksForTearDown;                                                                                                            //@synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;                                                                                              //@synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inFlightTimelapseUUIDs;                                                                                                             //@synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _pendingCompletedStates;                                                                                                             //@synthesize _pendingCompletedStates=__pendingCompletedStates - In the implementation block
@property (assign,setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:,nonatomic) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;              //@synthesize _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes=__shouldUpdateFocusAndExposureWhenContrastDetectionCompletes - In the implementation block
@property (assign,setter=_setBackendRecoveryNeeded:,nonatomic) BOOL _backendRecoveryNeeded;                                                                                        //@synthesize _backendRecoveryNeeded=__backendRecoveryNeeded - In the implementation block
@property (assign,setter=_setPreviewStarted:,nonatomic) BOOL _previewStarted;                                                                                                      //@synthesize _previewStarted=__previewStarted - In the implementation block
@property (assign,setter=_setFocusAndExposureAdjusted:,getter=_isFocusAndExposureAdjusted,nonatomic) BOOL _focusAndExposureAdjusted;                                               //@synthesize _focusAndExposureAdjusted=__focusAndExposureAdjusted - In the implementation block
@property (nonatomic,readonly) CUCaptureController * _captureController;                                                                                                           //@synthesize _captureController=__captureController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                                                                                        //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                                            //@synthesize _motionController=__motionController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                                                                                                  //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMStorageController * _storageController;                                                                                                          //@synthesize _storageController=__storageController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;                                                                                            //@synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTimelapseControllerDelegate> delegate;                                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCapturing,nonatomic,readonly) BOOL capturing; 
@property (nonatomic,readonly) NSDate * captureStartTime; 
@property (assign,nonatomic) CAMFocusResult * lastFocusResult;                                                                                                                     //@synthesize lastFocusResult=_lastFocusResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createPlaceholderResultForTimelapseState:(id)arg1 ;
+(IOSurfaceRef)_newVideoPreviewSurfaceForTimelapseState:(id)arg1 ;
-(CAMStorageController *)_storageController;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(CUCaptureController *)_captureController;
-(CAMLocationController *)_locationController;
-(CAMNebulaDaemonProxyManager *)_nebulaDaemonProxyManager;
-(void)_stopCapturingWithReasons:(long long)arg1 ;
-(void)setLastFocusResult:(CAMFocusResult *)arg1 ;
-(void)_updateLocationIfNecessary;
-(BOOL)_ignoringTimerCallbacksForTearDown;
-(NSMutableSet *)_pendingCompletedStates;
-(void)_setBackendRecoveryNeeded:(BOOL)arg1 ;
-(void)_triggerBackendCrashRecoveryIfNeeded;
-(CAMTimelapseState *)_state;
-(void)_invalidateCachedGraphConfiguration;
-(void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(BOOL)_canCapturePhoto;
-(BOOL)stopCapturingWithReasons:(long long)arg1 ;
-(BOOL)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(id)_stillImageCaptureRequestWithCurrentSettings;
-(CAMMotionController *)_motionController;
-(NSObject*<OS_dispatch_source>)_captureTimer;
-(void)restoreConfiguration;
-(void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 storageController:(id)arg5 nebulaDaemonProxyManager:(id)arg6 ;
-(void)_captureTimerFired;
-(void)_deviceStarted:(id)arg1 ;
-(void)dealloc;
-(void)_sessionRuntimeErrored:(id)arg1 ;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_setPreviewStarted:(BOOL)arg1 ;
-(BOOL)_enqueueCaptureRequest;
-(BOOL)_ignoringTimerCallbacksWaitingForCaptureResponse;
-(void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 preferHEVC:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)_isFocusAndExposureAdjusted;
-(id)init;
-(void)_notifyAnalyticsForDidStopCapturingWithState:(id)arg1 ;
-(void)_teardownCaptureTimer;
-(NSCountedSet *)_inFlightTimelapseUUIDs;
-(void)_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setDelegate:(id<CAMTimelapseControllerDelegate>)arg1 ;
-(BOOL)_backendRecoveryNeeded;
-(void)_notifyInsufficientDiskSpaceForContinuingCapture;
-(BOOL)_shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
-(void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
-(void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg1 ;
-(CAMFocusResult *)lastFocusResult;
-(void)_updateFocusAndExposureForStartCapturing;
-(BOOL)_previewStarted;
-(void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2 ;
-(NSDate *)captureStartTime;
-(id<CAMTimelapseControllerDelegate>)delegate;
-(void)_sessionStarted:(id)arg1 ;
-(void)_saveStateToDisk:(id)arg1 ;
-(void)_setFocusAndExposureAdjusted:(BOOL)arg1 ;
-(CAMCaptureGraphConfiguration *)_graphConfigurationForCurrentState;
-(void)_restoreCaptureStateFromDisk;
-(id)_createThumbnailImageFromPlaceholderResult:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(BOOL)isCapturing;
-(CAMPersistenceController *)_persistenceController;
-(void)_startCaptureTimer;
-(void)forceStopTimelapseCaptureWithReasons:(long long)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end
