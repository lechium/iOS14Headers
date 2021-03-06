/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STGroupFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/STRootViewModelCoordinator.h>
@class STRootViewModel;


@protocol STRootViewModelCoordinator <NSObject>
@property (nonatomic,readonly) STRootViewModel * viewModel; 
@property (readonly) NSObject*<STContentPrivacyViewModelCoordinator> contentPrivacyCoordinator; 
@property (readonly) NSObject*<STUsageDetailsViewModelCoordinator> usageDetailsCoordinator; 
@property (readonly) NSObject*<STTimeAllowancesViewModelCoordinator> timeAllowancesCoordinator; 
@property (assign,nonatomic) BOOL hasShownMiniBuddy; 
@property (assign,nonatomic) BOOL hasAlreadyEnteredPINForSession; 
@property (getter=isPasscodeEnabled,nonatomic,readonly) BOOL passcodeEnabled; 
@required
-(void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setShareWebUsageEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setHasAlreadyEnteredPINForSession:(BOOL)arg1;
-(BOOL)hasAlreadyEnteredPINForSession;
-(BOOL)isPasscodeEnabled;
-(STRootViewModel *)viewModel;
-(NSObject*<STContentPrivacyViewModelCoordinator>)contentPrivacyCoordinator;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setPIN:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)validatePIN:(id)arg1;
-(id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3;
-(void)setHasShownMiniBuddy:(BOOL)arg1;
-(NSObject*<STTimeAllowancesViewModelCoordinator>)timeAllowancesCoordinator;
-(BOOL)hasShownMiniBuddy;
-(NSObject*<STUsageDetailsViewModelCoordinator>)usageDetailsCoordinator;

@end


@protocol STUsageDetailsViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STContentPrivacyViewModelCoordinator;
@class STRootViewModel, NSObject, STAdminPersistenceController, STGroupFetchedResultsController, NSMutableDictionary, NSNumber, NSString;

@interface STRootViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator> {

	BOOL _hasAlreadyEnteredPINForSession;
	BOOL _isLocalUser;
	NSObject*<STUsageDetailsViewModelCoordinator> _usageDetailsCoordinator;
	NSObject*<STTimeAllowancesViewModelCoordinator> _timeAllowancesCoordinator;
	NSObject*<STContentPrivacyViewModelCoordinator> _contentPrivacyCoordinator;
	STAdminPersistenceController* _persistenceController;
	STRootViewModel* _viewModel;
	STGroupFetchedResultsController* _fetchedResultsController;
	NSMutableDictionary* _coordinatorsByChildDSID;
	NSNumber* _userDSID;
	NSString* _deviceIdentifier;
	NSNumber* _usageReportType;
	long long _usageContext;
	NSString* _userName;

}

@property (readonly) STAdminPersistenceController * persistenceController;                                   //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,retain) STRootViewModel * viewModel;                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) STGroupFetchedResultsController * fetchedResultsController;                     //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coordinatorsByChildDSID;                                  //@synthesize coordinatorsByChildDSID=_coordinatorsByChildDSID - In the implementation block
@property (nonatomic,copy) NSNumber * userDSID;                                                              //@synthesize userDSID=_userDSID - In the implementation block
@property (copy,readonly) NSString * deviceIdentifier;                                                       //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy,readonly) NSNumber * usageReportType;                                                        //@synthesize usageReportType=_usageReportType - In the implementation block
@property (readonly) long long usageContext;                                                                 //@synthesize usageContext=_usageContext - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                              //@synthesize userName=_userName - In the implementation block
@property (assign,nonatomic) BOOL isLocalUser;                                                               //@synthesize isLocalUser=_isLocalUser - In the implementation block
@property (assign,nonatomic) BOOL hasAlreadyEnteredPINForSession;                                            //@synthesize hasAlreadyEnteredPINForSession=_hasAlreadyEnteredPINForSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSObject*<STContentPrivacyViewModelCoordinator> contentPrivacyCoordinator;              //@synthesize contentPrivacyCoordinator=_contentPrivacyCoordinator - In the implementation block
@property (readonly) NSObject*<STUsageDetailsViewModelCoordinator> usageDetailsCoordinator;                  //@synthesize usageDetailsCoordinator=_usageDetailsCoordinator - In the implementation block
@property (readonly) NSObject*<STTimeAllowancesViewModelCoordinator> timeAllowancesCoordinator;              //@synthesize timeAllowancesCoordinator=_timeAllowancesCoordinator - In the implementation block
@property (assign,nonatomic) BOOL hasShownMiniBuddy; 
@property (getter=isPasscodeEnabled,nonatomic,readonly) BOOL passcodeEnabled; 
+(id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+(id)loadViewModelFromManagedObjectContext:(id)arg1 isLocalUser:(BOOL)arg2 userDSID:(id)arg3 error:(id*)arg4 ;
+(id)keyPathsForValuesAffectingPasscodeEnabled;
-(NSString *)userName;
-(NSString *)deviceIdentifier;
-(void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setShareWebUsageEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHasAlreadyEnteredPINForSession:(BOOL)arg1 ;
-(void)setIsLocalUser:(BOOL)arg1 ;
-(NSNumber *)usageReportType;
-(long long)usageContext;
-(void)loadViewModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadViewModelRightNow;
-(BOOL)hasAlreadyEnteredPINForSession;
-(void)setCoordinatorsByChildDSID:(NSMutableDictionary *)arg1 ;
-(STAdminPersistenceController *)persistenceController;
-(void)_registerForPersistentStoreNotifications;
-(NSMutableDictionary *)coordinatorsByChildDSID;
-(BOOL)isPasscodeEnabled;
-(STRootViewModel *)viewModel;
-(void)_registerForWillResignActiveNotifications;
-(void)_passcodeSessionHasEnded:(id)arg1 ;
-(void)groupResultsControllerDidChangeContents:(id)arg1 ;
-(id)init;
-(NSNumber *)userDSID;
-(NSObject*<STContentPrivacyViewModelCoordinator>)contentPrivacyCoordinator;
-(id)organizationIdentifierForUsage;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(STGroupFetchedResultsController *)fetchedResultsController;
-(id)initWithUserDSID:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 usageContext:(long long)arg4 ;
-(void)setFetchedResultsController:(STGroupFetchedResultsController *)arg1 ;
-(void)_setPIN:(id)arg1 recoveryAltDSID:(id)arg2 shouldSetRecoveryAppleID:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isLocalUser;
-(void)setPIN:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)validatePIN:(id)arg1 ;
-(id)organizationIdentifierForManagement;
-(id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 ;
-(void)setHasShownMiniBuddy:(BOOL)arg1 ;
-(NSObject*<STTimeAllowancesViewModelCoordinator>)timeAllowancesCoordinator;
-(void)setUserName:(NSString *)arg1 ;
-(BOOL)hasShownMiniBuddy;
-(NSObject*<STUsageDetailsViewModelCoordinator>)usageDetailsCoordinator;
-(void)saveViewModel:(id)arg1 ;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(void)setViewModel:(STRootViewModel *)arg1 ;
@end

