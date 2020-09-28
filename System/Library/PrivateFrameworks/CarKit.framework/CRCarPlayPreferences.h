/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol CRCarPlayPreferencesDelegate;
@class NSString;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver> {

	BOOL _cachedCarPlayAllowed;
	id<CRCarPlayPreferencesDelegate> _preferencesDelegate;

}

@property (assign,nonatomic) BOOL cachedCarPlayAllowed;                                                //@synthesize cachedCarPlayAllowed=_cachedCarPlayAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<CRCarPlayPreferencesDelegate> preferencesDelegate;              //@synthesize preferencesDelegate=_preferencesDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id<CRCarPlayPreferencesDelegate>)preferencesDelegate;
-(void)dealloc;
-(BOOL)isCarPlayAllowed;
-(BOOL)isWirelessCarPlayEnabled;
-(id)init;
-(BOOL)_isCarPlayAllowed;
-(BOOL)cachedCarPlayAllowed;
-(void)_updateCarPlayAllowed;
-(void)handleAssistantPreferencesChanged:(id)arg1 ;
-(void)setCachedCarPlayAllowed:(BOOL)arg1 ;
-(void)handleAssistantLanguageChanged:(id)arg1 ;
-(BOOL)isCarPlayCapable;
-(void)setPreferencesDelegate:(id<CRCarPlayPreferencesDelegate>)arg1 ;
@end
