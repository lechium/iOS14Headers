/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTCellRegionIterating.h>
#import <TSTables/TSTMutableCellIteratorDataUpdating.h>

@class NSMutableArray, NSString;

@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> {

	TSUCellCoord _minCursorCellID;
	NSMutableArray* _iterators;
	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >* _cursorCellIDs;

}

@property (assign,nonatomic) TSUCellCoord minCursorCellID;                   //@synthesize minCursorCellID=_minCursorCellID - In the implementation block
@property (assign,nonatomic) vector<TSUCellCoord cursorCellIDs;              //@synthesize cursorCellIDs=_cursorCellIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * iterators;                     //@synthesize iterators=_iterators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)terminate;
-(id)init;
-(TSUCellCoord)getNext;
-(void)addIterator:(id)arg1 ;
-(TSUCellCoord)advanceToCellID:(TSUCellCoord)arg1 ;
-(void)updateCellData:(id)arg1 ;
-(void)updateFormulaForCellData:(id)arg1 ;
-(TSUCellCoord)minCursorCellID;
-(void)setMinCursorCellID:(TSUCellCoord)arg1 ;
-(vector<TSUCellCoord)cursorCellIDs;
-(void)setCursorCellIDs:(vector<TSUCellCoord)arg1 ;
-(NSMutableArray *)iterators;
-(void)setIterators:(NSMutableArray *)arg1 ;
@end
