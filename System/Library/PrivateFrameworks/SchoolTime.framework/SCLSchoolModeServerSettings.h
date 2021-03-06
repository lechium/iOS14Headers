/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCLScheduleSettings, SCLState;

@interface SCLSchoolModeServerSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _loaded;
	SCLScheduleSettings* _scheduleSettings;
	SCLState* _state;

}

@property (nonatomic,copy) SCLScheduleSettings * scheduleSettings;              //@synthesize scheduleSettings=_scheduleSettings - In the implementation block
@property (nonatomic,copy) SCLState * state;                                    //@synthesize state=_state - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                       //@synthesize loaded=_loaded - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isLoaded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setState:(SCLState *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCLState *)state;
-(void)setLoaded:(BOOL)arg1 ;
-(SCLScheduleSettings *)scheduleSettings;
-(void)setScheduleSettings:(SCLScheduleSettings *)arg1 ;
@end

