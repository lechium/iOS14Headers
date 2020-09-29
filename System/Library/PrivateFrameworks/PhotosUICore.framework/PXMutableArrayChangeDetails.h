/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXArrayChangeDetails.h>

@interface PXMutableArrayChangeDetails : PXArrayChangeDetails {

	BOOL _isNonIncremental;

}
+(BOOL)_mutableCopyInputs;
+(id)changeDetailsWithNoIncrementalChanges;
-(void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_addRemovedIndexes:(id)arg1 ;
-(void)_updateMovesWithChangesDetails:(id)arg1 ;
-(void)_addAdditionalRemovedIndex:(unsigned long long)arg1 afterChangesIndex:(unsigned long long)arg2 ;
-(void)_addInsertedRange:(NSRange)arg1 ;
-(void)_addAdditionalRemovedIndexSet:(id)arg1 afterChangesIndex:(id)arg2 ;
-(void)_addRemovedIndex:(unsigned long long)arg1 ;
-(void)_becomeNonIncremental;
-(void)_updateChangedIndexesWithChangeDetails:(id)arg1 ;
-(BOOL)hasIncrementalChanges;
-(void)addChangeDetails:(id)arg1 ;
-(void)_addInsertedIndexes:(id)arg1 ;
@end
