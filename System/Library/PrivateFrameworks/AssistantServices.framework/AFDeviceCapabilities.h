/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _serializedBackingStore;
	long long _voiceTriggerEnabled;

}

@property (nonatomic,readonly) long long voiceTriggerEnabled;              //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVoiceTriggerEnabled:(long long)arg1 ;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)serializedBackingStore;
-(unsigned long long)hash;
-(long long)voiceTriggerEnabled;
-(id)description;
@end
