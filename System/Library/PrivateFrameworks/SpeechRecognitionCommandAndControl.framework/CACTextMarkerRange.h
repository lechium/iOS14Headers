/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class CACTextMarker;

@interface CACTextMarkerRange : NSObject {

	CACTextMarker* _startMarker;
	CACTextMarker* _endMarker;

}

@property (nonatomic,readonly) CACTextMarker * startMarker;              //@synthesize startMarker=_startMarker - In the implementation block
@property (nonatomic,readonly) CACTextMarker * endMarker;                //@synthesize endMarker=_endMarker - In the implementation block
+(id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 ;
+(id)markerRangeWithNSRange:(NSRange)arg1 ;
+(id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 forTextElement:(id)arg3 ;
+(id)markerRangeWithArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)array;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)hash;
-(id)description;
-(NSRange)nsRange;
-(id)initWithStartMarker:(id)arg1 endMarker:(id)arg2 ;
-(CACTextMarker *)startMarker;
-(CACTextMarker *)endMarker;
-(BOOL)containsMarker:(id)arg1 forUIElement:(id)arg2 ;
-(BOOL)containsRange:(id)arg1 forUIElement:(id)arg2 ;
@end
