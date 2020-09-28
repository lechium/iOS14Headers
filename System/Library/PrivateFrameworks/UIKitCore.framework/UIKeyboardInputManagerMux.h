/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIIVCResponseDelegateImpl, TIKeyboardInputManager;
@class NSMutableArray;

@interface UIKeyboardInputManagerMux : NSObject {

	NSMutableArray* _clients;
	id<_UIIVCResponseDelegateImpl> _responseDelegate;
	id<TIKeyboardInputManager> _systemInputManager;

}

@property (nonatomic,retain) id<TIKeyboardInputManager> systemInputManager;                //@synthesize systemInputManager=_systemInputManager - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemInputManager; 
@property (nonatomic,retain) id<_UIIVCResponseDelegateImpl> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
+(id)sharedInstance;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id<TIKeyboardInputManager>)systemInputManager;
-(void)removeAllClients;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)_systemHasKbd;
-(void)dealloc;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegateImpl>)arg1 ;
-(void)addClient:(id)arg1 ;
-(void)releaseConnectedClients;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setSystemInputManager:(id<TIKeyboardInputManager>)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2 ;
-(BOOL)hasSystemInputManager;
-(id<_UIIVCResponseDelegateImpl>)responseDelegate;
@end
