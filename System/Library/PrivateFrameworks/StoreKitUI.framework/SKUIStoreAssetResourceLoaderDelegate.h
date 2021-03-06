/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class NSURL, NSOperationQueue, SKUIClientContext, NSString;

@interface SKUIStoreAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	BOOL _isITunesStream;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;
	NSOperationQueue* _operationQueue;
	BOOL _shouldUseITunesStoreSecureKeyDelivery;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(SKUIClientContext *)clientContext;
@end

