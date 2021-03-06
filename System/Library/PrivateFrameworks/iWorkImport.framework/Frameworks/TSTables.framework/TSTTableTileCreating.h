/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTTableTileCreating
@property (nonatomic,readonly) TSUModelRowIndex numberOfRows; 
@property (nonatomic,readonly) TSUModelColumnIndex numberOfColumns; 
@required
-(TSUModelRowIndex)numberOfRows;
-(TSUModelCellRect*)range;
-(TSUModelColumnIndex)numberOfColumns;
-(id)textStyleAtBaseCellCoord:(TSUModelCellCoord)arg1 isDefault:(out BOOL*)arg2;
-(void)enumerateCellsForSOSSerializationWithBlock:(/*^block*/id)arg1;

@end

