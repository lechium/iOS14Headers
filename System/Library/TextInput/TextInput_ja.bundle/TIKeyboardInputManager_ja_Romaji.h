/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInput_ja/TIKeyboardInputManager_ja.h>

@class NSMutableArray, NSString, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {

	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;
	TIMathSymbolPunctuationController* _mathSymbolPunctuationController;

}
+(Class)wordSearchClass;
-(BOOL)usesCandidateSelection;
-(void)updateState;
-(void)dealloc;
-(void)loadDictionaries;
-(id)inputString;
-(void)clearInput;
-(unsigned)inputIndex;
-(BOOL)shouldFixupIncompleteRomaji;
-(unsigned)inputCount;
-(id)wordCharacters;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(NSRange)analysisStringRange;
-(id)validCharacterSetForAutocorrection;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)remainingInput;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(id)liveConversionTextInputManager;
-(id)transliterate:(id)arg1 ;
-(unsigned long long)actualInternalInputIndex;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
@end

