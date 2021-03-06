/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, UIDragDropSession;
@class NSObject, SBActivationSettings, SBApplication, FBSSceneIdentity, UIDraggingSystemSession, SBSAppDragLocalContext, NSSet, NSString;

@interface SBApplicationDropSession : NSObject {

	NSObject*<OS_dispatch_group> _activationSettingsGroup;
	BOOL _notificationDrag;
	BOOL _windowTearOff;
	SBActivationSettings* _activationSettings;
	SBApplication* _application;
	FBSSceneIdentity* _sceneIdentity;
	id<UIDragDropSession> _uiDragDropSession;
	UIDraggingSystemSession* _systemSession;
	SBSAppDragLocalContext* _localContext;
	NSSet* _launchActions;
	NSString* _targetContentIdentifier;

}

@property (nonatomic,retain) FBSSceneIdentity * sceneIdentity;                               //@synthesize sceneIdentity=_sceneIdentity - In the implementation block
@property (nonatomic,copy) NSString * targetContentIdentifier;                               //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
@property (nonatomic,readonly) SBApplication * application;                                  //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) id<UIDragDropSession> uiDragDropSession;                      //@synthesize uiDragDropSession=_uiDragDropSession - In the implementation block
@property (nonatomic,readonly) UIDraggingSystemSession * systemSession;                      //@synthesize systemSession=_systemSession - In the implementation block
@property (nonatomic,readonly) long long dropZones; 
@property (getter=isNotificationDrag,nonatomic,readonly) BOOL notificationDrag;              //@synthesize notificationDrag=_notificationDrag - In the implementation block
@property (getter=isWindowTearOff,nonatomic,readonly) BOOL windowTearOff;                    //@synthesize windowTearOff=_windowTearOff - In the implementation block
@property (nonatomic,readonly) SBSAppDragLocalContext * localContext;                        //@synthesize localContext=_localContext - In the implementation block
@property (nonatomic,readonly) SBActivationSettings * activationSettings;                    //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,readonly) NSSet * launchActions;                                        //@synthesize launchActions=_launchActions - In the implementation block
+(BOOL)_dragItemRepresentsAcceptableFileDrag:(id)arg1 ;
+(void)_getLocalAppDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_applicationForIconLeafIdentifier:(id)arg1 ;
+(void)_getUserNotificationDropSessionWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 dragItem:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)_getUserActivityDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_getFileDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_getURLDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)_applicationProxyForIdentifiers:(id)arg1 forURL:(id)arg2 passingTest:(/*^block*/id)arg3 error:(id*)arg4 ;
+(BOOL)_itemProviderRequiresOpenInPlace:(id)arg1 ;
+(id)_applicationForHandlingDragItem:(id)arg1 URL:(id)arg2 error:(id*)arg3 ;
+(BOOL)canHandleUIDragDropSession:(id)arg1 ;
+(id)dropSessionWithWindowUIDragSession:(id)arg1 ;
+(void)getDropSessionWithUIDropSession:(id)arg1 sceneProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SBSAppDragLocalContext *)localContext;
-(SBApplication *)application;
-(void)setSceneIdentity:(FBSSceneIdentity *)arg1 ;
-(SBActivationSettings *)activationSettings;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(NSString *)targetContentIdentifier;
-(NSSet *)launchActions;
-(id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 localContext:(id)arg5 activity:(id)arg6 activityData:(id)arg7 ;
-(void)calculateSceneIdentityWithSceneProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 ;
-(id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 URL:(id)arg5 requiresOpenInPlace:(BOOL)arg6 ;
-(id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 activity:(id)arg4 activityData:(id)arg5 ;
-(id)_initWithUIDragDropSession:(id)arg1 application:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(BOOL)_isApplicationBoundToVisibleIcon;
-(id)_activityContinuationActionFromActivity:(id)arg1 activityData:(id)arg2 ;
-(id<UIDragDropSession>)uiDragDropSession;
-(UIDraggingSystemSession *)systemSession;
-(BOOL)isNotificationDrag;
-(BOOL)isWindowTearOff;
-(long long)dropZones;
-(FBSSceneIdentity *)sceneIdentity;
@end

