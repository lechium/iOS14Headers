/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class NSString;

@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject <DevicePINControllerDelegate> {

	/*^block*/id _devicePasscodeVerificationCompletionHandler;

}

@property (nonatomic,copy) id devicePasscodeVerificationCompletionHandler;              //@synthesize devicePasscodeVerificationCompletionHandler=_devicePasscodeVerificationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelTextForAccountSummaryCell;
+(id)titleForAccountSummaryGroup;
+(id)deleteAccountGroupFooterText;
+(id)warningTextForAccountDeletion;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)preflightsAccountDeletion:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_verifyDevicePasscodeWithPresentingViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDevicePasscodeVerificationCompletionHandler:(id)arg1 ;
-(id)devicePasscodeVerificationCompletionHandler;
@end

