/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject {

	long long _conditionCode;
	NSNumber* _temperature;
	NSNumber* _highTemperature;
	NSNumber* _lowTemperature;

}
+(BOOL)supportsSecureCoding;
-(long long)conditionCode;
-(id)initWithCoder:(id)arg1 ;
-(id)temperature;
-(void)encodeWithCoder:(id)arg1 ;
-(id)highTemperature;
-(id)lowTemperature;
-(id)_initWithConditionCode:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 ;
@end
