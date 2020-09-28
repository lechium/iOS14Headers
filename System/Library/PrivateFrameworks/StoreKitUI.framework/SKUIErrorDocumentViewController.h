/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIClientContext, NSString;

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUIClientContext* _clientContext;
	unsigned long long _contentUnavailableStyle;
	/*^block*/id _retryActionBlock;

}

@property (nonatomic,copy) id retryActionBlock;                     //@synthesize retryActionBlock=_retryActionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)documentDidUpdate:(id)arg1 ;
-(id)retryActionBlock;
-(id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2 ;
-(void)setRetryActionBlock:(id)arg1 ;
@end
