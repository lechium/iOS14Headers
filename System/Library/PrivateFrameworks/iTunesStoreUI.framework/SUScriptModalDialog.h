/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUScriptModalDialogDelegate;
@class ISDialog;

@interface SUScriptModalDialog : NSObject {

	ISDialog* _dialog;
	id<SUScriptModalDialogDelegate> _delegate;

}

@property (assign,nonatomic) id<SUScriptModalDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)titleForURL:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SUScriptModalDialogDelegate>)arg1 ;
-(id<SUScriptModalDialogDelegate>)delegate;
-(id)initWithDialog:(id)arg1 ;
-(id)copyResponseByRunningModal;
-(id)_copyResponseByRunningModal;
@end
