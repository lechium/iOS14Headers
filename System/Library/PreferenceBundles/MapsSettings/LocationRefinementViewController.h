//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeViewController.h"

#import "MKMapViewDelegate-Protocol.h"

@class MKMapCamera, MKMapView, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol LocationRefinementViewControllerDelegate, MKMapViewDelegate;

@interface LocationRefinementViewController : MapsThemeViewController <MKMapViewDelegate>
{
    _Bool _needsInitialCameraPosition;	// 8 = 0x8
    _Bool _viewDidLoadComplete;	// 9 = 0x9
    _Bool _visible;	// 10 = 0xa
    id <LocationRefinementViewControllerDelegate> _delegate;	// 16 = 0x10
    MKMapView *_mapView;	// 24 = 0x18
    id <MKMapViewDelegate> _mapViewDelegate;	// 32 = 0x20
    UIView *_instructionsContainer;	// 40 = 0x28
    NSLayoutConstraint *_instructionsContainerBottomConstraint;	// 48 = 0x30
    UILabel *_instructionsLabel;	// 56 = 0x38
    NSArray *_mapViewConstraints;	// 64 = 0x40
    NSString *_instructionsText;	// 72 = 0x48
    NSLayoutConstraint *_userLocationButtonBottomConstraint;	// 80 = 0x50
    UIVisualEffectView *_snapToUserLocationContainerView;	// 88 = 0x58
    MKMapCamera *_initialCamera;	// 96 = 0x60
    UIButton *_snapToUserLocationButton;	// 104 = 0x68
    unsigned long long _crosshairType;	// 112 = 0x70
    UIImageView *_crosshairImageView;	// 120 = 0x78
    NSLayoutConstraint *_crosshairXConstraint;	// 128 = 0x80
    NSLayoutConstraint *_crosshairYConstraint;	// 136 = 0x88
    double _initialMapViewZoomLevel;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000001fd48
@property(nonatomic) double initialMapViewZoomLevel; // @synthesize initialMapViewZoomLevel=_initialMapViewZoomLevel;
@property(retain, nonatomic) NSLayoutConstraint *crosshairYConstraint; // @synthesize crosshairYConstraint=_crosshairYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *crosshairXConstraint; // @synthesize crosshairXConstraint=_crosshairXConstraint;
@property(retain, nonatomic) UIImageView *crosshairImageView; // @synthesize crosshairImageView=_crosshairImageView;
@property(readonly, nonatomic) unsigned long long crosshairType; // @synthesize crosshairType=_crosshairType;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool viewDidLoadComplete; // @synthesize viewDidLoadComplete=_viewDidLoadComplete;
@property(retain, nonatomic) UIButton *snapToUserLocationButton; // @synthesize snapToUserLocationButton=_snapToUserLocationButton;
@property(retain, nonatomic) MKMapCamera *initialCamera; // @synthesize initialCamera=_initialCamera;
@property(readonly, nonatomic) UIVisualEffectView *snapToUserLocationContainerView; // @synthesize snapToUserLocationContainerView=_snapToUserLocationContainerView;
@property(readonly, nonatomic) NSLayoutConstraint *userLocationButtonBottomConstraint; // @synthesize userLocationButtonBottomConstraint=_userLocationButtonBottomConstraint;
@property(copy, nonatomic) NSString *instructionsText; // @synthesize instructionsText=_instructionsText;
@property(retain, nonatomic) NSArray *mapViewConstraints; // @synthesize mapViewConstraints=_mapViewConstraints;
@property(readonly, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(readonly, nonatomic) NSLayoutConstraint *instructionsContainerBottomConstraint; // @synthesize instructionsContainerBottomConstraint=_instructionsContainerBottomConstraint;
@property(readonly, nonatomic) UIView *instructionsContainer; // @synthesize instructionsContainer=_instructionsContainer;
@property(nonatomic) _Bool needsInitialCameraPosition; // @synthesize needsInitialCameraPosition=_needsInitialCameraPosition;
@property(nonatomic) __weak id <MKMapViewDelegate> mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <LocationRefinementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recenterMapView;	// IMP=0x000000000001fa20
- (void)updateCrosshairConstraints;	// IMP=0x000000000001f7b8
- (void)setSelectedCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001f62c
@property(nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
- (void)updateLocateMeButtonState;	// IMP=0x000000000001f490
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001f43c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001f3b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001f364
- (void)applyInitialZoomLevel;	// IMP=0x000000000001f240
- (void)applyInitialCameraPosition;	// IMP=0x000000000001f1b8
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001f070
- (id)crosshairImage;	// IMP=0x000000000001eff4
- (void)updateTheme;	// IMP=0x000000000001eeec
- (void)_contentSizeChanged;	// IMP=0x000000000001ee84
- (void)viewDidLoad;	// IMP=0x000000000001d53c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d528
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001d514
- (id)initWithCamera:(id)arg1 crosshairType:(unsigned long long)arg2;	// IMP=0x000000000001d41c
- (id)initWithCamera:(id)arg1 showCrosshair:(_Bool)arg2;	// IMP=0x000000000001d404
- (struct CGPoint)mapView:(id)arg1 focusPointForPoint:(struct CGPoint)arg2 gesture:(long long)arg3;	// IMP=0x0000000000020310
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;	// IMP=0x0000000000020304
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x00000000000202f8
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;	// IMP=0x0000000000020204
- (void)mapViewDidFinishLoadingMap:(id)arg1;	// IMP=0x000000000002014c
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x000000000002008c
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000001ffd4
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000001ff30
- (_Bool)delegateProtocolHasInstanceMethod:(SEL)arg1;	// IMP=0x000000000001fec0
- (_Bool)protocol:(id)arg1 hasInstanceMethod:(SEL)arg2;	// IMP=0x000000000001fe50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

