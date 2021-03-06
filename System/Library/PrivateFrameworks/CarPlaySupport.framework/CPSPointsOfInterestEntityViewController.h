/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSBaseEntityContentViewController.h>

@class CPSPointsOfInterestMapViewController;

@interface CPSPointsOfInterestEntityViewController : CPSBaseEntityContentViewController {

	CPSPointsOfInterestMapViewController* _mapViewController;

}

@property (nonatomic,readonly) CPSPointsOfInterestMapViewController * mapViewController;              //@synthesize mapViewController=_mapViewController - In the implementation block
-(void)viewDidLoad;
-(void)setupViewControllers;
-(CPSPointsOfInterestMapViewController *)mapViewController;
-(id)initWithEntity:(id)arg1 resourceProvider:(id)arg2 ;
-(void)didUpdateEntity:(id)arg1 ;
-(BOOL)shouldAppearInUnsafeArea;
@end

