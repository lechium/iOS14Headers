/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {

	TSUIntegerKeyDictionary* mDict;
	opaque_pthread_rwlock_t mDictRWLock;

}
-(void)dealloc;
-(id)init;
-(id)allCells;
-(void)setCell:(id)arg1 atCellID:(SCD_Struct_TS57)arg2 ;
-(id)cellAtCellID:(SCD_Struct_TS57)arg1 ;
-(void)removeAllCells;
-(void)applyBlockToAllCells:(/*^block*/id)arg1 ;
@end
