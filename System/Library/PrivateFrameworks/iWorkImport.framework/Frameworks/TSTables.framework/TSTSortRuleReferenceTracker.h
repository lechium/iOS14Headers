/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSCEReferenceTrackerDelegate.h>

@class TSTTableInfo, NSMutableSet, TSCEReferenceTracker, NSString;

@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate> {

	TSTTableInfo* _tableInfo;
	NSMutableSet* _references;
	TSCEReferenceTracker* _referenceTracker;

}

@property (nonatomic,retain) NSMutableSet * references;                            //@synthesize references=_references - In the implementation block
@property (nonatomic,retain) TSCEReferenceTracker * referenceTracker;              //@synthesize referenceTracker=_referenceTracker - In the implementation block
@property (assign,nonatomic,__weak) TSTTableInfo * tableInfo;                      //@synthesize tableInfo=_tableInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)references;
-(void)setReferences:(NSMutableSet *)arg1 ;
-(TSTTableInfo *)tableInfo;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)encodeToArchive:(SortRuleReferenceTrackerArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const SortRuleReferenceTrackerArchive*)arg1 unarchiver:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)ownerUID;
-(void)setOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)registerWithCalcEngine:(id)arg1 ;
-(void)referencedCellWasModified:(id)arg1 ;
-(BOOL)shouldRewriteOnSort;
-(BOOL)shouldRewriteOnRangeMove;
-(BOOL)shouldRewriteOnTectonicShift;
-(BOOL)shouldRewriteOnCellMerge;
-(BOOL)shouldRewriteOnTranspose;
-(BOOL)shouldRewriteOnTableIDReassignment;
-(id)cellRangeWasInserted:(const TSCERangeRef*)arg1 ;
-(TSCEReferenceTracker *)referenceTracker;
-(void)unregisterFromCalcEngine;
-(id)initWithTableInfo:(id)arg1 context:(id)arg2 ;
-(void)updateForSortRules:(id)arg1 ;
-(TSCESpanningRangeRef)p_referenceForColumnIndex:(unsigned short)arg1 ;
-(id)p_ruleReferenceForTrackedReference:(id)arg1 ;
-(unsigned short)p_columnForTrackedReference:(id)arg1 ;
-(void)setReferenceTracker:(TSCEReferenceTracker *)arg1 ;
@end
