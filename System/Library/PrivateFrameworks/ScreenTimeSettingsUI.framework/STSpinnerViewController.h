/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

@interface STSpinnerViewController : UIViewController {

	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
@end

