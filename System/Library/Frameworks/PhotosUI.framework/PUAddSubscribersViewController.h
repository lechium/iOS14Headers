/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@class PUPhotoStreamRecipientViewController, UIBarButtonItem, PLCloudSharedAlbum;

@interface PUAddSubscribersViewController : UIViewController {

	PUPhotoStreamRecipientViewController* _composeRecipientController;
	UIBarButtonItem* _addButton;
	PLCloudSharedAlbum* _album;

}

@property (nonatomic,readonly) PLCloudSharedAlbum * album;              //@synthesize album=_album - In the implementation block
-(void)_keyboardWillShow:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_addButtonHandler;
-(id)initWithSharedStream:(id)arg1 ;
-(void)_cancelButtonHandler;
-(void)_saveAndDismiss;
-(BOOL)_validateRecipientsToAdd:(id)arg1 ;
-(void)recipientViewControllerDidAddRecipient:(id)arg1 ;
-(void)recipientViewControllerDidRemoveRecipient:(id)arg1 ;
-(void)recipientViewController:(id)arg1 didEnterText:(id)arg2 ;
-(void)dealloc;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)loadView;
-(void)_dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PLCloudSharedAlbum *)album;
@end

