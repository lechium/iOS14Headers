/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioSession/AudioSession-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (nonatomic,readonly) NSArray * channels; 
@property (nonatomic,readonly) NSArray * dataSources; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateArray:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)portName;
-(id)initWithSession:(id)arg1 ;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(BOOL)isHeadphones;
-(void)dealloc;
-(unsigned long long)endpointType;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(BOOL)hasHardwareVoiceCallProcessing;
-(PortDescriptionImpl*)privateGetImplementation;
-(id)privateGetID;
-(NSArray *)dataSources;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(NSArray *)channels;
-(NSString *)UID;
-(unsigned long long)hash;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(NSString *)portType;
-(BOOL)isLiveListenSupported;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(id)description;
@end
