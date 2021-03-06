/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface _EARAudioAnalytics : NSObject <NSCopying> {

	NSDictionary* _speechRecognitionFeatures;
	NSDictionary* _acousticFeatures;

}

@property (nonatomic,copy,readonly) NSDictionary * speechRecognitionFeatures;              //@synthesize speechRecognitionFeatures=_speechRecognitionFeatures - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * acousticFeatures;                       //@synthesize acousticFeatures=_acousticFeatures - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)speechRecognitionFeatures;
-(NSDictionary *)acousticFeatures;
-(id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 ;
@end

