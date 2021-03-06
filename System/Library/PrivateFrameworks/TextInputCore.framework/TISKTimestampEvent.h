/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKEvent.h>

@interface TISKTimestampEvent : TISKEvent {

	double _timestamp;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)touchDownTimestamp;
-(double)touchUpTimestamp;
-(BOOL)isMissingATouch;
-(id)init:(int)arg1 timestamp:(double)arg2 order:(long long)arg3 ;
@end

