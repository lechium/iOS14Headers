/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLocale, NSString;

@interface PKTextInputLanguageSpec : NSObject {

	long long __currentLanguage;
	NSLocale* __locale;

}

@property (nonatomic,readonly) long long _currentLanguage;                         //@synthesize _currentLanguage=__currentLanguage - In the implementation block
@property (nonatomic,readonly) NSLocale * _locale;                                 //@synthesize _locale=__locale - In the implementation block
@property (nonatomic,readonly) long long uncommittedTokenColumnCount; 
@property (nonatomic,readonly) double strokeFadeOutDuration; 
@property (nonatomic,readonly) double standardCommitDelay; 
@property (nonatomic,readonly) double singleCharacterCommitDelay; 
@property (nonatomic,readonly) NSString * debugLocaleDescription; 
-(NSLocale *)_locale;
-(id)initWithLocale:(id)arg1 ;
-(long long)_currentLanguage;
-(double)singleCharacterCommitDelay;
-(void)configureLocaleForRecognitionManager:(id)arg1 ;
-(long long)uncommittedTokenColumnCount;
-(double)strokeFadeOutDuration;
-(double)standardCommitDelay;
-(NSString *)debugLocaleDescription;
@end
