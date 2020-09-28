/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIResponder.h>

@protocol _UITextLoupeResponderProxyDelegate;
@class UIResponder;

@interface _UITextLoupeResponderProxy : UIResponder {

	UIResponder* _responder;
	id<_UITextLoupeResponderProxyDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) UIResponder * responder;                                    //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<_UITextLoupeResponderProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_proxyWithResponder:(id)arg1 ;
-(UIResponder *)responder;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)selectToHere:(id)arg1 ;
-(void)setDelegate:(id<_UITextLoupeResponderProxyDelegate>)arg1 ;
-(id<_UITextLoupeResponderProxyDelegate>)delegate;
@end
