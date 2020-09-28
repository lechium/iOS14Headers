/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewController, NSString;

@interface CDPRemoteValidationEscapeOffer : NSObject {

	NSMutableArray* _escapeOptions;
	UIViewController* _presentingViewController;
	NSString* _escapeOfferName;
	NSString* _title;
	NSString* _message;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSString * escapeOfferName;                                      //@synthesize escapeOfferName=_escapeOfferName - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                              //@synthesize message=_message - In the implementation block
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(UIViewController *)presentingViewController;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)handleEscapeAction:(id)arg1 ;
-(void)setEscapeOfferName:(NSString *)arg1 ;
-(void)addEscapeOptionsObject:(id)arg1 ;
-(id)escapeOptions;
-(NSString *)escapeOfferName;
-(id)_actionFromEscapeOption:(id)arg1 ;
-(long long)_styleForEscapeOption:(id)arg1 ;
-(void)dismissOfferAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end
