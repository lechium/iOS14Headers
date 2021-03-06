/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@interface CMGenericWorkout : CMWorkout {

	unsigned long long fWorkoutLabel;

}

@property (nonatomic,readonly) unsigned long long workoutLabel; 
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)genericWorkoutInstance:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)workoutLabel;
-(id)initWithSessionId:(id)arg1 workoutLabel:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

