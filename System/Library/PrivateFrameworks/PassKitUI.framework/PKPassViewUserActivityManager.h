/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@protocol OS_dispatch_queue;
@class NSUserActivity, NSObject, NSString;

@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver> {

	NSUserActivity* _currentUserActivity;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isForegroundActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_currentUserActivityPassUniqueID;
-(void)_endedViewingPass;
-(BOOL)_shouldDonateActivity:(id)arg1 ;
-(id)_displayNameForPass:(id)arg1 ;
-(id)_templateNameForPass:(id)arg1 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(id)_init;
-(id)init;
-(void)startedViewingPass:(id)arg1 ;
-(void)endedViewingPass;
@end

