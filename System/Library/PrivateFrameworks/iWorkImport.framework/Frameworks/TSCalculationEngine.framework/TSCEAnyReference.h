/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class NSString, TSCEWrappedRangeRef;

@interface TSCEAnyReference : NSObject {

	TSCEAnyRef _ref;
	NSString* _overrideText;
	NSString* _overrideTextAsTyped;
	struct {
		unsigned char _flags;
	}  _preserveFlags;
	BOOL _wasConstructedViaNames;

}

@property (copy) NSString * overrideText;                                         //@synthesize overrideText=_overrideText - In the implementation block
@property (copy) NSString * overrideTextAsTyped;                                  //@synthesize overrideTextAsTyped=_overrideTextAsTyped - In the implementation block
@property (assign,nonatomic) BOOL wasConstructedViaNames;                         //@synthesize wasConstructedViaNames=_wasConstructedViaNames - In the implementation block
@property (nonatomic,readonly) TSCEAnyRef anyRef; 
@property (assign,nonatomic) TSUPreserveFlags preserveFlags;                      //@synthesize preserveFlags=_preserveFlags - In the implementation block
@property (nonatomic,readonly) TSCERangeRef rangeRef; 
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID; 
@property (nonatomic,readonly) TSCEWrappedRangeRef * rangeReference; 
-(void)setOverrideText:(NSString *)arg1 ;
-(NSString *)overrideText;
-(TSCEAnyRef)anyRef;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UUIDData<TSP::UUIDData>)tableUID;
-(id)initWithRangeRef:(const TSCERangeRef*)arg1 ;
-(TSCERangeRef)rangeRef;
-(TSCEWrappedRangeRef *)rangeReference;
-(void)setPreserveFlags:(TSUPreserveFlags)arg1 ;
-(id)referenceTextWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(TSUPreserveFlags)preserveFlags;
-(id)initWithCellRef:(const TSCECellRef*)arg1 ;
-(id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(BOOL)arg2 ;
-(id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 preserveFlags:(TSUPreserveFlags)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 preserveFlags:(TSUPreserveFlags)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(NSString *)overrideTextAsTyped;
-(void)setOverrideTextAsTyped:(NSString *)arg1 ;
-(BOOL)wasConstructedViaNames;
-(void)setWasConstructedViaNames:(BOOL)arg1 ;
@end
