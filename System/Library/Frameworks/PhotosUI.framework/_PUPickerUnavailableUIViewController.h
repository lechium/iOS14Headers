/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@protocol _PUPickerUnavailableUIViewControllerDelegate;
@interface _PUPickerUnavailableUIViewController : UIViewController {

	id<_PUPickerUnavailableUIViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PUPickerUnavailableUIViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)createControllerEmbeddedInNavigationControllerForError:(id)arg1 delegate:(id)arg2 ;
-(void)viewDidLoad;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<_PUPickerUnavailableUIViewControllerDelegate>)arg1 ;
-(id<_PUPickerUnavailableUIViewControllerDelegate>)delegate;
@end

