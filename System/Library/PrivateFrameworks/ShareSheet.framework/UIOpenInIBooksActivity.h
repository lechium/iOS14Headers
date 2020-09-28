/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, NSURL, LSApplicationProxy, NSOperation, UIPrintInteractionController;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity> {

	BOOL _isContentManaged;
	BOOL _shouldUnlinkFile;
	NSString* _sourceApplicationBundleID;
	NSURL* _url;
	NSString* _applicationIdentifier;
	LSApplicationProxy* _applicationProxy;
	NSOperation* _operation;
	UIPrintInteractionController* _printInteractionController;

}

@property (nonatomic,retain) NSURL * url;                                                            //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL shouldUnlinkFile;                                                  //@synthesize shouldUnlinkFile=_shouldUnlinkFile - In the implementation block
@property (nonatomic,retain) NSString * applicationIdentifier;                                       //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                                  //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSOperation * operation;                                                //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) UIPrintInteractionController * printInteractionController;              //@synthesize printInteractionController=_printInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isContentManaged;                                                  //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                     //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(id)bestJobNameForActivityItems:(id)arg1 ;
+(id)jobNameFormatForFile;
+(id)defaultJobName;
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(void)_cleanup;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(long long)_defaultSortGroup;
-(NSString *)sourceApplicationBundleID;
-(id)_loadedApplicationProxy;
-(void)_finishedCopyingResource:(BOOL)arg1 ;
-(void)setOperation:(NSOperation *)arg1 ;
-(BOOL)shouldUnlinkFile;
-(void)setShouldUnlinkFile:(BOOL)arg1 ;
-(void)_openDocumentWithApplication;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(LSApplicationProxy *)applicationProxy;
-(NSString *)applicationIdentifier;
-(BOOL)_appIsDocumentTypeOwner;
-(NSOperation *)operation;
-(BOOL)isContentManaged;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)init;
-(id)activityTitle;
-(UIPrintInteractionController *)printInteractionController;
-(void)performActivity;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(NSURL *)url;
-(void)setPrintInteractionController:(UIPrintInteractionController *)arg1 ;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
@end
