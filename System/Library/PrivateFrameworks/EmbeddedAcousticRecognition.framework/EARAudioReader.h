/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface EARAudioReader : NSObject {

	NSURL* _fileURL;
	unsigned long long _sampleRate;

}
-(id)_opx_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_avf_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_opx_enumeratePacketsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 sampleRate:(unsigned long long)arg2 ;
-(id)enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
@end
