/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSingleViewLayoutConfiguration.h>

@class PXGSingleViewLayout, NSString, UIImage, PXCuratedLibrarySectionHeaderLayoutSpec, _PXImportSectionHeaderLayout;

@interface _PXImportSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration> {

	NSString* _primaryText;
	NSString* _secondaryText;
	long long _actionType;
	NSString* _backdropViewGroupName;
	UIImage* _gradientImage;
	double _gradientAlpha;
	double _gradientOverhang;
	PXCuratedLibrarySectionHeaderLayoutSpec* _buttonSpec;
	_PXImportSectionHeaderLayout* _weakLayout;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * primaryText;                                              //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                                            //@synthesize secondaryText=_secondaryText - In the implementation block
@property (assign,nonatomic) long long actionType;                                              //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                                    //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (nonatomic,retain) UIImage * gradientImage;                                           //@synthesize gradientImage=_gradientImage - In the implementation block
@property (assign,nonatomic) double gradientAlpha;                                              //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
@property (assign,nonatomic) double gradientOverhang;                                           //@synthesize gradientOverhang=_gradientOverhang - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * buttonSpec;              //@synthesize buttonSpec=_buttonSpec - In the implementation block
@property (assign,nonatomic,__weak) _PXImportSectionHeaderLayout * weakLayout;                  //@synthesize weakLayout=_weakLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(long long)actionType;
-(UIEdgeInsets)edgeInsets;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(NSString *)backdropViewGroupName;
-(void)setGradientImage:(UIImage *)arg1 ;
-(void)setGradientAlpha:(double)arg1 ;
-(void)setButtonSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(UIImage *)gradientImage;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)buttonSpec;
-(void)setActionType:(long long)arg1 ;
-(double)gradientAlpha;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(_PXImportSectionHeaderLayout *)weakLayout;
-(void)setGradientOverhang:(double)arg1 ;
-(void)setWeakLayout:(_PXImportSectionHeaderLayout *)arg1 ;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(double)gradientOverhang;
@end
