/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUserLocationView.h>

@class MKUserLocationView;

@interface _MKUserLocationInternalView : _MKUserLocationView {

	MKUserLocationView* _parentView;

}

@property (assign,nonatomic,__weak) MKUserLocationView * parentView;              //@synthesize parentView=_parentView - In the implementation block
-(id)_containerView;
-(id)_mapView;
-(MKUserLocationView *)parentView;
-(void)setParentView:(MKUserLocationView *)arg1 ;
-(id)_annotationContainer;
-(double)_pointsForDistance:(double)arg1 ;
@end
