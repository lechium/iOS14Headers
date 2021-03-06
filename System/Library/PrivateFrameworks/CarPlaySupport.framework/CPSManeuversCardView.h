/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>
#import <libobjc.A.dylib/CPSCardPlatterProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class CPSCardPlatterView, NSArray, CPSPrimaryManeuverView, CPSSecondaryManeuverView, NSLayoutConstraint, CPSHairlineView, NSString;

@interface CPSManeuversCardView : UIView <CPSNavigationDisplaying, CPSCardPlatterProviding, BSInvalidatable> {

	BOOL _usesCustomBackgroundColor;
	BOOL _showSecondaryManeuverView;
	CPSCardPlatterView* _cardPlatterView;
	NSArray* _maneuvers;
	CPSPrimaryManeuverView* _primaryManeuverView;
	CPSSecondaryManeuverView* _secondaryManeuverView;
	NSArray* _secondaryHeightConstraints;
	NSLayoutConstraint* _platterBottomConstraint;
	CPSHairlineView* _hairlineView;

}

@property (nonatomic,retain) NSArray * maneuvers;                                           //@synthesize maneuvers=_maneuvers - In the implementation block
@property (nonatomic,retain) CPSPrimaryManeuverView * primaryManeuverView;                  //@synthesize primaryManeuverView=_primaryManeuverView - In the implementation block
@property (nonatomic,retain) CPSSecondaryManeuverView * secondaryManeuverView;              //@synthesize secondaryManeuverView=_secondaryManeuverView - In the implementation block
@property (nonatomic,retain) NSArray * secondaryHeightConstraints;                          //@synthesize secondaryHeightConstraints=_secondaryHeightConstraints - In the implementation block
@property (assign,nonatomic) BOOL showSecondaryManeuverView;                                //@synthesize showSecondaryManeuverView=_showSecondaryManeuverView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * platterBottomConstraint;                  //@synthesize platterBottomConstraint=_platterBottomConstraint - In the implementation block
@property (nonatomic,retain) CPSHairlineView * hairlineView;                                //@synthesize hairlineView=_hairlineView - In the implementation block
@property (assign,nonatomic) BOOL usesCustomBackgroundColor;                                //@synthesize usesCustomBackgroundColor=_usesCustomBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CPSCardPlatterView * cardPlatterView;                          //@synthesize cardPlatterView=_cardPlatterView - In the implementation block
-(void)_updateConstraints;
-(void)invalidate;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHairlineView:(CPSHairlineView *)arg1 ;
-(CPSHairlineView *)hairlineView;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2 ;
-(void)updateEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(CPSCardPlatterView *)cardPlatterView;
-(void)setCardPlatterView:(CPSCardPlatterView *)arg1 ;
-(CPSPrimaryManeuverView *)primaryManeuverView;
-(BOOL)showSecondaryManeuverView;
-(CPSSecondaryManeuverView *)secondaryManeuverView;
-(NSArray *)maneuvers;
-(void)setPrimaryManeuverView:(CPSPrimaryManeuverView *)arg1 ;
-(void)setSecondaryManeuverView:(CPSSecondaryManeuverView *)arg1 ;
-(void)setShowSecondaryManeuverView:(BOOL)arg1 ;
-(void)setManeuvers:(NSArray *)arg1 ;
-(BOOL)usesCustomBackgroundColor;
-(void)setUsesCustomBackgroundColor:(BOOL)arg1 ;
-(BOOL)canFitSize:(CGSize)arg1 ;
-(id)initWithManeuvers:(id)arg1 ;
-(NSLayoutConstraint *)platterBottomConstraint;
-(NSArray *)secondaryHeightConstraints;
-(void)setSecondaryHeightConstraints:(NSArray *)arg1 ;
-(void)setPlatterBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateSecondaryManeuverBackgroundColor;
-(void)_updateHairlineBackgroundColor;
@end

