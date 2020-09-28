/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaletteFloatingKeyboardControllerDelegate;
@class UIKeyboardInputMode;

@interface PKPaletteFloatingKeyboardController : NSObject {

	BOOL _presentingKeyboard;
	BOOL _processingReloadInputViews;
	id<PKPaletteFloatingKeyboardControllerDelegate> _delegate;
	UIKeyboardInputMode* _emojiInputMode;

}

@property (assign,getter=isPresentingKeyboard,nonatomic) BOOL presentingKeyboard;                              //@synthesize presentingKeyboard=_presentingKeyboard - In the implementation block
@property (assign,getter=isProcessingReloadInputViews,nonatomic) BOOL processingReloadInputViews;              //@synthesize processingReloadInputViews=_processingReloadInputViews - In the implementation block
@property (nonatomic,readonly) UIKeyboardInputMode * emojiInputMode;                                           //@synthesize emojiInputMode=_emojiInputMode - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteFloatingKeyboardControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(long long)floatingKeyboardType;
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id<PKPaletteFloatingKeyboardControllerDelegate>)arg1 ;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(id<PKPaletteFloatingKeyboardControllerDelegate>)delegate;
-(void)didChangeInputMode;
-(void)notifyDelegateDidChangeKeyboardType;
-(BOOL)isPresentingKeyboard;
-(void)updateFloatingKeyboardType;
-(BOOL)isProcessingReloadInputViews;
-(void)dismissWithReason:(id)arg1 ;
-(id)_responderFromDelegate;
-(void)_presentKeyboardWithType:(long long)arg1 forResponder:(id)arg2 ;
-(void)setPresentingKeyboard:(BOOL)arg1 ;
-(void)_setTraitsForActiveKeyboard:(id)arg1 forResponder:(id)arg2 ;
-(UIKeyboardInputMode *)emojiInputMode;
-(void)setProcessingReloadInputViews:(BOOL)arg1 ;
-(void)presentOrDismissIfPresented;
@end
