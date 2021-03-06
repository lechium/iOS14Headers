/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IXAppInstallCoordinatorObserver.h>

@class NSURL, IXPlaceholder, IXInitiatingAppInstallCoordinator, IXPromisedTransferToPath, NSString;

@interface CPSAppBundleInstaller : NSObject <IXAppInstallCoordinatorObserver> {

	NSURL* _extractedBundleURL;
	IXPlaceholder* _placeholder;
	IXInitiatingAppInstallCoordinator* _installCoordinator;
	IXPromisedTransferToPath* _appAssetPromise;
	/*^block*/id _completionHandler;
	BOOL _inactive;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL inactive;                            //@synthesize inactive=_inactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)inactive;
-(NSString *)bundleIdentifier;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
-(void)coordinatorDidInstallPlaceholder:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 extractedBundleURL:(id)arg2 ;
-(void)installWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)stopStallingCurrentInstallation;
@end

