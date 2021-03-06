/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/NCNotificationManagementContentProvider.h>
#import <libobjc.A.dylib/NCNotificationManagementSuggestionContentProviding.h>

@protocol NCNotificationManagementSuggestionDelegate;
@class NSString;

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCNotificationManagementSuggestionContentProviding> {

	BOOL _auxiliaryOptionsVisible;
	NSString* _optionsSummaryText;
	unsigned long long _numberOfOptionButtons;
	id<NCNotificationManagementSuggestionDelegate> _suggestionDelegate;

}

@property (assign,nonatomic,__weak) id<NCNotificationManagementSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (nonatomic,copy) NSString * optionsSummaryText;                                                           //@synthesize optionsSummaryText=_optionsSummaryText - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfOptionButtons;                                              //@synthesize numberOfOptionButtons=_numberOfOptionButtons - In the implementation block
@property (nonatomic,copy,readonly) NSString * optionsSummaryTitle; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible;                                                          //@synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSuggestionDelegate:(id<NCNotificationManagementSuggestionDelegate>)arg1 ;
-(id<NCNotificationManagementSuggestionDelegate>)suggestionDelegate;
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)setOptionsSummaryText:(NSString *)arg1 ;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1 ;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1 ;
-(void)configureOptionButtons:(id)arg1 ;
-(void)logSuggestionResponse:(long long)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 ;
@end

