/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions {

	BOOL _showIconOnly;
	BOOL _showDescription;
	BOOL _showAccessoryView;
	double _lineSpacing;
	double _iconToTitleSpacing;

}

@property (assign,nonatomic) double lineSpacing;                                                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double iconToTitleSpacing;                                          //@synthesize iconToTitleSpacing=_iconToTitleSpacing - In the implementation block
@property (assign,getter=shouldShowIconOnly,nonatomic) BOOL showIconOnly;                        //@synthesize showIconOnly=_showIconOnly - In the implementation block
@property (assign,getter=shouldShowDescription,nonatomic) BOOL showDescription;                  //@synthesize showDescription=_showDescription - In the implementation block
@property (assign,getter=shouldShowAccessoryView,nonatomic) BOOL showAccessoryView;              //@synthesize showAccessoryView=_showAccessoryView - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(void)setShowDescription:(BOOL)arg1 ;
-(void)setShowAccessoryView:(BOOL)arg1 ;
-(BOOL)shouldShowIconOnly;
-(BOOL)shouldShowDescription;
-(double)iconToTitleSpacing;
-(BOOL)shouldShowAccessoryView;
-(void)setShowIconOnly:(BOOL)arg1 ;
-(void)setIconToTitleSpacing:(double)arg1 ;
@end

