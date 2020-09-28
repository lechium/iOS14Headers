/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController, NSString;


@protocol WBUFormAutoFillWebView <NSObject>
@property (nonatomic,readonly) UIViewController * webui_presentingViewController; 
@property (nonatomic,readonly) BOOL webui_privateBrowsingEnabled; 
@property (setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:,nonatomic,copy) NSString * webui_lastGeneratedPasswordForCurrentBackForwardItem; 
@optional
-(BOOL)webui_canPromptForAccountSecurityRecommendation;

@required
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(id)arg1;
-(UIViewController *)webui_presentingViewController;
-(NSString *)webui_lastGeneratedPasswordForCurrentBackForwardItem;
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;
-(BOOL)webui_privateBrowsingEnabled;

@end
