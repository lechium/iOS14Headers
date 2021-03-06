/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@protocol OS_dispatch_group;
@class NSObject, NSString, PKPaymentSetupProduct;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {

	BOOL _termsAccepted;
	NSObject*<OS_dispatch_group> _nextScreenGroup;
	NSString* _titleText;
	NSString* _subtitleText;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,readonly) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
+(BOOL)readerModeProvisioningIsSupported;
-(PKPaymentSetupProduct *)product;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4 ;
-(id)footerView;
-(id)defaultFields;
-(void)_showTerms;
-(void)_prepareForProvisioningViewController;
-(void)_registerLocalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)_pushReaderModeProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)_downloadCardArtIfNecessary:(/*^block*/id)arg1 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
@end

