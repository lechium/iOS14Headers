/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKViewWithHairline.h>

@interface MKPlaceSectionItemView : MKViewWithHairline {

	BOOL _fullWidthHairline;

}

@property (assign,getter=isHairlineFullWidth,nonatomic) BOOL fullWidthHairline;              //@synthesize fullWidthHairline=_fullWidthHairline - In the implementation block
-(void)layoutMarginsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateHairlineInsets;
-(BOOL)isHairlineFullWidth;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)infoCardThemeChanged;
-(void)didMoveToWindow;
-(void)setFullWidthHairline:(BOOL)arg1 ;
@end

