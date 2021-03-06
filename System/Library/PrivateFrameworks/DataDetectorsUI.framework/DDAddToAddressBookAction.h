/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDAddressAction.h>

@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (nonatomic,retain) DDRemoteActionViewController * viewController; 
+(BOOL)actionAvailableForContact:(id)arg1 ;
-(void)invalidate;
-(id)contact;
-(id)localizedName;
-(int)interactionType;
-(id)notificationTitle;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

