/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class NSDictionary;

@interface TSCEWarning : NSObject {

	BOOL _ignored;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL ignored;                         //@synthesize ignored=_ignored - In the implementation block
+(BOOL)setHasVisibleWarnings:(id)arg1 ;
+(void)reportNonNumericCellWarningInContext:(TSCEWarningReportingContext*)arg1 reference:(id)arg2 ;
+(void)reportMonthOutOfRangeWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportDayOutOfRangeWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportBoolToNumberConversionWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportMismatchedSizesWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportLossOfUnitsWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportAutomaticUnitConversionWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportComparisonWarningInContext:(TSCEWarningReportingContext*)arg1 leftType:(int)arg2 rightType:(int)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isIgnored;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(BOOL)ignored;
-(id)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setIgnored:(BOOL)arg1 ;
-(id)description;
-(id)displayStringWithCalculationEngine:(id)arg1 forTable:(const UUIDData<TSP::UUIDData>*)arg2 andCellID:(TSUCellCoord)arg3 ;
-(id)copyByRemappingEntityIDs:(id)arg1 ;
@end
