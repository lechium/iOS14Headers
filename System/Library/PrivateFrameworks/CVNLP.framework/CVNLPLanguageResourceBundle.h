/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CVNLPDecodingLexicons, CVNLPDecodingLanguageModel;

@interface CVNLPLanguageResourceBundle : NSObject {

	CVNLPDecodingLexicons* _lexicons;
	CVNLPDecodingLanguageModel* _characterLanguageModel;
	CVNLPDecodingLanguageModel* _wordLanguageModel;

}

@property (nonatomic,readonly) CVNLPDecodingLexicons * lexicons;                                 //@synthesize lexicons=_lexicons - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * characterLanguageModel;              //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * wordLanguageModel;                   //@synthesize wordLanguageModel=_wordLanguageModel - In the implementation block
-(CVNLPDecodingLexicons *)lexicons;
-(id)packagedLexiconRootCursors;
-(id)initWithLexicons:(id)arg1 characterLanguageModel:(id)arg2 wordLanguageModel:(id)arg3 ;
-(id)packagedLexiconCursorsUsingContext:(id)arg1 ;
-(CVNLPDecodingLanguageModel *)characterLanguageModel;
-(CVNLPDecodingLanguageModel *)wordLanguageModel;
@end

