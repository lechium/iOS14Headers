/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MKMuninContainerViewDelegate, NSObject;
@class UIColor, MKMapItem, MKMuninContainerBadgeView, UIActivityIndicatorView, UIView;

@interface MKMuninContainerView : UIView {

	UIColor* _dimmingViewBackgroundColorBlackOpaque;
	UIColor* _dimmingViewBackgroundColorBlackTranslucent;
	UIColor* _dimmingViewBackgroundColorClear;
	UIColor* _dimmingViewBackgroundColorPhotosOpaque;
	BOOL _photosDimmingStyle;
	BOOL _pipDimmingStyle;
	id<MKMuninContainerViewDelegate> _delegate;
	MKMapItem* _mapItem;
	unsigned long long _dimmingState;
	MKMuninContainerBadgeView* _badgeView;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _dimmingView;
	id<NSObject> _muninViewDidBecomeAdequatelyDrawnObserver;

}

@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorBlackOpaque; 
@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorBlackTranslucent; 
@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorClear; 
@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColorPhotosOpaque; 
@property (assign,nonatomic) BOOL photosDimmingStyle;                                             //@synthesize photosDimmingStyle=_photosDimmingStyle - In the implementation block
@property (assign,nonatomic) BOOL pipDimmingStyle;                                                //@synthesize pipDimmingStyle=_pipDimmingStyle - In the implementation block
@property (nonatomic,retain) MKMuninContainerBadgeView * badgeView;                               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                         //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) id<NSObject> muninViewDidBecomeAdequatelyDrawnObserver;              //@synthesize muninViewDidBecomeAdequatelyDrawnObserver=_muninViewDidBecomeAdequatelyDrawnObserver - In the implementation block
@property (assign,nonatomic,__weak) id<MKMuninContainerViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                 //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,getter=isBadgeHidden,nonatomic) BOOL badgeHidden; 
@property (assign,nonatomic) unsigned long long dimmingState;                                     //@synthesize dimmingState=_dimmingState - In the implementation block
-(MKMuninContainerBadgeView *)badgeView;
-(UIView *)dimmingView;
-(void)setBadgeView:(MKMuninContainerBadgeView *)arg1 ;
-(void)cancelIfPresent;
-(id)initWithPhotosDimmingStyle:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setMapItem:(id)arg1 wantsCloseUpView:(BOOL)arg2 ;
-(id)muninViewIfPresent;
-(void)dealloc;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)infoCardThemeChanged;
-(void)setDelegate:(id<MKMuninContainerViewDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithMuninView:(id)arg1 ;
-(id<MKMuninContainerViewDelegate>)delegate;
-(MKMapItem *)mapItem;
-(void)_updateDimmingViewBackgroundColor;
-(void)_updateDimmingViewActivityIndicator;
-(void)_updateDimmingStateForMuninView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_commonInitWithMuninView:(id)arg1 ;
-(void)setBadgeHidden:(BOOL)arg1 ;
-(void)setDimmingState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setDimmingViewHidden:(BOOL)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id<NSObject>)muninViewDidBecomeAdequatelyDrawnObserver;
-(unsigned long long)dimmingState;
-(void)setMuninViewDidBecomeAdequatelyDrawnObserver:(id<NSObject>)arg1 ;
-(UIColor *)dimmingViewBackgroundColorPhotosOpaque;
-(UIColor *)dimmingViewBackgroundColorClear;
-(UIColor *)dimmingViewBackgroundColorBlackTranslucent;
-(BOOL)isBadgeHidden;
-(UIColor *)dimmingViewBackgroundColorBlackOpaque;
-(void)setDimmingState:(unsigned long long)arg1 ;
-(BOOL)photosDimmingStyle;
-(void)setPhotosDimmingStyle:(BOOL)arg1 ;
-(BOOL)pipDimmingStyle;
-(void)setPipDimmingStyle:(BOOL)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
@end
