/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDataSection.h>

@class NSArray;

@interface PXArrayDataSection : PXDataSection {

	NSArray* _sectionContent;

}

@property (nonatomic,copy,readonly) NSArray * sectionContent;              //@synthesize sectionContent=_sectionContent - In the implementation block
-(long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithOutlineObject:(id)arg1 ;
-(id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2 ;
-(id)initWithSectionContent:(id)arg1 ;
-(long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2 ;
-(NSArray *)sectionContent;
-(id)objectAtIndex:(long long)arg1 ;
-(long long)count;
@end

