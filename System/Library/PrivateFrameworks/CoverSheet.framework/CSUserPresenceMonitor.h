/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSEventHandling.h>

@protocol SBUIBiometricResource, BSInvalidatable;
@class NSMutableSet, NSHashTable, NSString;

@interface CSUserPresenceMonitor : NSObject <CSEventHandling> {

	id<SBUIBiometricResource> _biometricResource;
	NSMutableSet* _activationReasons;
	id<BSInvalidatable> _faceDetectAssertion;
	NSHashTable* _observers;
	BOOL _userPresenceDetectedSinceWake;

}

@property (nonatomic,readonly) BOOL userPresenceDetectedSinceWake;              //@synthesize userPresenceDetectedSinceWake=_userPresenceDetectedSinceWake - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)userPresenceDetectedSinceWake;
-(void)_updateFaceDetectionState;
-(BOOL)_handleBiometricEvent:(unsigned long long)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)conformsToCSEventHandling;
-(void)removeObserver:(id)arg1 ;
-(void)enableDetectionForReason:(id)arg1 ;
-(void)dealloc;
-(void)disableDetectionForReason:(id)arg1 ;
-(void)_setUserPresenceDetectedSinceWake:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)isUserPresenceDetectionSupported;
-(BOOL)_isFaceDetectPermitted;
-(id)initWithBiometricResource:(id)arg1 ;
@end
