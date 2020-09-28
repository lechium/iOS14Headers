/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSReading/TSPObject.h>

@interface TSCERangePrecedentsTile : TSPObject {

	unsigned short _toInternalOwnerID;
	map<TSUCellCoord, std::__1::set<TSUCellRect, std::__1::less<TSUCellRect>, std::__1::allocator<TSUCellRect> >, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, std::__1::set<TSUCellRect, std::__1::less<TSUCellRect>, std::__1::allocator<TSUCellRect> > > > >* _fromCoordToReferRect;

}

@property (nonatomic,readonly) unsigned long long numRangeRecords; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned short toInternalOwnerID;                //@synthesize toInternalOwnerID=_toInternalOwnerID - In the implementation block
-(BOOL)isEmpty;
-(id)description;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)addRect:(const TSUCellRect*)arg1 fromCoord:(const TSUCellCoord*)arg2 ;
-(id)initWithOwnerId:(unsigned short)arg1 context:(id)arg2 ;
-(unsigned long long)numRangeRecords;
-(void)removeRect:(const TSUCellRect*)arg1 fromCoord:(const TSUCellCoord*)arg2 ;
-(BOOL)containsFromCoord:(const TSUCellCoord*)arg1 ;
-(BOOL)containsRect:(const TSUCellRect*)arg1 fromCoord:(const TSUCellCoord*)arg2 ;
-(void)removeRectsForFromCoord:(const TSUCellCoord*)arg1 ;
-(void)enumerateAllRangesForFromCoord:(const TSUCellCoord*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAllRanges:(/*^block*/id)arg1 ;
-(unsigned short)toInternalOwnerID;
@end
