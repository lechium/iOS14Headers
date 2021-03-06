/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXDuetEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ATXScreenLockStateDuetEvent : ATXDuetEvent <NSSecureCoding> {

	long long _screenLockState;

}

@property (nonatomic,readonly) long long screenLockState;              //@synthesize screenLockState=_screenLockState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)identifier;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCurrentContextStoreValues;
-(id)initWithScreenLockState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(long long)screenLockState;
-(id)initWithDKEvent:(id)arg1 ;
@end

