/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXConditionalFormattingRule : NSObject
+(void)readFrom:(xmlNode*)arg1 x14:(BOOL)arg2 edConditionalFormatting:(id)arg3 edReference:(id)arg4 state:(id)arg5 ;
+(int)edRuleTypeFromXmlRuleTypeString:(id)arg1 ;
+(int)edOperatorFromXmlOperatorString:(id)arg1 ;
+(int)edTimePeriodFromXmlTimePeriodString:(id)arg1 ;
+(id)timePeriodEnumMap;
+(id)operatorStringEnumMap;
+(id)conditionalFormattingRuleTypeEnumMap;
@end

