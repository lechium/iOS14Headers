/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIContactsAuthorizationControllerDelegate;
@class CNUIContactsAuthorizationStore, CNUICoreContactsAuthorizationModel, NSArray;

@interface CNUIContactsAuthorizationController : NSObject {

	id<CNUIContactsAuthorizationControllerDelegate> _delegate;
	CNUIContactsAuthorizationStore* _store;
	CNUICoreContactsAuthorizationModel* _model;

}

@property (nonatomic,readonly) CNUIContactsAuthorizationStore * store;                               //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) CNUICoreContactsAuthorizationModel * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIdentifiersOfAppsWithContactsAccessInfo; 
@property (nonatomic,readonly) BOOL foundAppsWithContactsAccessInfo; 
@property (assign,nonatomic) id<CNUIContactsAuthorizationControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
+(id)authorizationPaneFooterLabel;
+(id)authorizationPaneContactsAppLabel;
+(id)authorizationPaneHeaderLabel;
+(id)validAuthorizationValues;
+(id)validAuthorizationLabelsForValues;
-(CNUIContactsAuthorizationStore *)store;
-(CNUICoreContactsAuthorizationModel *)model;
-(void)saveModel;
-(void)setModel:(CNUICoreContactsAuthorizationModel *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<CNUIContactsAuthorizationControllerDelegate>)arg1 ;
-(id)createModel;
-(void)lazilyLoadIconsForRemoteItems;
-(id)nameOfAppWithBundleIdentifier:(id)arg1 ;
-(id)iconOfAppWithBundleIdentifier:(id)arg1 ;
-(id<CNUIContactsAuthorizationControllerDelegate>)delegate;
-(BOOL)foundAppsWithContactsAccessInfo;
-(NSArray *)bundleIdentifiersOfAppsWithContactsAccessInfo;
-(void)setAuthorizationLevel:(id)arg1 ofAppWithBundleIdentifier:(id)arg2 ;
-(id)authorizationLevelOfAppWithBundleIdentifier:(id)arg1 ;
@end
