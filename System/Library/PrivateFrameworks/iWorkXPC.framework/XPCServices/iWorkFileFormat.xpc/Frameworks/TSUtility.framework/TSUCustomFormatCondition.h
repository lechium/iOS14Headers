/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSUCustomFormatData;

@interface TSUCustomFormatCondition : NSObject <NSCopying> {

	int _conditionType;
	double _conditionValue;
	TSUCustomFormatData* _data;

}

@property (nonatomic,readonly) int conditionType;                       //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,readonly) double conditionValue;                   //@synthesize conditionValue=_conditionValue - In the implementation block
@property (nonatomic,readonly) TSUCustomFormatData * data;              //@synthesize data=_data - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUCustomFormatData *)data;
-(int)conditionType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)conditionValue;
-(id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
@end

