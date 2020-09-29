/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKServiceViewController.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerInternalDelegate.h>

@class MFMessageComposeViewController, NSString, NSArray;

@interface GKServiceFriendRequestViewController : GKServiceViewController <MFMessageComposeViewControllerInternalDelegate> {

	BOOL _messageComposeSent;
	MFMessageComposeViewController* _composeController;
	NSString* _friendCode;
	NSString* _friendSupportPageURL;
	NSArray* _recipients;

}

@property (nonatomic,retain) MFMessageComposeViewController * composeController;              //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,retain) NSString * friendCode;                                           //@synthesize friendCode=_friendCode - In the implementation block
@property (nonatomic,retain) NSString * friendSupportPageURL;                                 //@synthesize friendSupportPageURL=_friendSupportPageURL - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                            //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) BOOL messageComposeSent;                                         //@synthesize messageComposeSent=_messageComposeSent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(BOOL)shouldAnimatePresentationForPrivateViewController:(id)arg1 ;
-(NSString *)friendCode;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(NSString *)friendSupportPageURL;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(MFMessageComposeViewController *)composeController;
-(void)setComposeController:(MFMessageComposeViewController *)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setFriendCode:(NSString *)arg1 ;
-(void)setFriendSupportPageURL:(NSString *)arg1 ;
-(void)setMessageComposeSent:(BOOL)arg1 ;
-(void)constructPrivateViewController;
-(BOOL)messageComposeSent;
-(void)displayAlertWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_useBackdropViewForWindowBackground;
@end
