/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;
@class NSMutableData;

@interface CSKeywordAnalyzerNDEAPI : NSObject {

	void* _ndeObject;
	NSMutableData* _currentBlob;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long activeChannel;                                      //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerNDEAPIScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(unsigned long long)activeChannel;
-(void)reset;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)setDelegate:(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)arg1 ;
-(id)processAudioChunk:(id)arg1 ;
-(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)delegate;
-(id)initWithBlob:(id)arg1 ;
-(id)checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2 ;
-(id)processAudioBytes:(void*)arg1 withNumberOfSamples:(long long)arg2 ;
@end
