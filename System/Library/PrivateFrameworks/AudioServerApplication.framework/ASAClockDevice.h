/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSArray;

@interface ASAClockDevice : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * deviceUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) unsigned clockDomain; 
@property (getter=isAlive,nonatomic,readonly) BOOL alive; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) double nominalSampleRate; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned inputLatency; 
@property (nonatomic,readonly) unsigned outputLatency; 
@property (nonatomic,readonly) unsigned zeroTimestampPeriod; 
@property (nonatomic,copy,readonly) NSArray * nominalSampleRates; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * controls; 
-(BOOL)isRunning;
-(NSString *)manufacturer;
-(NSString *)deviceUID;
-(NSArray *)controls;
-(unsigned)transportType;
-(unsigned)inputLatency;
-(BOOL)isHidden;
-(unsigned)outputLatency;
-(BOOL)isAlive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(unsigned)clockDomain;
-(double)nominalSampleRate;
-(NSArray *)nominalSampleRates;
-(unsigned)zeroTimestampPeriod;
-(void)setNominalSampleRate:(double)arg1 ;
@end

