/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition {

	NSArray* _apertureValues;

}

@property (nonatomic,readonly) NSArray * apertureValues; 
@property (nonatomic,retain) PXLabeledValue * apertureValue; 
@property (nonatomic,retain) PXLabeledValue * secondApertureValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
+(id)formatter;
-(PXLabeledValue *)secondApertureValue;
-(void)setSecondApertureValue:(PXLabeledValue *)arg1 ;
-(NSArray *)apertureValues;
-(PXLabeledValue *)apertureValue;
-(void)setApertureValue:(PXLabeledValue *)arg1 ;
@end

