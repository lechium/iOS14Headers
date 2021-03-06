/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PSUICarrierSpaceUsageController : PSListController
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)specifiers;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(id)usageSections;
-(id)usageCategories;
-(BOOL)hasMultipleDevicesOfTheSameType;
-(BOOL)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
-(BOOL)shouldShowPlanSection:(id)arg1 ;
-(BOOL)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1 ;
-(id)deviceTypeSectionLabelForAccountMetrics:(id)arg1 ;
-(id)planCategorySectionLabelForPlanMetrics:(id)arg1 ;
-(BOOL)shouldShowData:(id)arg1 ;
-(id)usageGraphSpecifierForSection:(id)arg1 ;
-(BOOL)shouldShowOnlyRemainingData:(id)arg1 ;
-(id)dataUsageDescription:(id)arg1 ;
-(BOOL)shouldShowCalls:(id)arg1 ;
-(BOOL)shouldShowOnlyRemainingCalls:(id)arg1 ;
-(id)callsDescription:(id)arg1 ;
-(BOOL)shouldShowMessages:(id)arg1 ;
-(BOOL)shouldShowOnlyRemainingMessages:(id)arg1 ;
-(id)messagesDescription:(id)arg1 ;
-(BOOL)shouldShowRemainingCredit:(id)arg1 ;
-(id)remainingCreditDescription:(id)arg1 ;
-(id)barGraphColors;
@end

