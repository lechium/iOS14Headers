/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerConfiguration.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class NSString;

@interface PKPeerPaymentSetupFlowProvisionConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration> {

	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)peerPaymentSetupConfigurationType;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)initWithSetupDelegate:(id)arg1 ;
@end
