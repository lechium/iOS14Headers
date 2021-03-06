/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKSubcredentialPairingFlowControllerContext;


@protocol PKSubcredentialPairingFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation,PKFieldDetectSuppressor>
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext; 
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController; 
@property (nonatomic,readonly) unsigned long long operation; 
@optional
-(void)hostApplicationDidEnterBackground;
-(void)hostApplicationWillEnterForeground;

@required
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;

@end

