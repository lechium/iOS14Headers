/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXMIDIParser : NSObject
-(unsigned short)_channelForStatusByte:(unsigned char)arg1 ;
-(long long)_eventTypeForStatusByte:(unsigned char)arg1 ;
-(id)parse:(const MIDIPacketList*)arg1 error:(id*)arg2 ;
-(unsigned long long)_expectedPacketLengthForEventType:(long long)arg1 ;
@end
