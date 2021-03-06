/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSTables/TSCEHeaderNameProtocol.h>
#import <TSTables/TSTCellWillChangeProtocol.h>
#import <TSTables/TSCEFormulaOwning.h>

@protocol OS_dispatch_queue;
@class TSCECalculationEngine, NSObject, TSCENameTrie, NSMutableSet, NSCharacterSet, NSString;

@interface TSTHeaderNameMgr : TSPObject <TSCEHeaderNameProtocol, TSTCellWillChangeProtocol, TSCEFormulaOwning> {

	TSCECalculationEngine* _calcEngine;
	TSCECalculationEngine* _weakCalcEngine;
	NSObject*<OS_dispatch_queue> _headerNameMgrQueue;
	UUIDData<TSP::UUIDData> _ownerUID;
	TSUCellCoord _nextPrecedentCoord;
	TSUCellCoord _allHeaderPerTablesPrecedent;
	TSUCellCoord _needsTileSplittingPrecedent;
	vector<TSTHeaderNameMgrTile *, std::__1::allocator<TSTHeaderNameMgrTile *> >* _nameFragmentTiles;
	unordered_map<TSUCellCoord, TSTHeaderNameMgrEntry *, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTHeaderNameMgrEntry *> > >* _fragPrecedentToEntry;
	unordered_map<TSCEUidCellRef, TSCECellCoordSet, std::__1::hash<TSCEUidCellRef>, std::__1::equal_to<TSCEUidCellRef>, std::__1::allocator<std::__1::pair<const TSCEUidCellRef, TSCECellCoordSet> > >* _fragPrecedentsUsedByCellRef;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, TSTHeaderPerTable *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSTHeaderPerTable *> > >* _perTableInfo;
	unordered_map<TSUCellCoord, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSU::UUIDData<TSP::UUIDData> > > >* _headerPerTablePrecedentToTableUID;
	TSCENameTrie* _namePrefixIndex;
	NSMutableSet* _tilesToConsiderSplitting;
	BOOL _isClosing;
	UUIDData<TSP::UUIDData> _nrm_ownerUID;
	NSCharacterSet* _whitespaceToBreakAt;

}

@property (nonatomic,readonly) TSCECalculationEngine * calcEngine; 
@property (nonatomic,readonly) BOOL isClosing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfTiles;
-(void)setup;
-(void)dealloc;
-(BOOL)isClosing;
-(id)initWithContext:(id)arg1 ;
-(NSString *)description;
-(long long)evaluationMode;
-(void)willClose;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(UUIDData<TSP::UUIDData>)formulaOwnerUID;
-(UUIDData<TSP::UUIDData>)ownerUID;
-(TSCECalculationEngine *)calcEngine;
-(unsigned short)ownerKind;
-(id)linkedResolver;
-(void)writeResultsForCalcEngine:(id)arg1 ;
-(void)invalidateForCalcEngine:(id)arg1 ;
-(TSCERecalculationState)evaluateFormulaAt:(TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(TSCERecalculationState)arg3 ;
-(TSCERangeRef)baseHeaderColumnsForCell:(const TSCECellRef*)arg1 ;
-(TSCERangeRef)baseHeaderRowsForCell:(const TSCECellRef*)arg1 ;
-(TSCECellRefSet*)nameFragmentPrecedentsForReferenceString:(id)arg1 ;
-(int)registerWithCalcEngine:(id)arg1 ;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(void)beginTrackingNamesInTable:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)endTrackingNamesInTable:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)updateTrackedHeaders:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)unregisterFromCalcEngine;
-(id)initWithContext:(id)arg1 calcEngine:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)NRM_formulaOwnerUID;
-(void)updateTrackedHeadersForDocumentLocaleChange:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)setNRM_formulaOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(TSCECellRefSet*)headerCellsMatching:(id)arg1 limitToTable:(const UUIDData<TSP::UUIDData>*)arg2 includePrefixes:(BOOL)arg3 ;
-(id)anyRefForRangeForHeaderCell:(const TSCECellRef*)arg1 usePreserveFlags:(BOOL)arg2 ;
-(TSCERangeRef)spanningRangeForHeaderCell:(const TSCECellRef*)arg1 ;
-(id)subsetForReferenceName:(id)arg1 limitToTable:(const UUIDData<TSP::UUIDData>*)arg2 includePrefixes:(BOOL)arg3 ;
-(TSCECellRefSet*)allHeaderCellRefsLimitedToTable:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)stringInHeaderCell:(const TSCECellRef*)arg1 ;
-(void)willApplyCell:(id)arg1 baseCellCoord:(TSUModelCellCoord)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)willApplyBaseCellMap:(id)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)updateTableUIDFrom:(const UUIDData<TSP::UUIDData>*)arg1 toTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(BOOL)referenceNameIsUnique:(id)arg1 forReference:(const RefTypeHolder<TSCERangeRef, 2>*)arg2 contextTable:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)willApplyConcurrentCellMap:(id)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)willRemoveRows:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)unpackEntryAfterUnarchive:(TSTHeaderNameMgrEntry*)arg1 ;
-(void)addChangedTile:(id)arg1 ;
-(TSUCellCoord)getNextPrecedentCoord:(BOOL)arg1 ;
-(void)setEntry:(TSTHeaderNameMgrEntry*)arg1 forPrecedentCoord:(const TSUCellCoord*)arg2 ;
-(TSTHeaderNameMgrEntry*)fragmentEntryForString:(id)arg1 createIfMissing:(BOOL)arg2 ;
-(id)namePrefixIndex;
-(vector<NSString *, std::__1::allocator<NSString *> >*)wordFragmentsFromString:(id)arg1 savePreserveFlags:(BOOL)arg2 ;
-(void)usedPrecedentCoord:(const TSUCellCoord*)arg1 ;
-(void)waitForQueueToDrain;
-(TSTHeaderPerTable*)perTableEntryForTable:(const UUIDData<TSP::UUIDData>*)arg1 createIfMissing:(BOOL)arg2 ;
-(void)updateTrackedHeaders:(const UUIDData<TSP::UUIDData>*)arg1 checkForEmptyHeaders:(BOOL)arg2 ;
-(TSTHeaderNameMgrEntry*)fragmentEntryForNameFragmentPrecedent:(const TSUCellCoord*)arg1 ;
-(id)findTileForString:(id)arg1 findClosest:(BOOL)arg2 ;
-(id)findTileForString:(id)arg1 findClosest:(BOOL)arg2 foundAtOffset:(unsigned long long*)arg3 ;
-(void)handleFullTile:(id)arg1 ;
-(void)p_updateWithWordFragments:(const vector<NSString *, std::__1::allocator<NSString *> >*)arg1 atCellCoord:(const UUIDCoord<TSP::UUIDCoord>*)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)p_updateText:(id)arg1 atCellCoord:(const UUIDCoord<TSP::UUIDCoord>*)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)updateText:(id)arg1 atCellCoord:(const UUIDCoord<TSP::UUIDCoord>*)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)p_willApplyCell:(id)arg1 baseCellCoord:(TSUModelCellCoord)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(id)tileForEntry:(TSTHeaderNameMgrEntry*)arg1 ;
-(void)updateWithIndexingChunks:(id)arg1 ;
-(void)p_processWorkForTable:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)headerNameMgrQueue;
-(void)clearTextAtCellCoord:(const UUIDCoord<TSP::UUIDCoord>*)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
@end

