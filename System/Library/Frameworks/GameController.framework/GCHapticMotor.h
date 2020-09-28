/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding> {

	int _index;
	float _frequency;
	float _amplitude;
	NSString* _name;
	unsigned long long _features;
	NSMutableArray* _queuedTransients;

}

@property (nonatomic,retain) NSMutableArray * queuedTransients;              //@synthesize queuedTransients=_queuedTransients - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long features;                  //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) float frequency;                                //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) float amplitude;                                //@synthesize amplitude=_amplitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFrequency:(float)arg1 ;
-(unsigned long long)features;
-(float)frequency;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)index;
-(void)setAmplitude:(float)arg1 ;
-(float)amplitude;
-(id)initWithIndex:(int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 frequency:(float)arg4 amplitude:(float)arg5 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 ;
-(void)applyValuesFrom:(id)arg1 ;
-(void)enqueueHapticTransientEvent:(id)arg1 ;
-(void)drainQueuedTransients;
-(NSMutableArray *)queuedTransients;
-(void)setQueuedTransients:(NSMutableArray *)arg1 ;
@end
