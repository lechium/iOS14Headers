/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CACCCorrectionsCandidatesViewControllerDelegate.h>
#import <libobjc.A.dylib/CACViewController.h>

@protocol CACCorrectionsPresentationDelegate;
@class NSString, NSArray, CACPopoverPresentingViewController, CACCorrectionsCandidatesViewController;

@interface CACCorrectionsPresentationViewController : UIViewController <UIPopoverPresentationControllerDelegate, CACCCorrectionsCandidatesViewControllerDelegate, CACViewController> {

	id<CACCorrectionsPresentationDelegate> _delegate;
	NSString* _text;
	NSArray* _alternatives;
	NSArray* _emojis;
	CACPopoverPresentingViewController* _popoverPresentingViewController;
	CACCorrectionsCandidatesViewController* _correctionViewController;
	CGRect _portraitUpSourceRect;

}

@property (nonatomic,retain) CACPopoverPresentingViewController * popoverPresentingViewController;              //@synthesize popoverPresentingViewController=_popoverPresentingViewController - In the implementation block
@property (nonatomic,retain) CACCorrectionsCandidatesViewController * correctionViewController;                 //@synthesize correctionViewController=_correctionViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CACCorrectionsPresentationDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * alternatives;                                                              //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSArray * emojis;                                                                    //@synthesize emojis=_emojis - In the implementation block
@property (assign,nonatomic) CGRect portraitUpSourceRect;                                                       //@synthesize portraitUpSourceRect=_portraitUpSourceRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(long long)zOrder;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(NSArray *)alternatives;
-(BOOL)isOverlay;
-(NSString *)text;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(id)init;
-(NSArray *)emojis;
-(void)setDelegate:(id<CACCorrectionsPresentationDelegate>)arg1 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(id<CACCorrectionsPresentationDelegate>)delegate;
-(BOOL)_canShowWhileLocked;
-(void)dismissCorrectionsCandidatesViewController:(id)arg1 ;
-(void)correctionsCandidatesViewController:(id)arg1 didSelectItemWithText:(id)arg2 ;
-(void)setEmojis:(NSArray *)arg1 ;
-(CGRect)portraitUpSourceRect;
-(void)setPortraitUpSourceRect:(CGRect)arg1 ;
-(CACPopoverPresentingViewController *)popoverPresentingViewController;
-(CACCorrectionsCandidatesViewController *)correctionViewController;
-(void)setPopoverPresentingViewController:(CACPopoverPresentingViewController *)arg1 ;
-(void)setCorrectionViewController:(CACCorrectionsCandidatesViewController *)arg1 ;
@end

