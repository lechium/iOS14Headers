/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class HUNetworkConfigurationSettingsModuleController, HUNetworkConfigurationSettingsItemManager, NSString;

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController <UITextViewDelegate> {

	HUNetworkConfigurationSettingsModuleController* _networkConfigurationSettingsModuleController;

}

@property (nonatomic,readonly) HUNetworkConfigurationSettingsItemManager * itemManager; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModuleController * networkConfigurationSettingsModuleController;              //@synthesize networkConfigurationSettingsModuleController=_networkConfigurationSettingsModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithNetworkConfigurationGroupItem:(id)arg1 ;
-(void)setNetworkConfigurationSettingsModuleController:(HUNetworkConfigurationSettingsModuleController *)arg1 ;
-(HUNetworkConfigurationSettingsModuleController *)networkConfigurationSettingsModuleController;
-(void)updateNetworkConfigurationSettingsModuleFooter;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)itemManagerDidFinishUpdate:(id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
@end

