/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCECellTractRef : NSObject <NSCopying> {

	TSUCellTractRef* _cppCellTractRef;

}

@property (assign,nonatomic) BOOL spansAllColumns; 
@property (assign,nonatomic) BOOL spansAllRows; 
@property (assign,nonatomic) BOOL preserveRectangular; 
@property (assign,nonatomic) BOOL mixedColumnStartedWithPreserve; 
@property (assign,nonatomic) BOOL mixedRowStartedWithPreserve; 
@property (assign,nonatomic) TSUCellTractRef* cppCellTractRef;                 //@synthesize cppCellTractRef=_cppCellTractRef - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> tableUID; 
@property (assign,nonatomic) TSUPreserveFlags preserveFlags; 
+(id)cellTractRefWithUidTractList:(id)arg1 onTable:(const UUIDData<TSP::UUIDData>*)arg2 preserveFlags:(TSUPreserveFlags)arg3 rewriteContext:(TSCEFormulaRewriteContext*)arg4 ;
-(const TSUIndexSet*)rows;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRows:(const TSUIndexSet*)arg1 ;
-(void)setTopLeft:(const TSUCellCoord*)arg1 ;
-(void)setBottomRight:(const TSUCellCoord*)arg1 ;
-(id)debugDescription;
-(TSUCellCoord)topLeft;
-(void)addColumn:(unsigned short)arg1 ;
-(void)setColumns:(const TSUIndexSet*)arg1 ;
-(unsigned)numRows;
-(BOOL)transpose;
-(BOOL)isEqual:(id)arg1 ;
-(void)addRow:(unsigned)arg1 ;
-(void)addColumns:(const TSUIndexSet*)arg1 ;
-(const TSUIndexSet*)columns;
-(BOOL)isValid;
-(TSUCellCoord)bottomRight;
-(unsigned long long)hash;
-(id)description;
-(UUIDData<TSP::UUIDData>)tableUID;
-(id)initWithRangeRef:(const TSCERangeRef*)arg1 ;
-(void)addRowRange:(const TSUIndexRange*)arg1 ;
-(void)addColumnRange:(const TSUIndexRange*)arg1 ;
-(BOOL)spansAllRows;
-(TSUCellTractRef*)cppCellTractRef;
-(id)initWithColumns:(const TSUIndexSet*)arg1 rows:(const TSUIndexSet*)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(BOOL)spansAllColumns;
-(unsigned)numColumns;
-(TSCERangeCoordinate)boundingRange;
-(BOOL)isSingleCell;
-(TSCERangeRef)boundingRangeRef;
-(BOOL)isRectangularRange;
-(void)foreachCellRect:(/*^block*/id)arg1 ;
-(id)initWithCppCellTractRef:(const TSUCellTractRef*)arg1 ;
-(void)removeColumnRange:(const TSUIndexRange*)arg1 ;
-(void)removeRowRange:(const TSUIndexRange*)arg1 ;
-(void)setTableUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)setSpansAllRows:(BOOL)arg1 ;
-(void)setPreserveFlags:(TSUPreserveFlags)arg1 ;
-(void)foreachRangeRef:(/*^block*/id)arg1 ;
-(TSUPreserveFlags)preserveFlags;
-(void)setSpansAllColumns:(BOOL)arg1 ;
-(BOOL)preserveRectangular;
-(void)setPreserveRectangular:(BOOL)arg1 ;
-(BOOL)insertRowGapsAtIndexes:(id)arg1 ;
-(BOOL)insertColumnGapsAtIndexes:(id)arg1 ;
-(void)addRows:(const TSUIndexSet*)arg1 ;
-(id)fillInRowGapsUsingIndexes:(id)arg1 ;
-(id)fillInColumnGapsUsingIndexes:(id)arg1 ;
-(id)edgeExpandUsingIndexes:(id)arg1 forRows:(BOOL)arg2 ;
-(BOOL)edgeExpandUsingMovingUids:(id)arg1 tractList:(id)arg2 ;
-(BOOL)edgeExpandTractUsingIncludeUidTract:(id)arg1 resolver:(id)arg2 forRows:(BOOL)arg3 isInverse:(BOOL)arg4 ;
-(BOOL)isSingleCellOrSpanningRange;
-(BOOL)hasTableUID;
-(id)initWithCellRefVector:(const vector<TSCECellRef, std::__1::allocator<TSCECellRef> >*)arg1 ;
-(void)adjustIndexesBy:(const TSUColumnRowOffset*)arg1 ;
-(void)foreachAnyRef:(/*^block*/id)arg1 ;
-(void)setPreserveFlagsOnSubrange:(TSCERangeRef*)arg1 ;
-(id)collapseOutRowIndexes:(id)arg1 ;
-(id)collapseOutColumnIndexes:(id)arg1 ;
-(void)setMixedColumnStartedWithPreserve:(BOOL)arg1 ;
-(void)setMixedRowStartedWithPreserve:(BOOL)arg1 ;
-(id)initWithTopLeft:(const TSUCellCoord*)arg1 bottomRight:(const TSUCellCoord*)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(id)expandUsingIndexes:(id)arg1 forRows:(BOOL)arg2 ;
-(id)initWithTopLeft:(const TSUCellCoord*)arg1 bottomRight:(const TSUCellCoord*)arg2 ;
-(BOOL)mixedColumnStartedWithPreserve;
-(BOOL)mixedRowStartedWithPreserve;
-(BOOL)isPreservedColumn:(unsigned short)arg1 preferStart:(BOOL)arg2 ;
-(BOOL)isPreservedRow:(unsigned)arg1 preferStart:(BOOL)arg2 ;
-(TSUPreserveFlags)preserveFlagsForCoord:(const TSUCellCoord*)arg1 preferStart:(BOOL)arg2 ;
-(void)removeColumns:(const TSUIndexSet*)arg1 ;
-(void)removeRows:(const TSUIndexSet*)arg1 ;
-(UUIDRect<TSP::UUIDRect>*)uidTractWithCalcEngine:(id)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)intersectWithCellRect:(const TSUCellRect*)arg1 ;
-(void)intersectWithCellRectIgnoringSpanning:(const TSUCellRect*)arg1 ;
-(TSUCellCoord)coordAtColumnOffset:(unsigned)arg1 rowOffset:(unsigned)arg2 ;
-(void)setCppCellTractRef:(TSUCellTractRef*)arg1 ;
@end

