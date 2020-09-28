/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightLongNumericKeypad : SBUIPasscodeLockViewLongNumericKeypad {

	SBUIButton* _actionButton;

}
-(id)initWithLightStyle:(BOOL)arg1 ;
-(void)_layoutStatusView;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(void)_actionButtonHit;
-(void)_layoutActionButton;
-(void)_setShowsEmergencyCallButton:(BOOL)arg1 fromCancelButton:(BOOL)arg2 ;
-(void)_setShowsCancelButton:(BOOL)arg1 fromEmergencyCallButton:(BOOL)arg2 ;
-(void)_configureActionButton;
-(void)_sizeLabel:(id)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
@end
