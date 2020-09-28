/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <ShareSheet/UIActivity.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, MFMailComposeViewController;

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity> {

	os_unfair_lock_s _canSendMailLock;
	BOOL _canSendMailChecked;
	SCD_Struct_UI2 _canSendMail;
	BOOL _isContentManaged;
	BOOL _keyboardVisible;
	BOOL _hasAnyAccount;
	BOOL _hasValidAccountForSending;
	NSString* _sourceApplicationBundleID;
	NSString* _subject;
	NSString* _autosaveIdentifier;
	MFMailComposeViewController* _mailComposeViewController;

}

@property (nonatomic,retain) MFMailComposeViewController * mailComposeViewController;              //@synthesize mailComposeViewController=_mailComposeViewController - In the implementation block
@property (assign,nonatomic) BOOL hasAnyAccount;                                                   //@synthesize hasAnyAccount=_hasAnyAccount - In the implementation block
@property (assign,nonatomic) BOOL hasValidAccountForSending;                                       //@synthesize hasValidAccountForSending=_hasValidAccountForSending - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                     //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) BOOL keyboardVisible;                                                 //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (nonatomic,retain) NSString * autosaveIdentifier;                                        //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isContentManaged;                                                //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                   //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(id)applicationBundleID;
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
-(void)setRecipients:(id)arg1 ;
-(id)activityType;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_cleanup;
-(id)_mailDraftRestorationURL;
-(BOOL)canShareURLThroughMail:(id)arg1 ;
-(void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1 ;
-(id)_stateRestorationDraftIsAvailable;
-(MFMailComposeViewController *)mailComposeViewController;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_UI2)_checkCanSendMail;
-(void)setHasAnyAccount:(BOOL)arg1 ;
-(void)setHasValidAccountForSending:(BOOL)arg1 ;
-(BOOL)hasAnyAccount;
-(BOOL)hasValidAccountForSending;
-(NSString *)autosaveIdentifier;
-(BOOL)_restoreDraft;
-(NSString *)sourceApplicationBundleID;
-(void)setMailComposeViewController:(MFMailComposeViewController *)arg1 ;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(/*^block*/id)_backgroundPreheatBlock;
-(void)_prepareWithActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)setAutosaveIdentifier:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)dealloc;
-(void)_setSessionID:(id)arg1 ;
-(id)activityViewController;
-(BOOL)isContentManaged;
-(BOOL)keyboardVisible;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)init;
-(id)activityTitle;
-(void)_setMailSubject:(id)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)_saveDraft:(id)arg1 ;
@end
