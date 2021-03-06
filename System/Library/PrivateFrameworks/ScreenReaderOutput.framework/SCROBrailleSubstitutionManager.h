/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLinguisticTagger;

@interface SCROBrailleSubstitutionManager : NSObject {

	NSMutableDictionary* _lookup;
	NSLinguisticTagger* _lingusticTagger;

}
+(id)sharedInstance;
-(id)init;
-(id)brailleSubstitutionForType:(long long)arg1 withLanguage:(id)arg2 ;
-(void)_loadLanguageSubstitutions:(id)arg1 intoDictionary:(id)arg2 ;
-(void)_ensureLanguageDataPresent:(id)arg1 ;
-(id)stringWithBrailleSubstitutions:(id)arg1 withLanguage:(id)arg2 ;
@end

