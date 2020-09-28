/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCEFormulaReplacing <NSObject>
@required
-(void)removeAllFormulasFromOwner:(const UUIDData<TSP::UUIDData>*)arg1;
-(void)removeFormulaAt:(const TSUCellCoord*)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2;
-(id)calcEngine;
-(void)replaceFormula:(id)arg1 atCellCoord:(const TSUCellCoord*)arg2 inOwner:(const UUIDData<TSP::UUIDData>*)arg3;
-(void)replaceFormula:(id)arg1 atCellCoord:(const TSUCellCoord*)arg2 inOwner:(const UUIDData<TSP::UUIDData>*)arg3 replaceOptions:(TSCEReplaceFormulaOptions)arg4;
-(void)removeFormulasAt:(const TSCECellRefSet*)arg1;
-(void)resetFormulaAt:(const TSCECellRef*)arg1;
-(void)markCellRefAsDirty:(const TSCECellRef*)arg1;
-(void)markRangeRefAsDirty:(const TSCERangeRef*)arg1;

@end
