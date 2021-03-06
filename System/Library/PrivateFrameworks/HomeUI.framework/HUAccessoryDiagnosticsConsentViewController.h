/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, UIButton, NSURL, NSString;

@interface HUAccessoryDiagnosticsConsentViewController : UIViewController <UITextViewDelegate> {

	UITextView* _descriptionTextView;
	UIButton* _submitButton;
	/*^block*/id _completionHandler;
	NSURL* _privacyPolicyURL;
	long long _consentTextVersion;
	NSString* _manufacturer;

}

@property (nonatomic,retain) UITextView * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) UIButton * submitButton;                       //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSURL * privacyPolicyURL;                      //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (assign,nonatomic) long long consentTextVersion;                  //@synthesize consentTextVersion=_consentTextVersion - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                       //@synthesize manufacturer=_manufacturer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)viewDidLoad;
-(NSURL *)privacyPolicyURL;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(UITextView *)descriptionTextView;
-(void)_addConstraints;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancelSubmission;
-(UIButton *)submitButton;
-(void)setSubmitButton:(UIButton *)arg1 ;
-(id)initWithItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)submitLog;
-(void)setPrivacyPolicyURL:(NSURL *)arg1 ;
-(long long)consentTextVersion;
-(void)setConsentTextVersion:(long long)arg1 ;
@end

