/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UITextView;

@interface CKSettingsGenericAboutViewController : UIViewController {

	UITextView* _aboutView;

}

@property (nonatomic,retain) UITextView * aboutView;              //@synthesize aboutView=_aboutView - In the implementation block
-(void)done:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(UITextView *)aboutView;
-(void)setAboutView:(UITextView *)arg1 ;
@end
