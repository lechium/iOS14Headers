/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@protocol SKUIRedeemViewCameraOverrideDelegate;
@class NSString, SKUIClientContext, SUClientInterface, NSOperationQueue, UIActivityIndicatorView, UIViewController, SKUIRedeemConfiguration;

@interface SKUIRedeemViewController : UINavigationController {

	BOOL _attempsAutomaticRedeem;
	BOOL _cameraRedeemVisible;
	BOOL _finishedLoading;
	BOOL _shouldPerformInitialOperationOnAppear;
	long long _category;
	id<SKUIRedeemViewCameraOverrideDelegate> _cameraDelegate;
	NSString* _initialCode;
	SKUIClientContext* _clientContext;
	SUClientInterface* _clientInterface;
	NSOperationQueue* _operationQueue;
	UIActivityIndicatorView* _activityIndicator;
	UIViewController* _embeddedViewController;
	SKUIRedeemConfiguration* _redeemConfiguration;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIViewController * embeddedViewController;                                   //@synthesize embeddedViewController=_embeddedViewController - In the implementation block
@property (assign,nonatomic) BOOL finishedLoading;                                                        //@synthesize finishedLoading=_finishedLoading - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * redeemConfiguration;                               //@synthesize redeemConfiguration=_redeemConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformInitialOperationOnAppear;                                  //@synthesize shouldPerformInitialOperationOnAppear=_shouldPerformInitialOperationOnAppear - In the implementation block
@property (nonatomic,readonly) long long category;                                                        //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL attempsAutomaticRedeem;                                                 //@synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemViewCameraOverrideDelegate> cameraDelegate;              //@synthesize cameraDelegate=_cameraDelegate - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                                                        //@synthesize initialCode=_initialCode - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;                                         //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic) BOOL cameraRedeemVisible;                                                    //@synthesize cameraRedeemVisible=_cameraRedeemVisible - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
+(BOOL)redeemRequiresNationalId:(id)arg1 ;
-(void)setCameraDelegate:(id<SKUIRedeemViewCameraOverrideDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id<SKUIRedeemViewCameraOverrideDelegate>)cameraDelegate;
-(void)_setupNavigationItem;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)viewDidLoad;
-(long long)category;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)_cancelButtonAction;
-(void)_setChildViewController:(id)arg1 ;
-(void)_setup;
-(SUClientInterface *)clientInterface;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(SKUIClientContext *)clientContext;
-(UIViewController *)embeddedViewController;
-(UIActivityIndicatorView *)activityIndicator;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setCameraRedeemVisible:(BOOL)arg1 ;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(void)setShouldPerformInitialOperationOnAppear:(BOOL)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)clientInterfaceDidFinishLoading:(id)arg1 ;
-(NSString *)initialCode;
-(BOOL)shouldPerformInitialOperationOnAppear;
-(BOOL)attempsAutomaticRedeem;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(BOOL)cameraRedeemVisible;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)setAttempsAutomaticRedeem:(BOOL)arg1 ;
-(void)_startActivityIndicator;
-(void)_stopActivityIndicator;
-(void)_presentModernRedeemWithURL:(id)arg1 ;
-(void)_presentLegacyRedeem;
-(void)_redeemURLWithCompletion:(/*^block*/id)arg1 ;
-(void)setEmbeddedViewController:(UIViewController *)arg1 ;
-(BOOL)finishedLoading;
-(void)setFinishedLoading:(BOOL)arg1 ;
@end

