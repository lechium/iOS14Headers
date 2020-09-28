/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRemoteDevice;
	NSString* _route;
	NSUUID* _remoteDeviceUID;
	NSString* _remoteDeviceProductIdentifier;

}

@property (nonatomic,copy,readonly) NSString * route;                                      //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteDevice;                                        //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * remoteDeviceUID;                              //@synthesize remoteDeviceUID=_remoteDeviceUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteDeviceProductIdentifier;              //@synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)remoteDeviceUID;
-(id)xpcObject;
-(NSString *)route;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(BOOL)isRemoteDevice;
-(id)description;
-(id)initWithRoute:(id)arg1 isRemoteDevice:(BOOL)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 ;
-(id)initWithAVVCRecordDeviceInfo:(id)arg1 ;
-(NSString *)remoteDeviceProductIdentifier;
@end
