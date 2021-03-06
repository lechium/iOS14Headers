/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CSAudioZeroCounter : NSObject {

	NSString* _methodToken;
	unsigned _continuousZeroCounter;
	unsigned _zeroCounterWinSz;
	unsigned _zeroCounterWinSzForReport;
	unsigned _maxContinuousZeroCount;
	unsigned _numChannels;
	unsigned _analyzeStep;
	float _sampleRate;
	BOOL _shouldDeinterleaveAudio;

}
-(id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned)arg3 ;
-(void)resetWithSampleRate:(float)arg1 ;
-(void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned)arg2 ;
-(void)stopReportZeroStatistics;
@end

