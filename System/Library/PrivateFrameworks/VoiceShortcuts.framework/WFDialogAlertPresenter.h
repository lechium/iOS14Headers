/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFDialogAlertPresenter <NSObject>
@property (assign,nonatomic,__weak) id<WFDialogAlertPresenterDelegate> delegate; 
@property (nonatomic,readonly) BOOL alertIsActive; 
@required
-(BOOL)alertIsActive;
-(void)deactivateAlert;
-(void)setDelegate:(id)arg1;
-(void)activateAlert;
-(id<WFDialogAlertPresenterDelegate>)delegate;

@end

