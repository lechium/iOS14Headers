/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSMutableSet, NSString;

@interface MGNotificationObserver : NSObject <NSCopying, MCProfileConnectionObserver> {

	NSMutableSet* _blocks;
	int _type;
	NSString* _argument;
	SCD_Union_MG2* _registration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_cancelRegistration;
-(void)dealloc;
-(void)startDynaStoreMonitoringWithArgument:(id)arg1 ;
-(void)invokeBlocks;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 ;
-(void)_removeBlock:(/*^block*/id)arg1 ;
-(id)initWithType:(int)arg1 argument:(id)arg2 ;
@end
