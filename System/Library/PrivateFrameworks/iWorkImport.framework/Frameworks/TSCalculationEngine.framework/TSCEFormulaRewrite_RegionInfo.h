/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class TSCEFormulaRewrite_Uids;

@interface TSCEFormulaRewrite_RegionInfo : NSObject {

	UUIDData<TSP::UUIDData> _tableUID;
	UUIDData<TSP::UUIDData> _condStyleOwnerUID;
	TSCEFormulaRewrite_Uids* _columnUids;
	TSCEFormulaRewrite_Uids* _rowUids;

}

@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID;                       //@synthesize tableUID=_tableUID - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> condStyleOwnerUID;              //@synthesize condStyleOwnerUID=_condStyleOwnerUID - In the implementation block
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * columnUids;                   //@synthesize columnUids=_columnUids - In the implementation block
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * rowUids;                      //@synthesize rowUids=_rowUids - In the implementation block
-(id)description;
-(void)saveToMessage:(RegionInfoArchive*)arg1 ;
-(UUIDData<TSP::UUIDData>)tableUID;
-(TSCEFormulaRewrite_Uids *)columnUids;
-(TSCEFormulaRewrite_Uids *)rowUids;
-(id)initFromMessage:(const RegionInfoArchive*)arg1 ;
-(UUIDData<TSP::UUIDData>)condStyleOwnerUID;
-(TSUCellCoord)topLeftCellCoord;
-(TSCERangeCoordinate)mergingRange;
-(void)unloadIndexes;
-(TSUCellCoord)bottomRightCellCoord;
-(id)initWithTableUID:(const UUIDData<TSP::UUIDData>*)arg1 columnUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 rowUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg3 ;
-(void)loadIndexesForTable:(id)arg1 uidResolver:(id)arg2 ;
@end

