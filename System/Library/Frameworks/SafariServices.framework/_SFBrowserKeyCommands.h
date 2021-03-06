/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SFBrowserKeyCommands : NSObject
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(BOOL)arg5 ;
+(id)localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 bundle:(id)arg3 table:(id)arg4 webInterceptable:(BOOL)arg5 ;
+(id)_keyForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(id)browserKeyCommandsForPersona:(unsigned long long)arg1 shouldAddEditingCommands:(BOOL)arg2 ;
+(id)_placeholderKeyCommandForCommand:(id)arg1 ;
+(BOOL)_boolForSelectorString:(id)arg1 modifierString:(id)arg2 bundle:(id)arg3 table:(id)arg4 ;
+(id)_localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 webInterceptable:(BOOL)arg3 ;
+(long long)_modifierFlagsForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(BOOL)arg4 ;
+(void)_setUpKeyCommandsIfNecessaryForPersona:(unsigned long long)arg1 ;
@end

