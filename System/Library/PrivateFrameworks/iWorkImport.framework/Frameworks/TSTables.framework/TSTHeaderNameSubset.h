/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSTHeaderNameMgr, NSString;

@interface TSTHeaderNameSubset : NSObject {

	TSTHeaderNameMgr* _hnm;
	UUIDData<TSP::UUIDData> _limitedToTableUID;
	BOOL _includesPrefixes;
	unordered_map<NSString *, TSCECellRefSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, TSCECellRefSet> > >* _stringsInHeaderCells;
	unordered_map<NSString *, TSCECellRefSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, TSCECellRefSet> > >* _prefixStringsInHeaderCells;
	NSString* _originalFullReferenceString;

}

@property (nonatomic,readonly) UUIDData<TSP::UUIDData> limitedToTableUID;              //@synthesize limitedToTableUID=_limitedToTableUID - In the implementation block
@property (assign,nonatomic) BOOL includesPrefixes;                                    //@synthesize includesPrefixes=_includesPrefixes - In the implementation block
@property (nonatomic,readonly) NSString * originalFullReferenceString;                 //@synthesize originalFullReferenceString=_originalFullReferenceString - In the implementation block
-(id)description;
-(TSCECellRefSet*)headerCellsExactlyMatching:(id)arg1 ;
-(TSCECellRefSet*)headerCellsMatchingPrefix:(id)arg1 ;
-(BOOL)includesPrefixes;
-(id)initWithHeaderNameMgr:(id)arg1 limitToTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)loadSubsetWithExactMatches:(const unordered_map<NSString *, TSCEUidCellRefSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, TSCEUidCellRefSet> > >*)arg1 prefixMatches:(const unordered_map<NSString *, TSCEUidCellRefSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, TSCEUidCellRefSet> > >*)arg2 ;
-(UUIDData<TSP::UUIDData>)limitedToTableUID;
-(void)setIncludesPrefixes:(BOOL)arg1 ;
-(NSString *)originalFullReferenceString;
@end

