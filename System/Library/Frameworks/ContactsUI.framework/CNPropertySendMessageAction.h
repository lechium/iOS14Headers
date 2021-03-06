/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>

@class UIAlertController, CNContactActionsController, CNUIUserActionListDataSource, NSString;

@interface CNPropertySendMessageAction : CNPropertyAction <CNContactActionsControllerDelegate> {

	UIAlertController* _alertController;
	CNContactActionsController* _actionsController;
	CNUIUserActionListDataSource* _actionsDataSource;

}

@property (nonatomic,retain) UIAlertController * alertController;                           //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) CNContactActionsController * actionsController;                //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionsDataSource;              //@synthesize actionsDataSource=_actionsDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)performActionWithSender:(id)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(UIAlertController *)alertController;
-(CNContactActionsController *)actionsController;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 actionDataSource:(id)arg3 ;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(CNUIUserActionListDataSource *)actionsDataSource;
-(void)setActionsDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)presentDisambiguationAlertWithSender:(id)arg1 ;
@end

