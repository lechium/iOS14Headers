/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition {

	NSArray* _shutterSpeedValues;

}

@property (nonatomic,readonly) NSArray * shutterSpeedValues; 
@property (nonatomic,retain) PXLabeledValue * shutterSpeedValue; 
@property (nonatomic,retain) PXLabeledValue * secondShutterSpeedValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
+(id)formatter;
-(NSArray *)shutterSpeedValues;
-(PXLabeledValue *)shutterSpeedValue;
-(void)setShutterSpeedValue:(PXLabeledValue *)arg1 ;
-(PXLabeledValue *)secondShutterSpeedValue;
-(void)setSecondShutterSpeedValue:(PXLabeledValue *)arg1 ;
@end

