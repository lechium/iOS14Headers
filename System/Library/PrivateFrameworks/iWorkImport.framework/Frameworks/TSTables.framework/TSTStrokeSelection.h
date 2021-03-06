/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSReading/TSKSelection.h>

@interface TSTStrokeSelection : TSKSelection {

	unsigned _mask;

}

@property (nonatomic,readonly) unsigned mask;              //@synthesize mask=_mask - In the implementation block
+(Class)archivedSelectionClass;
+(id)strokeSelectionWithMask:(unsigned)arg1 ;
-(unsigned)mask;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArchive:(const StrokeSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(StrokeSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithStrokeVisibilityMask:(unsigned)arg1 ;
@end

