/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController {

	/*^block*/id _sexUpdateHandler;

}

@property (nonatomic,copy) id sexUpdateHandler;              //@synthesize sexUpdateHandler=_sexUpdateHandler - In the implementation block
-(void)setBiologicalSex:(long long)arg1 ;
-(void)forceUpdate;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(long long)_biologicalSexForRow:(long long)arg1 ;
-(void)_updateWithBiologicalSex:(long long)arg1 ;
-(id)sexUpdateHandler;
-(void)setSexUpdateHandler:(id)arg1 ;
@end

