/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeyboardSettings/EditUserWordController.h>

@class UIWindow;

@interface UIEditUserWordController : EditUserWordController {

	long long _oldPopoverStyle;
	UIWindow* _rotationDecider;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                            //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (setter=_setRotationDecider:,nonatomic,retain) UIWindow * _rotationDecider;              //@synthesize rotationDecider=_rotationDecider - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)_dismiss;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(UIWindow *)_rotationDecider;
-(id)initWithText:(id)arg1 andShortcut:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)_shouldSetDefaultFirstResponder;
-(void)_setRotationDecider:(id)arg1 ;
@end
