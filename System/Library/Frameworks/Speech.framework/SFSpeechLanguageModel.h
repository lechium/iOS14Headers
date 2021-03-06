/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _EARLmData, NSLocale, NSData, NSArray;

@interface SFSpeechLanguageModel : NSObject {

	_EARLmData* _appLmData;
	NSLocale* _locale;
	NSData* _model;
	NSArray* _outOfVocabularyWords;

}

@property (nonatomic,copy,readonly) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSData * model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outOfVocabularyWords;              //@synthesize outOfVocabularyWords=_outOfVocabularyWords - In the implementation block
+(void)initialize;
+(id)supportedLocales;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(NSData *)model;
-(id)init;
-(id)initWithAssetPath:(id)arg1 ;
-(NSArray *)outOfVocabularyWords;
@end

