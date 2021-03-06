/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FTSpeechTranslationResponseDelegate.h>
#import <libobjc.A.dylib/_LTSpeechCompressorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, _LTSpeechTranslationDelegate;
@class FTSpeechTranslationStreamingContext, _LTTranslationContext, _LTLanguageDetectionResult, NSMutableDictionary, NSMutableArray, _LTSpeechCompressor, NSObject, _LTTextToSpeechCache, NSString;

@interface _LTOspreySpeechTranslationSession : NSObject <FTSpeechTranslationResponseDelegate, _LTSpeechCompressorDelegate> {

	FTSpeechTranslationStreamingContext* _streamContext;
	_LTTranslationContext* _context;
	BOOL _didEndpointSpeech;
	_LTLanguageDetectionResult* _lidResult;
	NSMutableDictionary* _finalASRResults;
	NSMutableArray* _mtResults;
	NSMutableArray* _confirmedTranslations;
	_LTSpeechCompressor* _speechCompressor;
	unsigned long long _audioPacketCount;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_source> _serverTimer;
	double _initialOnlineTimeout;
	double _onlineTimeout;
	double _endpointTimeout;
	_LTTextToSpeechCache* _ttsCache;
	/*^block*/id _completionBlock;
	id<_LTSpeechTranslationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double initialOnlineTimeout;                                   //@synthesize initialOnlineTimeout=_initialOnlineTimeout - In the implementation block
@property (assign,nonatomic) double onlineTimeout;                                          //@synthesize onlineTimeout=_onlineTimeout - In the implementation block
@property (assign,nonatomic) double endpointTimeout;                                        //@synthesize endpointTimeout=_endpointTimeout - In the implementation block
@property (nonatomic,retain) _LTTextToSpeechCache * ttsCache;                               //@synthesize ttsCache=_ttsCache - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionBlock:(id)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(void)translationDidFinishWithError:(id)arg1 ;
-(void)endpoint;
-(void)updateServerTimeout:(double)arg1 ;
-(id)_primaryLanguageRecognized;
-(void)confirmDataIfNeeded;
-(id)_translationForLocale:(id)arg1 ;
-(void)_handlePartialRecognitionResponse:(id)arg1 ;
-(void)_handleFinalRecognitionResponse:(id)arg1 ;
-(void)_handleTTSResponse:(id)arg1 ;
-(void)_handleAudioLimitExceededResponse:(id)arg1 ;
-(void)_handleTranslationResponse:(id)arg1 ;
-(void)_handleFinalBlazarResponse:(id)arg1 ;
-(void)_handleServerEndpointFeatures:(id)arg1 ;
-(void)streamDidReceiveSpeechTranslationStreamingResponse:(id)arg1 ;
-(void)streamFailVerifySpeechTranslationStreamingResponse:(id)arg1 ;
-(double)initialOnlineTimeout;
-(void)setInitialOnlineTimeout:(double)arg1 ;
-(double)onlineTimeout;
-(void)setOnlineTimeout:(double)arg1 ;
-(double)endpointTimeout;
-(void)setEndpointTimeout:(double)arg1 ;
-(void)serverTimeoutFired;
-(void)startServerTimeoutTimer;
-(void)cancelServerTimeout;
-(void)sendAudioData:(id)arg1 ;
-(id)initWithService:(id)arg1 context:(id)arg2 text:(id)arg3 delegate:(id)arg4 ;
-(void)setLanguagesRecognized:(id)arg1 ;
-(void)sendEndAudio;
-(id)initWithService:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)setTtsCache:(_LTTextToSpeechCache *)arg1 ;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(void)initCommon;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(_LTTextToSpeechCache *)ttsCache;
-(void)didCompressPackets:(id)arg1 totalPacketCount:(unsigned long long)arg2 ;
@end

