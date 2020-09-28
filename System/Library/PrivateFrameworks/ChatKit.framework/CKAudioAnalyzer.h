/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/Endpointer.h>

@class NSMutableData, NSDictionary, NSString;

@interface CKAudioAnalyzer : NSObject <Endpointer> {

	BOOL _detectedMusic;
	double _sampleRate;
	double _samplesSeen;
	unsigned _frameRate;
	int _endpointMode;
	double _startWaitTime;
	double _interspeechWaitTime;
	double _endWaitTime;
	NSMutableData* _floatSampleBuffer;
	unsigned long long _framesSeen;
	SCD_Struct_CK25 _frameAnalysisArray[25];
	OpaqueAudioComponentInstanceRef _audioUnitEPVAD;
	NSDictionary* _modelDict;
	unsigned _inMaxSamplesPerBuffer;
	float _speechPaddingFactor;
	float _decoderLatency;
	float _heuristicWindowSec;
	float _heuristicTransitionRatio;

}

@property (assign,nonatomic) unsigned inMaxSamplesPerBuffer;              //@synthesize inMaxSamplesPerBuffer=_inMaxSamplesPerBuffer - In the implementation block
@property (assign,nonatomic) float speechPaddingFactor;                   //@synthesize speechPaddingFactor=_speechPaddingFactor - In the implementation block
@property (assign,nonatomic) float decoderLatency;                        //@synthesize decoderLatency=_decoderLatency - In the implementation block
@property (assign,nonatomic) float heuristicWindowSec;                    //@synthesize heuristicWindowSec=_heuristicWindowSec - In the implementation block
@property (assign,nonatomic) float heuristicTransitionRatio;              //@synthesize heuristicTransitionRatio=_heuristicTransitionRatio - In the implementation block
@property (assign) int endpointMode;                                      //@synthesize endpointMode=_endpointMode - In the implementation block
@property (assign) double startWaitTime;                                  //@synthesize startWaitTime=_startWaitTime - In the implementation block
@property (assign) double interspeechWaitTime;                            //@synthesize interspeechWaitTime=_interspeechWaitTime - In the implementation block
@property (assign) double endWaitTime;                                    //@synthesize endWaitTime=_endWaitTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(void)reset;
-(int)getStatus:(AudioQueueBuffer*)arg1 ;
-(int)endpointMode;
-(double)endWaitTime;
-(void)setEndpointMode:(int)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(void)setEndWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(unsigned)inMaxSamplesPerBuffer;
-(void)setInMaxSamplesPerBuffer:(unsigned)arg1 ;
-(float)speechPaddingFactor;
-(void)setSpeechPaddingFactor:(float)arg1 ;
-(float)decoderLatency;
-(void)setDecoderLatency:(float)arg1 ;
-(float)heuristicWindowSec;
-(void)setHeuristicWindowSec:(float)arg1 ;
-(float)heuristicTransitionRatio;
-(void)setHeuristicTransitionRatio:(float)arg1 ;
-(id)init;
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2 ;
@end
