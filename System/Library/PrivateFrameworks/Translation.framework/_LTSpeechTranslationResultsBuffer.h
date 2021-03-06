/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>

@protocol _LTSpeechTranslationDelegate;
@class NSMutableDictionary, _LTTranslationResult, NSError, NSString;

@interface _LTSpeechTranslationResultsBuffer : NSObject <_LTSpeechTranslationDelegate> {

	BOOL _isBuffering;
	NSMutableDictionary* _lastASRResults;
	_LTTranslationResult* _translationResult;
	BOOL _didFinish;
	NSError* _error;
	id<_LTSpeechTranslationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)speechRecognitionResult:(id)arg1 ;
-(void)translatorDidTranslate:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg1 ;
-(void)stopBuffering;
-(id)init;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(BOOL)hasResults;
-(BOOL)hasFailed;
@end

