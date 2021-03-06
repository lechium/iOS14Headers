/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSData, CLKComplicationDescriptor, NSNumber;

@interface NTKDSyncMessage : NSObject <SYChange, NSSecureCoding> {

	NSUUID* _uuid;
	long long _messageType;
	NSUUID* _faceUUID;
	NSData* _payloadData;
	double _progress;
	NSString* _complicationClientID;
	CLKComplicationDescriptor* _complicationDescriptor;
	NSNumber* _complicationFamily;

}

@property (assign,nonatomic) long long messageType;                                         //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) NSUUID * faceUUID;                                             //@synthesize faceUUID=_faceUUID - In the implementation block
@property (nonatomic,copy) NSData * payloadData;                                            //@synthesize payloadData=_payloadData - In the implementation block
@property (assign,nonatomic) double progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * complicationClientID;                                 //@synthesize complicationClientID=_complicationClientID - In the implementation block
@property (nonatomic,copy) CLKComplicationDescriptor * complicationDescriptor;              //@synthesize complicationDescriptor=_complicationDescriptor - In the implementation block
@property (nonatomic,copy) NSNumber * complicationFamily;                                   //@synthesize complicationFamily=_complicationFamily - In the implementation block
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)messageOfType:(long long)arg1 ;
+(id)messageOfType:(long long)arg1 withFaceUUID:(id)arg2 ;
+(id)messageOfType:(long long)arg1 withComplicationClientId:(id)arg2 ;
+(id)messageOfType:(long long)arg1 withComplicationCliendId:(id)arg2 descriptor:(id)arg3 family:(id)arg4 ;
-(long long)messageType;
-(void)setMessageType:(long long)arg1 ;
-(NSString *)sequencer;
-(NSUUID *)faceUUID;
-(long long)changeType;
-(void)setPayloadData:(NSData *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)progress;
-(NSString *)objectIdentifier;
-(NSString *)description;
-(NSData *)payloadData;
-(CLKComplicationDescriptor *)complicationDescriptor;
-(void)setFaceUUID:(NSUUID *)arg1 ;
-(void)setComplicationClientID:(NSString *)arg1 ;
-(void)setComplicationDescriptor:(CLKComplicationDescriptor *)arg1 ;
-(void)setComplicationFamily:(NSNumber *)arg1 ;
-(NSString *)complicationClientID;
-(NSNumber *)complicationFamily;
@end

