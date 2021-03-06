/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject {

	unsigned long long _displayOption;
	NSString* _localizedDisplayName;

}

@property (nonatomic,readonly) unsigned long long displayOption;                  //@synthesize displayOption=_displayOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(void)_buildMapIfNeeded;
+(id)popoverDisplayInformationForPerSitePreference:(id)arg1 ;
-(unsigned long long)displayOption;
-(id)_initWithDisplayOption:(unsigned long long)arg1 localizedDisplayName:(id)arg2 ;
-(NSString *)localizedDisplayName;
@end

