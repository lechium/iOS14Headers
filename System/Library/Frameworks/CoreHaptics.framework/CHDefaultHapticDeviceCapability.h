/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHHapticDeviceCapability.h>

@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability> {

	BOOL _supports3rdPartyHaptics;

}

@property (readonly) unsigned long long maximumNumberOfHapticChannels; 
@property (readonly) unsigned long long maximumNumberOfAudioChannels; 
@property (readonly) BOOL supportsHaptics; 
@property (readonly) BOOL supportsAudio; 
-(id)initPrivate;
-(BOOL)supportsAudio;
-(id)init;
-(float)minimumValueForEventParameter:(id)arg1 ;
-(float)maximumValueForEventParameter:(id)arg1 ;
-(float)minimumValueForDynamicParameter:(id)arg1 ;
-(float)defaultValueForEventParameter:(id)arg1 eventType:(id)arg2 ;
-(float)maximumValueForDynamicParameter:(id)arg1 ;
-(unsigned long long)maximumNumberOfHapticChannels;
-(float)defaultValueForDynamicParameter:(id)arg1 ;
-(id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsHaptics;
-(id)attributesForDynamicParameter:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maximumNumberOfAudioChannels;
@end

