/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCETrackedReference;

@interface TSTSortRuleReferenceTrackerReference : NSObject {

	unsigned short _columnIndex;
	TSCETrackedReference* _trackedReference;

}

@property (assign,nonatomic) unsigned short columnIndex;                           //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,retain) TSCETrackedReference * trackedReference;              //@synthesize trackedReference=_trackedReference - In the implementation block
+(id)referenceWithColumnIndex:(unsigned short)arg1 trackedReference:(id)arg2 ;
-(void)setColumnIndex:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)columnIndex;
-(BOOL)hasTrackedReferenceEqualTo:(id)arg1 ;
-(id)initWithColumnIndex:(unsigned short)arg1 trackedReference:(id)arg2 ;
-(TSCETrackedReference *)trackedReference;
-(void)setTrackedReference:(TSCETrackedReference *)arg1 ;
@end

