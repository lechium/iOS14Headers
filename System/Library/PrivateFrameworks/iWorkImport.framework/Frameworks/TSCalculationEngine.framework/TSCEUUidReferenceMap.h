/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@interface TSCEUUidReferenceMap : NSObject {

	unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet> > >* _cellRefsByUuid;
	unordered_map<TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet>, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<std::__1::pair<const TSCEInternalCellReference, TSU::UUIDSet<TSP::UUIDSet> > > >* _uuidsByCellRef;

}
+(id)_stringForInternalCellRef:(const TSCEInternalCellReference*)arg1 ;
-(id)description;
-(void)removeCellRef:(const TSCEInternalCellReference*)arg1 ;
-(void)removeAllCellRefsInOwner:(unsigned short)arg1 ;
-(void)addCellRef:(const TSCEInternalCellReference*)arg1 forUuid:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)removeCellRef:(const TSCEInternalCellReference*)arg1 forUuid:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)getCellRefs:(TSCEReferenceSet*)arg1 referringToUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 ;
-(id)initFromArchive:(const UuidReferenceMapArchive*)arg1 dependencyTracker:(TSCEDependencyTracker*)arg2 ;
-(BOOL)tooManyCellRefsFor31FormatArchive;
-(void)encodeToArchive:(UuidReferenceMapArchive*)arg1 alsoSave31Format:(BOOL)arg2 archiver:(id)arg3 ;
@end
