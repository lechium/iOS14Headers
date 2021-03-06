/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface CNSharingProfileLogger : NSObject {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
+(id)log;
-(NSObject*<OS_os_log>)log;
-(id)init;
-(void)logOnboardingAddingContact;
-(void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1 ;
-(void)logOnboardingSavingContact:(id)arg1 ;
-(void)logOnboardingSuccessSavingMeCardImageToRecents;
-(void)logOnboardingReturningDefaultMonogram;
-(void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1 ;
-(void)logOnboardingUpdatingContactWithIdentifier:(id)arg1 ;
-(void)logSettingsSavingContact:(id)arg1 ;
-(void)logOnboardingErrorSavingContactWithDescription:(id)arg1 ;
-(void)logOnboardingSettingMeContact;
-(void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1 ;
-(void)logOnboardingSuccessSavingContact;
-(void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1 ;
-(void)logOnboardingReturningSharingResultWithDescription:(id)arg1 ;
-(void)logOnboardingReturningEmptyImage;
-(void)logSettingsErrorSavingContactWithDescription:(id)arg1 ;
-(void)logSettingsSettingMeContact;
-(void)logSettingsErrorSettingMeContactWithDescription:(id)arg1 ;
-(void)logSettingsSuccessSavingContact;
-(void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)logSettingsReturningSharingResultWithDescription:(id)arg1 ;
-(void)logSettingsReturningEmptyImage;
-(void)logSettingsReturningDefaultMonogram;
-(void)logSettingsReturningEmptyImageForNoChange;
@end

