/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationActionRunner.h>
#import <libobjc.A.dylib/SBLockScreenPluginLifecycleObserver.h>

@class SBSCardItem, NSString;

@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver> {

	BOOL _shouldForwardAction;
	SBSCardItem* _cardItem;
	/*^block*/id _pluginCompletionBlock;

}

@property (assign,nonatomic) BOOL shouldForwardAction;              //@synthesize shouldForwardAction=_shouldForwardAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1 ;
-(void)willPresentLockScreenPlugin:(id)arg1 ;
-(void)didPresentLockScreenPlugin:(id)arg1 ;
-(void)willDismissLockScreenPlugin:(id)arg1 ;
-(void)didDismissLockScreenPlugin:(id)arg1 ;
@end

