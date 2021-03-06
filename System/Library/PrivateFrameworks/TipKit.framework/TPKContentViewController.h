/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipKit/TipKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, UIBarItem, TPKContentController, UIView, NSString;

@interface TPKContentViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	UIViewController* _sourceViewController;
	UIBarItem* _barItem;
	TPKContentController* __contentController;
	CGSize __clientProvidedPreferredContentSize;
	CGRect __clientProvidedSourceRect;

}

@property (assign,nonatomic) CGSize _clientProvidedPreferredContentSize;                    //@synthesize _clientProvidedPreferredContentSize=__clientProvidedPreferredContentSize - In the implementation block
@property (assign,nonatomic) CGRect _clientProvidedSourceRect;                              //@synthesize _clientProvidedSourceRect=__clientProvidedSourceRect - In the implementation block
@property (assign,nonatomic,__weak) TPKContentController * _contentController;              //@synthesize _contentController=__contentController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * sourceViewController;                //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,retain) UIBarItem * barItem;                                           //@synthesize barItem=_barItem - In the implementation block
@property (nonatomic,retain) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)sourceView;
-(TPKContentController *)_contentController;
-(id)popoverPresentationController;
-(CGRect)sourceRect;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(UIViewController *)sourceViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(BOOL)isModalInPresentation;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIBarItem *)barItem;
-(id)_passthroughViewsForViewController:(id)arg1 ;
-(void)_updatePopoverSize;
-(CGSize)_clientProvidedPreferredContentSize;
-(void)_tpkSetPreferredContentSize:(CGSize)arg1 ;
-(void)set_clientProvidedPreferredContentSize:(CGSize)arg1 ;
-(id)_passthroughViewsForView:(id)arg1 ;
-(id)initPopoverWithContentView:(id)arg1 sourceViewController:(id)arg2 ;
-(void)setBarItem:(UIBarItem *)arg1 ;
-(CGRect)_clientProvidedSourceRect;
-(void)set_clientProvidedSourceRect:(CGRect)arg1 ;
-(void)set_contentController:(TPKContentController *)arg1 ;
@end

