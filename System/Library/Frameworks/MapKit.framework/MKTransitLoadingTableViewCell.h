/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _loadingLabel;
	UIActivityIndicatorView* _loadingIndicator;

}
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)stopAnimating;
-(void)startAnimating;
@end
