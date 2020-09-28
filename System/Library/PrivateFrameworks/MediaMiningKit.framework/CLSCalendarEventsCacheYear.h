/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject {

	long long _year;
	NSMutableSet* _months;

}

@property (assign,nonatomic) long long year;                       //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) NSMutableSet * months;              //@synthesize months=_months - In the implementation block
-(NSMutableSet *)months;
-(id)debugDescription;
-(long long)year;
-(BOOL)isEqual:(id)arg1 ;
-(void)setYear:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithYear:(long long)arg1 ;
@end
