/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewBase.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, CNContact, _UILegibilityView, NSString;

@interface CSUserPictureView : CSCoverSheetViewBase <SBUILegibility> {

	CNContact* _contact;
	_UILegibilityView* _monogramLegibilityView;
	double _legibilityStrength;
	_UILegibilitySettings* _legibilitySettings;
	double _diameter;

}

@property (nonatomic,copy) CNContact * contact;                                       //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) double diameter;                                         //@synthesize diameter=_diameter - In the implementation block
@property (assign,nonatomic) double strength;                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(CNContact *)contact;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)presentationRegions;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setDiameter:(double)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(double)strength;
-(double)diameter;
-(void)setStrength:(double)arg1 ;
-(void)_regenerateImage;
@end
